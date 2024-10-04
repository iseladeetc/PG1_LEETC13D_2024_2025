#include <stdio.h>
#include <stdbool.h>

bool e_digito(char ch)
{
    return (ch >= '0' & ch <= '9');
    
    // if (ch >= '0' & ch <= '9') return true;
    // return false;
}

int read_int_char_by_char ()
{
    int value = 0;

     char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        // Estamos assumir que no ch está um caracter algarismo
        if ( ! e_digito(ch) ) {
            return 0;
        }
        int digit = ch - '0';
        value = value * 10 + digit;
       scanf("%c", &ch);
    }
    return value;
}

int main ()
{
   printf("indique valor inteiro: ");
   int value = read_int_char_by_char();
   printf("Valor lido = %d\n", value);
    // char ch;
    // scanf("%c", &ch);
    // while (ch != '\n') {
    //     printf("ch = %c - %d\n", ch, ch);
    //     scanf("%c", &ch);
    // }
    // printf("último caracter lido ch = %c - %d\n", ch, ch);
    return 0;
}