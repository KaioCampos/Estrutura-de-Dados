/*
	Name: selectionSort.cpp
	Author: kaio campos
	Date: 31/03/26 10:51
	Description: Programa para implementar o metodo de ordenaçao Selection Sort
*/
//variaveis globais
	int comp, troca;

#include<stdio.h>

//Prototipaçao
void selectionSort(int *, int);

main()
{
	int vet[] ={17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int tam = sizeof(vet)/sizeof(int);
	comp = troca = 0;
	
	puts("VETOR ORIGINAL: ");
	for(int i = 0;i < tam; i++)
		printf("%d |", vet[i]);
		
	selectionSort(vet,tam);
	
		
	puts("\n\nVETOR Ordenado pelo Selection SORT: ");
		for(int i = 0;i < tam; i++)
			printf("%d |", vet[i]);
	
	//metodo de Ordenaçao
	printf("\n\nQtde de COMPARACOES: %d", comp);
	printf("\nQtde de TROCAS: %d", troca);
	
}//fim do Programa 

void selectionSort(int *V, int tam)
{
	int i, j, chave, aux, menor;
	
	for(i = 0; i < tam; i++)
	{
		chave = i;
		menor = i;
		
		for(j = i+1; j < tam; j++)
		{
			comp++;
			if(V[j] < V[menor])
				menor = j;
		}
		
		comp++;
		if(V[menor] < V[chave])
		{
			aux = V[chave];
			V[chave] = V[menor];
			V[menor] = aux;
			troca++;
		}
	}
	
}
