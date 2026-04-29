# 🔗 Estrutura de Dados: Lista Simplesmente Ligada

Esta é uma implementação de uma **Lista Ligada (Linked List)** em linguagem C. O projeto marca a transição do uso de vetores estáticos para a **Alocação Dinâmica de Memória**, um conceito fundamental para o gerenciamento eficiente de recursos.

## 🧠 O que é uma Lista Ligada?
Diferente dos vetores, uma lista ligada não ocupa um bloco contíguo na memória. Cada elemento (chamado de **Nó**) é alocado separadamente e conhece o endereço do próximo elemento através de um **ponteiro**.

## 🛠️ Funções Implementadas
No código, você encontrará as seguintes operações:

* **insereInicio:** Adiciona um novo nó no começo da lista. É extremamente rápido porque não precisa percorrer os outros elementos.
* **insereFim:** Adiciona um nó no final. Para isso, o programa percorre a lista até encontrar o ponteiro `NULL`.
* **vazia:** Função de verificação que checa se o nó cabeça (sentinela) aponta para algo.
* **alocaMemoria:** Centraliza o uso do `malloc()` e a leitura dos dados (`nome` e `idade`), garantindo que o programa só continue se houver memória disponível.
* **exibirLista:** Percorre a estrutura do início ao fim, mostrando os dados de cada nó.

## 📊 Detalhes Técnicos
* **malloc() & free():** Uso de funções da `stdlib.h` para criar nós em tempo de execução.
* **Nó Cabeça:** Uso de um nó sentinela para facilitar a manipulação da lista sem perder a referência de onde ela começa.
* **Ponteiros:** Manipulação direta de endereços de memória (`struct No *prox`).

---
*Desenvolvido para fins didáticos no curso de ADS - FATEC.*
