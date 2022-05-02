#include <stdio.h>

/* de 0 a 32 representa apenas comandos para impressão, após o 32 temos os caracteres normais para impressão */
/*
   Tabela ASCII
   "0" => 0x30 = 3 X 16 + 0 = 48
   "1" => 0x31 = 3 X 16 + 1 = 49
   ....
   "9" => 0x39 = 3 X 16 + 9 = 57
   ....
   "A" => 0x41 = 4 X 16 + 1 = 65
   "Z" => 0x5a = 5 X 16 + 10 = 90
   "a" => 0x61 = 6 X 16 + 1 = 97
   "z" => 0x7a = 7 X 16 + 10 = 122
*/

char toupper (char c);

char toupper (char c) {
    char letra;
    if (c <= 'z' && c >= 'a') letra = c + ('A' - 'a');
    else letra = c;
return letra;
}

int main () {
    char c;
    int vogais = 0;
    while (c != '.') {
        scanf ("%c", &c);
        c = toupper (c);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') vogais++;
    }
    printf ("Ha %d vogais na sequencia.", vogais);
return 0;
}
