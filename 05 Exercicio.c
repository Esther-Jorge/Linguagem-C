#include <stdio.h>
#include <stdlib.h>

//média,soma,produto,menor valor, maior valor
int main(){

//Variaveis
int n1;
int n2;
float media;
int soma;
int produto;

//Solicitando
printf(" Digite o numero:\n");
scanf("%d",&n1);
printf(" Digite o segundo valor:\n");
scanf("%d",&n2);

media == (n1+n2)/2;
soma == n1+n2;
produto == n1*n2;

//Mostrando
printf("Media:%f\n",media);
printf("Soma:%d\n",soma);
printf("Produto:%d\n"produto);


    return 0;
}