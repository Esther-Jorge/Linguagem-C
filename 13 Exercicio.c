#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char resposta[4];
float nota, media, somaNotas;
int contador;


do
{
    printf(" Digite uma nota: ");
    scanf("%f",&nota);

    fflush(stdin);

    printf("Deseja inserir mais uma nota? ");
    gets(resposta);

    contador++;
    somaNotas += nota;

} while (strcmp(resposta,"Sim") == 0);

media = somaNotas / contador;
printf("Media:%f\n",media);



    return 0;
}