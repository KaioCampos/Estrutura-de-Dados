/*
    Name: fila.c
    Author: kaio campos
    Date: 10/04/26 20:32
    Description: Programa que simula o funcionamento da estrutura de dados Fila - FIFO.
*/

#include <stdio.h>
#include <stdlib.h> // Adicionado para usar o exit()

int vet[5];
int tam = sizeof(vet)/sizeof(int);
int inicio = - 1, fim = -1;

/* ========= PROTOTIPOS (ORDEM DE EXECUCAO) ========= */
void Enqueue(int); //Função que insere um novo elemento na Fila
int Dequeue(); //Função que retira um elemento da fila
int isFull(); //Função que verifica se a fila esta cheia
int isEmpty(); //Função que verifica se a fila esta vazia
void menu(); //Função que exibe menu de opcoes
void imprimirFila();//Função que imprime a fila

int main()
{
    // Loop para o menu continuar rodando enquanto você testa a fila
    while(1) {
        menu();
    }
    
    return 0;
}

//Função que insere um novo elemento na Fila
void Enqueue(int elemento)
{
    if(isFull() == 1)
    {
        printf("\nA fila esta cheia!");
    }
    else
        {
            //Se a fila estiver vazia inicio passa a valer 0
            if(inicio == -1)
                inicio = 0;

            // Avança o 'fim' circularmente usando o operador módulo
            // (% tam faz o índice voltar para 0 quando chega ao final do vetor)
            fim = (fim + 1) % tam;
            
            // Armazena o elemento na posição indicada por 'fim'
            vet[fim] = elemento;
            
            printf("\nElemento %d inserido na Fila!", elemento);
        }
}

//Função que retira um elemento da fila
int Dequeue()
{
    int elemento;
    
    if(isEmpty() == 1)
    {
        printf("\nA fila esta vazia!");
        return -1;
    }
    else
    {
        //Guarda o valor que sera removido
        elemento = vet[inicio];
        
        //Se havia apenas um elemento, a fila volta a ficar vazia
        if(inicio == fim)
        {
            inicio = -1;
            fim = - 1;
        }
        else
        {
            //Avança o inicio regularmente
            inicio = (inicio + 1) % tam;
        }    
        
        printf("\nElemento %d foi excluido da fila com sucesso!", elemento);
        return elemento;
    }
}

//Função que verifica se a fila esta cheia
int isFull()
{
    //Fila esta cheia quando o proximo avanço de fim alcança a posição inicio
    if(inicio == (fim + 1)%tam)
        return 1;
    else
        return 0;
}

//Função que verifica se a fila esta vazia
int isEmpty()
{
    //Fila vazia quando inicio vale -1
    if(inicio == -1)
        return 1;
    else
        return 0;
}

//Função que exibe menu de opcoes
void menu()
{
    int opc, valor; // Adicionado 'valor' para ler a entrada do usuario
    
    printf("\n\n=========>> Menu de opcoes: ");
    printf("\n1 - Inserir elemento na fila");
    printf("\n2 - Retirar elemento da fila");
    printf("\n3 - Imprimir fila");
    printf("\n4 - Sair");
    printf("\nEscolha uma opcao (1 a 4): ");
    scanf("%d", &opc);
    
    switch(opc)
    {
        case 1:
            printf("Digite o numero que deseja inserir: ");
            scanf("%d", &valor);
            Enqueue(valor); // Aqui passamos o valor lido para a sua função
            break;
        
        case 2:
            Dequeue();
            break;
        
        case 3:
            imprimirFila();
            break;
            
        case 4:
            printf("\nEncerrando programa ...");
            exit(0); // Sai do programa corretamente
            break;
            
        default:
            printf("\nOpcao invalida!");
    }
    
}

void imprimirFila()
{
    int i;

    if (isEmpty() == 1)
    {
        printf("\n=====>> A fila esta VAZIA!!!");
    }
    else
    {
        printf("\nConteudo da FIFO: ");

        // Percorre a fila de forma circular
        // Começa em 'inicio' e para quando alcançar 'fim'
        i = inicio;
        while(1)
        {
            printf("%d | ", vet[i]); // Corrigido para 'vet' (seu vetor global)

            if (i == fim)
                break;

            i = (i + 1) % tam;
        }
    }

    printf("\n");
}
