/*
    Name: Lista.c
    Author: Kaio Campos
    Date: 28/04/26
    Description: Programa para entender o funcionamento de uma estrutura de dados do tipo Lista Ligada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura de um nó
typedef struct No {
    char nome[20];
    int idade;
    struct No *prox;
} No;

// Variável Global
int tamanho;

// Protótipos
int vazia(No *);
No *alocaMemoria();
void insereFim(No *);
void insereInicio(No *);
No *retiraInicio(No *);
void exibirLista(No *);
void iniciarLista(No *);
int menu();
void tratarOpcao(No *, int);

int main() {
    // Criando o nó cabeça (sentinela)
    No *Lista = (No *) malloc(sizeof(No));

    if(!Lista) {
        puts("Sem memoria para criar lista!!!");
        exit(1);
    }

    iniciarLista(Lista);

    int opc;
    do {
        opc = menu();
        tratarOpcao(Lista, opc);
    } while(opc != 0);

    return 0;
}

// Inicia a lista apontando o nó cabeça para NULL
void iniciarLista(No *Lista) {
    Lista->prox = NULL;
    tamanho = 0;
}

int vazia(No *Lista) {
    return (Lista->prox == NULL);
}

// Aloca memória para um novo nó e lê os dados
No *alocaMemoria() {
    No *novo = (No *) malloc(sizeof(No));
    if(!novo) {
        puts("Sem memoria!");
        exit(1);
    }
    printf("Nome: ");
    scanf("%s", novo->nome);
    printf("Idade: ");
    scanf("%d", &novo->idade);
    return novo;
}

// Inserir no INÍCIO (mais rápido que no fim)
void insereInicio(No *Lista) {
    No *novo = alocaMemoria();
    novo->prox = Lista->prox;
    Lista->prox = novo;
    tamanho++;
}

// Inserir no FIM (precisa percorrer a lista toda)
void insereFim(No *Lista) {
    No *novo = alocaMemoria();
    novo->prox = NULL;
    
    if(vazia(Lista)) {
        Lista->prox = novo;
    } else {
        No *tmp = Lista->prox;
        while(tmp->prox != NULL)
            tmp = tmp->prox;
        tmp->prox = novo;
    }
    tamanho++;
}

// Exibe os elementos
void exibirLista(No *Lista) {
    if(vazia(Lista)) {
        puts("\n=====>> Lista Vazia");
    } else {
        No *tmp = Lista->prox;
        printf("\nLista (%d elementos):\n", tamanho);
        while(tmp != NULL) {
            printf("[%s | %d] -> ", tmp->nome, tmp->idade);
            tmp = tmp->prox;
        }
        printf("NULL\n");
    }
}

int menu() {
    int opc;
    printf("\n---------- MENU LISTA ----------");
    printf("\n1 - Inserir no Inicio");
    printf("\n2 - Inserir no Fim");
    printf("\n3 - Exibir Lista");
    printf("\n0 - Sair");
    printf("\nEscolha: ");
    scanf("%d", &opc);
    return opc;
}

void tratarOpcao(No *Lista, int opc) {
    switch(opc) {
        case 1: insereInicio(Lista); break;
        case 2: insereFim(Lista); break;
        case 3: exibirLista(Lista); break;
        case 0: printf("\nSaindo..."); break;
        default: printf("\nOpcao invalida!");
    }
}
