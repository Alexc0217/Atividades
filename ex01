#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<locale.h>


typedef struct{ // struct com os dados do atleta
    char nome[30];
    char esporte[30];
    int idade;
    float altura;
}cl_atleta;


void lerAtletas(cl_atleta *Atleta); // função que lê os dados do atleta
void maiorAtleta(cl_atleta *Atleta, float *maisAlto, int *indiceAlto); // função que define qual é o maior atleta entre os atletas lidos
void atletaMaisVelho(cl_atleta *Atleta, int *maisVelho, int *indiceVelho); // função que define qual é o atleta mais velho entre os atletas lidos
void exibirMaior(cl_atleta *Atleta, int *indiceAlto); // função que exibe o maior atleta
void exibirMaisVelho(cl_atleta *Atleta, int *indiceVelho); // função que exibe o atleta mais velho


int main(){
    int maisVelho = 0, indiceAlto = 0, indiceVelho = 0; // variaveis que serão manipuladas na função, com ponteiro
    float maisAlto = 0.0;
    setlocale(LC_ALL,"Portuguese"); // função para deixar na nossa linguagem.
    cl_atleta Atleta[5]; // definindo a struct
    lerAtletas(&Atleta[0]); // passando a struct pelo indice 0 para conseguir acessar ela inteira dentro da função.
    maiorAtleta(&Atleta[0],&maisAlto,&indiceAlto);
    atletaMaisVelho(&Atleta[0],&maisVelho,&indiceVelho);
    exibirMaior(&Atleta,&indiceAlto);
    exibirMaisVelho(&Atleta[0],&indiceVelho);
    return 0;
}

void lerAtletas(cl_atleta *Atleta){ // função que lê os atletas
    int i;
    for(i=0; i<5; i++){
        printf("Digite o nome do %d atleta\n",i+1);
        setbuf(stdin, NULL);
        printf("...: ");
        gets(Atleta->nome);
        printf("Digite o esporte do %d atleta\n",i+1);
        setbuf(stdin, NULL);
        printf("...: ");
        gets(Atleta->esporte);
        printf("Digite a idade do %d atleta\n",i+1);
        printf("...: ");
        scanf("%d",&Atleta->idade);
        printf("Digite a altura do %d atleta\n",i+1);
        printf("...: ");
        scanf("%f",&Atleta->altura);
        puts("");
        Atleta++;
    }
}

void maiorAtleta(cl_atleta *Atleta,float *maisAlto, int *indiceAlto){ // função que define o maior atleta
    int i;
    for(i=0; i<5; i++){
        if(Atleta->altura > *maisAlto){
            *maisAlto = Atleta->altura;
            *indiceAlto = i;
        }
        Atleta++;
    }
}

void atletaMaisVelho(cl_atleta *Atleta, int *maisVelho, int *indiceVelho){ // função que define o atleta mais velho
    int i;
    for(i=0; i<5; i++){
        if(Atleta->idade > *maisVelho){
            *maisVelho = Atleta->idade;
            *indiceVelho = i;
        }
        Atleta++;
    }
}

void exibirMaior(cl_atleta *Atleta, int *indiceAlto){ // função feita para exibir o maior atleta
    printf("\n----- ATLETA MAIS ALTO ----\n");
    printf("\nMaior atleta:\nNome: %s\nEsporte: %s\nIdade: %d\nAltura: %.2f",Atleta[*indiceAlto].nome, Atleta[*indiceAlto].esporte, Atleta[*indiceAlto].idade, Atleta[*indiceAlto].altura);
    printf("\n----------------------------\n");
}

void exibirMaisVelho(cl_atleta *Atleta, int *indiceVelho){ // função feita para exibir o atleta mais velho
    printf("\n----- ATLETA MAIS VELHO ----\n");
    printf("\nAtleta mais velho:\nNome: %s\nEsporte: %s\nIdade: %d\nAltura: %.2f",Atleta[*indiceVelho].nome, Atleta[*indiceVelho].esporte, Atleta[*indiceVelho].idade, Atleta[*indiceVelho].altura);
    printf("\n----------------------------\n");
}
