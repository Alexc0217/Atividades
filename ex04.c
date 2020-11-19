#include<stdlib.h>
#include<stdio.h>
#include<locale.h>



int* alocaVetor(int n); // função para alocar o vetor
void recebeVetor(int *vetor,int n); // função para receber o vetor


int main(){
    setlocale(LC_ALL,"Portuguese"); // função para colocar em português
    int *vetor, n; // declarando as variaveis
    printf("\nDigite um valor inteiro POSITIVO. "); // entrada de dados:
    do{
        printf("\n...: ");
        scanf("%d",&n);
        if(n <= 0){
            printf("\nO valor não pode ser negativo, tente novamente. ");
        }
    }while(n <= 0); // do while para caso o usuario digite um número abaixo de 0 ter que enviar outro número

    vetor = alocaVetor(n); // recebendo a função
    recebeVetor(&vetor[0],n); // função void para receber o vetor
    printf("\nNúmeros que você digitou: "); // exibindo os números que o usuarios enviou
    for(int i=0; i<n; i++){
        printf("\n%d",vetor[i]);
    }
    return 0;
}

int* alocaVetor(int n){ // escopo da função que aloca o vetor
    int *aux;
    aux = (int*) malloc(n * sizeof(int));
    return aux;
}

void recebeVetor(int *vetor,int n){ // escopo da função que recebe os números para o vetor
    int i;
    printf("\nDigite %d inteiros para preencher seu vetor. ",n);
    for(i=0; i<n; i++){
        do{
            printf("\n...: ");
            scanf("%d",vetor);
            if(*vetor < 2){
                printf("\nVocê deverá colocar um valor maior ou igual a 2, tente novamente.");
            }
        }while(*vetor < 2);
        vetor++;
    }
}
