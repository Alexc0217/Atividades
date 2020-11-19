#include<stdio.h>
#include<stdlib.h>
// exercicio 03
/*  Nome		                            RA
    Abdallah Yaziji               			21426931
    Alex Costa de Moura     				21420700
    Pedro Henrique Molonhoni 				21263734
    Rafael Esposo Valente			 		21384176
    Vitor Rodrigues Araujo 					21464490
*/


void receberValores(int *valores, int quantidade); // função que recebe os valores
int checarMaior(int *valores, int maior, int quantidade); // função para checar qual o maior valor
int checarOcorrencias(int *valores, int vezes, int *maior); // função para checar quantas vezes ocorreu esse valor no programa.

int main(){
    int i,maior = 0, vezes = 0, quantidade; // variaveis necessarias para o funcionamento do programa.
    printf("\nQuantos valores deseja digitar? ");
    printf("...: ");
    scanf("%d",&quantidade);
    int valores[quantidade];
    receberValores(&valores,quantidade); // recebendo os valores
    maior = checarMaior(&valores,maior, quantidade); // checando qual o maior valor
    printf("\nMaior valor: %d",maior); // exibindo o maior valor
    vezes = checarOcorrencias(&valores,vezes,&maior); // checando quantas vezes ele aparece
    printf("\nApareceu %d vezes.\n",vezes); // exibindo quantas vezes ele apareceu
    return 0;
}

void receberValores(int *valores, int quantidade){ // escopo da função que recebe os valores
    int i;
    printf("\nDigite %d valores. \n",quantidade);
    for(i=0; i<quantidade; i++){
        printf("...: ");
        scanf("%d",valores);
        valores++;
    }
}

int checarMaior(int *valores, int maior, int quantidade){ // escopo da função que checa o maior
    int i;
    for(i=0; i<quantidade; i++){
        if(*valores > maior){
            maior = *valores;
            if(*valores > maior){
                maior = *valores;
            }
        }
        valores++;
    }
    return maior; // retornando o maior
}

int checarOcorrencias(int *valores, int vezes, int *maior){ // escopo da função que checa quantas ocorrencias teve
    int i;
    for(i=0; i<5; i++){
        if(*valores == *maior){
            vezes++;
        }
        valores++;
    }
    return vezes; // retornando quantas vezes ocorreu.
}
