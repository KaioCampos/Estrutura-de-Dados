/*
	Name: MergeSort.c
	Author: kaio campos
	Date: 28/04/26 11:14
	Description: Implementação do método de ordenação Merge Sort.
*/

#include <stdio.h>

//Sessão de Prototipação
void mergeSort (int *, int, int); //Quebra tudo em uma única unidade
void merge (int *, int, int, int); //Mescla(Junta) todos os sub-vetores

int main ()
{
	int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int tam = sizeof(vet)/sizeof(int);
	int i;
	
	printf("Vetor Original: \n");
	for(i = 0; i < tam; i++)
		printf("%d |", vet[i]);
		
	mergeSort (vet, 0, tam-1);
	
	printf("\n\nVetor ordenado pelo Merge Sort: \n");
	for(i = 0; i < tam; i++)
		printf("%d |", vet[i]);
		
}//fim do programa

//Função recursiva para "quebrar" todo o conjunto de dados em diversos vetores de um ÚNICO elemento
void mergeSort (int *V, int inicio, int fim)
{
	if (inicio < fim)
	{
		int meio = (inicio + fim) / 2; //Calcula o meio do conjunto
		mergeSort(V, inicio, meio);//Divide do lado esquerdo
		mergeSort(V, meio+1, fim);//Divide do lado direito
		merge(V, inicio, meio, fim);//Começa a juntar os sub-conjuntos
	}
}//Fim da função Merge Sort

//Função que junta os sub-vetores divididos pela função recursiva Merge Sort
void merge (int *V, int inicio, int meio, int fim)
{
	int i, j, k;
	int tamEsq, tamDir;//Tamanho para os vetores temporários
	
	tamEsq = meio - inicio + 1;
	tamDir = fim - meio;
	
	//Cria os vetores auxiliares - temporários
	int esquerda[tamEsq], direita[tamDir];
	
	//Copia os dados do vetor original para os arrays temporários esquerda[] e direita []
	for(i = 0; i < tamEsq; i++)
		esquerda[i] = V[inicio+i];
	
	for(j = 0; j < tamDir; j++)
		direita[j] = V[meio+1+j];
		
	//Mescla os arrays temporários de volta para o vetor original (V)
	i = 0;//Indice inicial do primeiro sub-array (esquerdo)
	j = 0;//Indice inicial do primiero sub-array (direito)
	k = inicio;//Indice inicial do sub-array mesclado
	
	while(i < tamEsq && j < tamDir)
	{
		if(esquerda[i] < direita[j])
		{
			V[k] = esquerda[i];
			i++;
		}
		else
		{
			V[k] = direita[j];
			j++;
		}
		k++;	
	}
	
	//Copia os elementos restantes da esquerda[] se houver
	while(i < tamEsq)
	{
		V[k] = esquerda[i];
		i++;
		k++;
	}
	
	//Copia os elementos restantes da direita[] se houver
	while(j < tamDir)
	{
		V[k] = direita[j];
		j++;
		k++;
	}
}//Fim da função merge
