#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escreva um algoritmo que pergunte ao usuário se deseja inserir mais uma nota, se a resposta do usuário for “NÃO”, 
//o programa fará a média aritmética das notas informadas e mostrará a média aritmética para o usuário.
//Obs.: Use um contador dentro do laço de repetição para contar a quantidade e iterações (loops).

int main()
{

//Variaveis
char resposta[5];
int contador,somaNotas;
float media, nota;

//Solicitando
  do
 {
    printf("Informe a nota: ");
    scanf("%f",&nota);

    printf("Deseja informar a nota? ");
    gets(resposta);

    somaNotas += nota;
    contador++;
    
 }  while (strcmp(resposta,"Nao") == 0);
 
//Mostrando
    media = somaNotas / contador;
 printf("Media:%f\n",media);
 

    return 0;
}