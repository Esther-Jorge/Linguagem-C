#include <stdio.h>
#include <stdlib.h>

 int main ()
 
 {

 float v1, v2, media, soma, produto;

printf("DIGITE O 1 VALOR: \n");
scanf("%f",&v1);

printf("DIGITE O 2 VALOR: \n");
scanf("%f",&v2);

soma = (v1+v2);
produto = (v1*v2);
media = (v1+v2)/2;

printf("O RESULTADO DA SOMA: %.0f \n",soma);
printf("O RESULTADO DA MULTIPLICACAO: %.0f \n",produto);
printf("A MEDIA: %.1f \n",media);


if (v1 > v2) {
    printf("O MAIOR VALOR: %.0f \n",v1);
    printf("O MENOR VALOR: %.0f \n", v2);
 } else {
    printf("O MAIOR VALOR: %.0f \n",v2);
    printf("O MENOR VALOR: %.0f \n", v1);
 }

 return 0;
 }