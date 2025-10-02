#include <stdio.h>
int main () {

    char nome [50];//array de caracteres para armazenar o nome 1
    int idade;     //array de idade
    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");

    scanf("%d", &idade);
    printf("OLÁ %s, você tem %d anos!\n",nome, idade);
    if (idade >= 18){
        printf("Você tem %d anos pode tirar sua carteira de motorista!\n", idade);
    }else{
        printf("Você tem %d anos não podetirar sua carteira de motorista!\n ", idade);
    }
    return 0;
}