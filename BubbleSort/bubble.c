/*
	Name: BubbleSort.cpp
	Author: kaio campos
	Date: 24/03/26 11:02
	Description: Programa para demonstrar o funcionamento do metodo de ordenaçao chamado de Bubble sort
*/
#include<stdio.h>

void bubbleSort(int *,int);

//variaveis Globais
	int comp, troca;
	
main()
{
	int vet[] = {44, 38, 12, 2, 17, 25, 19, -4, 30, 10};
	int tam = sizeof(vet)/sizeof(int);
	comp = troca = 0;
	
	puts("VETOR ORIGINAL: ");
	for(int i = 0;i < tam; i++)
		printf("%d|", vet[i]);
		
	bubbleSort(vet,tam);
	
		
	puts("\n\nVETOR Ordenado pelo BUBBLE SORT: ");
		for(int i = 0;i < tam; i++)
			printf("%d|", vet[i]);
	
	//metodo de Ordenaçao
	printf("\n\nQtde de COMPARACOES: %d", comp);
	printf("\nQtde de TROCAS: %d", troca);
	
}//fim do programa

//funçao para o metodo de Ordenaçao bubble Sort
void bubbleSort(int *V, int tam)
{
	int i = 0;
	int aux = 0;
	
		do{
	
		i = 0;
		while (i < tam-1)
		{
			comp++;
			if(V[i] > V[i+1])
			{
				aux = V[i];
				V[i] = V[i+1];
				V[i+1] = aux;
				troca++;
			}
			i++;
		}
		tam--;
		
	}while(tam > 0);
	
}
