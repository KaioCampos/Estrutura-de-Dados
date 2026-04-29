/*
	Name: Pilha.c
	Author: kaio campos
	Date: 31/03/26 20:03
	Description: Implementação do conceito de Pilha - LIFO (Last in, First out)
*/

//Sessão de importação de biblioteca
#include<stdio.h>
#include<stdlib.h>

//Sessão de prototipação
void push(int); //Função que insere na pilha
int pop();//Função que retira um elemento da pilha
int isFull();//Testa se a pilha esta cheia
int isEmpty();//Testa se a pilha esta vazia
void exibirPilha();//Mostra todo o conteudo da pilha
void menu();//Função para apresentar um menu de opções

//Variaveis globais
int pilha [5];
int topo = -1;

int main()
{
	while(1)
	{
		menu();
	}
	
	return 0;
}

//Função que insere na pilha
void push(int elem)
{
	if(isFull() == 1)
		printf("\nStack overflow - Pilha cheia!\n");
	else
	{
		topo++;
		pilha[topo] = elem;
		printf("\nElemento %d inserido na pilha\n\n", elem);
	}
}

//Função que retira um elemento da pilha
int pop()
{
	if(isEmpty() == 1)
	{
		printf("\nPilha esta vazia!\n");
		return -1;
	}
	
	else
	{
		int elemento;
		elemento = pilha[topo];
		topo--;
		printf("\n%d foi retirado da pilha\n\n", elemento);
		return elemento;
	}
}

//Testa se a pilha esta cheia
int isFull()
{
	if(topo == 4)
		return 1;
	else
		return 0;
}

//Testa se a pilha esta vazia
int isEmpty()
{
	if(topo == -1)
		return 1;
	else
		return 0;
}

//Mostra todo o conteudo da pilha
void exibirPilha()
{
	if (isEmpty() == 1)
		printf("\nA pilha esta vazia!!\n");
	else
	{
		printf("\n=====>> Conteudo da Pilha: \n");
		for(int i = topo; i >= 0; i--)
			printf("\n%d\n", pilha[i]);
	}
}

//Função para apresentar um menu de opções
void menu()
{
	system("cls");
	int opc = 0;
	puts("Menu de opcoes para a Pilha");
	puts("===========================");
	printf("1 - Insere um elemento\n2 - Retira um elemento\n3 - Exibir Pilha\n4 - Finalizar...\n");
	puts("===========================");
	printf("\nEscolha sua opcao: ");
	scanf("%d", &opc);
	int elem = 0;
	
	switch(opc)
	{
		case 1: printf("\nDigite um elemento para inserir na Pilha: ");
			scanf("%d", &elem);
			push(elem);
			break;
		
		case 2: pop();
			break;
		
		case 3: exibirPilha();
			break;
			
		case 4: exit(0);
		
		default: puts("\n\n=====>> Opcao invalida!");		
	}
	system("pause");
}
