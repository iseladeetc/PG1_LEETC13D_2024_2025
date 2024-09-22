/**
 * Programa para determinar a nota final através do cálculo da média 
 * entre a nota teorica e a nota prática 
 * 
 * Nesta versão é validado se as notas lidas se encontram no intervalo [0..20]
 * e em caso de valor fora deste intervalo volta a ler novo valor.
 * Para suportar esta leitura foi escrita a função  read_int_in_range
 */
#include <stdio.h>

int read_int_in_range (int low, int high)
{
    int value;
    do {
        printf("Indique um valor inteiro [%d..%d] ", low, high);
        scanf("%d", &value);

        if (value < low || value > high) {
            printf("Valor fora do intervalo [%d..%d]\n", low, high);
        }
    } while (value < low || value > high);
    return value;
}

int main ()
{
    // 1. Ler Nota Teórica
    int nota_teorica;
    printf("Indique a nota teórica:\n");
    nota_teorica = read_int_in_range(0, 100);

    // 2. Ler Nota Prática
    int nota_pratica;
    printf("Indique a nota prática:\n");
    nota_pratica = read_int_in_range(0, 100);


    //3. Calcular a média
    float media;
    media = (float)(nota_teorica + nota_pratica) / 2;

    // 4. Apresentar Média
    printf("Nota teórica lida = %d\n", nota_teorica);
    printf("Nota prática lida = %d\n", nota_pratica);
    printf("Média = %5.2f\n", media);

    return 0;
}