#include <stdio.h>

int main(){
    int notas[5]; //declara um array de 5 posições para armazenar as notas
    int i;        //variável de controple para o loop

    printf("Digite 5 notas: \n"); //entrada do usuaria

    for (i = 0; i < 5; i++){
        scanf("%d",&notas[i]); //lê uma nota e armazena na posição i do array
    }
   
    printf("\n Notas digitadas:\n"); //exibição para o usuário

    for (i = 0; i < 5; i++){
        printf ("%d\n", notas[i]); //imprime a nota da posição i
    }

return 0;
}