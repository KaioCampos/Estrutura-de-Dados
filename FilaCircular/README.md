# 🔄 Estrutura de Dados: Fila Circular (FIFO)

Esta é uma implementação de uma **Fila Circular** utilizando um vetor estático em C. O projeto demonstra como gerenciar dados de forma eficiente seguindo a lógica **FIFO**, otimizando o uso do espaço no array.

## 🧠 O que é FIFO?
**FIFO** significa *First-In, First-Out* (O primeiro a entrar é o primeiro a sair). É a estrutura ideal para sistemas de escalonamento, buffers de impressão e processamento de tarefas em ordem de chegada.

## 🚀 O Diferencial da Fila Circular
Em uma fila linear simples, quando removemos elementos do início, aquele espaço no vetor fica "morto". Na **Fila Circular**, utilizamos a **Aritmética Modular** para que, ao chegar no fim do vetor, os ponteiros retornem ao início se houver espaço livre.

### Lógica de Movimentação:
- **Inserção:** `fim = (fim + 1) % tam;`
- **Remoção:** `inicio = (inicio + 1) % tam;`



## 🛠️ Funções Implementadas
* **Enqueue (Inserir):** Adiciona um elemento na posição `fim`.
* **Dequeue (Remover):** Retira o elemento da posição `inicio`.
* **isFull:** Verifica se a próxima posição do `fim` alcançaria o `inicio`.
* **isEmpty:** Verifica se a fila está em seu estado inicial (`-1`).
* **imprimirFila:** Percorre a estrutura respeitando a circularidade para exibir o conteúdo atual.

## 📊 Detalhes Técnicos
- **Cálculo de Tamanho:** Uso de `sizeof(vet)/sizeof(int)` para automação do limite da estrutura.
- **Gerenciamento de Índices:** Controle rigoroso dos ponteiros `inicio` e `fim`.

---
*Projeto desenvolvido para a disciplina de Estrutura de Dados - FATEC.*
