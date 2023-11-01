/*Faça um programa que receba o peso de 10 pessoas.
Uma função com retorno deverá ser chamada após a
leitura de cada peso e deverá acumular os pesos.
Após o término da entrada de dados, a função principal
deverá calcular e mostrar a média dos pesos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float acumulador(float pesos);
int main()
{
    setlocale (LC_ALL, "Portuguese");

    float pesos, x1, media;
    int x;

    for (x=1;x<=10;x++){
        printf ("\nInsira o peso:\n");
        scanf ("%f", &pesos);

       x1=acumulador(pesos);


    } media = x1/10;

    printf ("Media dos pesos: %.2f", media);


}
float acumulador(float pesos){
 static float soma=0;
 soma = soma+pesos;

  return soma;


}
