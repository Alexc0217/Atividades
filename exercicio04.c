#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*
             Nome		                    RA
             Abdallah Yaziji                21426931
             Alex Costa de Moura     	    21420700
             Pedro Henrique Molonhoni 	    21263734
             Rafael Esposo Valente		    21384176
             Vitor Rodrigues Araujo 	    21464490
*/


int* alocaVetor(int n); // fun��o para alocar o vetor
void recebeVetor(int *vetor,int n); // fun��o para receber o vetor


int main(){
    setlocale(LC_ALL,"Portuguese"); // fun��o para colocar em portugu�s
    int *vetor, n; // declarando as variaveis
    printf("\nDigite um valor inteiro POSITIVO. "); // entrada de dados:
    do{
        printf("\n...: ");
        scanf("%d",&n);
        if(n <= 0){
            printf("\nO valor n�o pode ser negativo, tente novamente. ");
        }
    }while(n <= 0); // do while para caso o usuario digite um n�mero abaixo de 0 ter que enviar outro n�mero

    vetor = alocaVetor(n); // recebendo a fun��o
    recebeVetor(&vetor[0],n); // fun��o void para receber o vetor
    printf("\nN�meros que voc� digitou: "); // exibindo os n�meros que o usuarios enviou
    for(int i=0; i<n; i++){
        printf("\n%d",vetor[i]);
    }
    return 0;
}

int* alocaVetor(int n){ // escopo da fun��o que aloca o vetor
    int *aux;
    aux = (int*) malloc(n * sizeof(int));
    return aux;
}

void recebeVetor(int *vetor,int n){ // escopo da fun��o que recebe os n�meros para o vetor
    int i;
    printf("\nDigite %d inteiros para preencher seu vetor. ",n);
    for(i=0; i<n; i++){
        do{
            printf("\n...: ");
            scanf("%d",vetor);
            if(*vetor < 2){
                printf("\nVoc� dever� colocar um valor maior ou igual a 2, tente novamente.");
            }
        }while(*vetor < 2);
        vetor++;
    }
}
