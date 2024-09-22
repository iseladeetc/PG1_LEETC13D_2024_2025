/**
 * Programa para determinar a nota final através do cálculo da média 
 * entre a nota teorica e a nota prática 
 */
#include <stdio.h>

// comentário linha
/*
    comentário de bloco
*/
int main ()
{
    // 1. Ler Nota Teórica
    // <tipo da variável> <nome variável>
    int nota_teorica;
    printf("Indique a nota teórica ");
    scanf("%d", &nota_teorica);

    printf("Nota teorica lida = %d\n", nota_teorica);
    return 0;
}