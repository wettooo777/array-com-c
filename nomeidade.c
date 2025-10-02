#include <stdio.h>
int main () {

    char nome [50];//array de caracteres para armazenar o nome 1
    int idade;     //array de idade
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("OLÁ %s, você tem %d anos!\n",nome, idade);
    return 0;
}