#include <stdio.h>
#include <stdlib.h>

//Escrever um programa de computador que leia 5 números inteiros e, ao final, apresente a soma de todos os números lidos.

int main(){
    
    int i, numeros, soma, somaNumeros;

    for ( i = 0; i < 5; i++)
    {
        printf("Informe um valor: ");
        scanf("%d",&numeros);

        somaNumeros += numeros;
    }
    printf("Soma: %d\n",somaNumeros);

    return 0;
}