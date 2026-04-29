/*
	Name: insertionSort.c
	Author: kaio campos
	Date: 31/03/26 11:52
	Description:programa para demontrar a implemetaçao do metodo de organizaçao insetionSort
*/
//seçao de importaçao de biblioteca
#include<stdio.h>

//Prototipaçao
void insertionSort(int *,int);

//variaveis Globais
int trocas, comp;

main()
{
	int tam, x;

	int vet[] = {17, 38, 12 , 2, 44 , 25, 19, -4, 30, 10};
	
	tam = sizeof(vet)/sizeof(int);	
		
	printf("Vetor Original:\n");
	for(x = 0; x < tam;x++)
		printf("%d|", vet[x]);
		
	insertionSort(vet,tam);
	
	printf("\n\nVetor ordenado pelo InsertionSort:\n");
	for(x = 0; x < tam;x++)
		printf("%d|", vet[x]);
		
	puts("\n=============================");
	puts("InsertionSort:");
	puts("=============================");
	printf("Qtde de COMPARACOES: %d", comp);
	printf("\nQtde de TROCAS: %d", trocas);
	
}//fim do Programa
void insertionSort(int *V,int tam)
{
	int i, j, chave;

	for(i = 1;i < tam;i++)
	{
		chave = V[i];
		j = i - 1;
		while(j >= 0 && chave < V[j])
		{
			comp++;
			V[j+1] = V[j];
			j--;
			trocas++;
		}
	V[j+1] = chave;
	trocas++;
	}
}
