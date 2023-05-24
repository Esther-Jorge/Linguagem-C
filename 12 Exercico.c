#include <stdio.h>
#include <stdlib.h>

//Escreva um algoritmo que leia 5 valores inteiros e ao final mostre: 
//a) quantos números são pares; b) quantos números são impares;

int main(){

//Variaveis
int i, valor;

//Solicitando

for ( i = 0; i < 5; i++)
{
    printf("Informe um valor: ");
    scanf("%d\n",&valor);

if(valor % 2 == 0){
    printf("Par: ");
}else{
    printf("Impar: ");
}
}
//Mostrando

    return 0;
}