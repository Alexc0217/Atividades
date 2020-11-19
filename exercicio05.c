#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<locale.h>
#include<time.h>

/*
             Nome		                    RA
             Abdallah Yaziji                21426931
             Alex Costa de Moura     	    21420700
             Pedro Henrique Molonhoni 	    21263734
             Rafael Esposo Valente		    21384176
             Vitor Rodrigues Araujo 	    21464490
*/


int* valores_entre(int *v, int tam, int min, int max, int *qtd); // fun��o que checa os valores do primeiro vetor e retorna um vetor alocado dinamicamente com todos os valores entre o valor minimo e maximo do vetor


int main(){
    setlocale(LC_ALL,"Portuguese"); // funcao para colocar o codigo em portugu�s
    int i,vetorUm[5],*vetorDois,tam,min,max,qtd = 0,valores; // definindo as variaveis (n�o utilizei a variavel "tam", por�m deixei ela no codigo pois o exercicio pedia para incluir ela nos parametros da funcao)
    printf("Digite um valor at� 100 para gerar n�meros aleatorios...: "); // pedindo um valor para gerar numero aleatorios (por exemplo, valor: 10. Gera valor entre 1 e 10.)
    scanf("%d",&valores);// recebendo o valor
    srand(time(NULL)); // funcao para gerar numeros aleatorios a cada segundo que passa
    for(i=0; i<5; i++){
        vetorUm[i] = rand() % valores + 1; // recebendo os valores aleatorios no primeiro vetor
    }
    min = vetorUm[0];
    max = vetorUm[0];
    puts("\nValores gerados aleatoriamente no primeiro vetor: ");
    for(i=0; i<5; i++){ // mostrando os valores gerados para o primeiro vetor, para que o usuario saiba se o seu minimo e maximo est� certo
        printf("[%d]\n",vetorUm[i]);
        if(vetorUm[i] < min){
            min = vetorUm[i];
        }
        if(vetorUm[i] > max){
            max = vetorUm[i];
        }
    }
    vetorDois = valores_entre(vetorUm,tam,min,max,&qtd); // ponteiro "vetorDois" recebendo um vetor alocado dinamicamente.
    printf("\nMenor valor: [%d]\nMaior valor: [%d]\n",min,max); // exibindo o menor e maior valor, para que o usuario tenha certeza que o c�digo est� rodando corretamente
    printf("\nValores entre o valor m�nimo e valor m�ximo: \n");
    for(i=min; i<max; i++){ // exibindo os valores que foram colocados no vetor alocado dinamicamente
        if(i>min){
            printf("[%d]\n",*(vetorDois + i));
        }
    }
    printf("\nQuantidade de valores entre o valor m�nimo e valor m�ximo (vetor alocado dinamicamente): %d\n\n",qtd); // exibindo a quantidade de valores entre o valor minimo e valor maximo
    return 0;
}


int* valores_entre(int *v, int tam, int min, int max, int *qtd){ // escopo da fun��o valores_entre
    int i;
    int *aux; // definindo um ponteiro auxiliar para retornar a o vetor alocado dinamicamente
    for(i=min; i<max; i++){ // verificando a quantidade de valores entre o minimo e o maximo
        if(i>min){
            ++*qtd;
        }
    }
    aux = (int*) malloc(*qtd * sizeof(int)); // alocando o vetor dinamicamente
    for(i=min; i<max; i++){ // vetor recebendo os numeros entre o minimo e maximo
        if(i>min){
            *(aux + i)= i;
        }
    }
    return aux; // retornando o ponteiro contendo o vetor alocado dinamicamente
}
