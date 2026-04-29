# 🔄 Fila Circular (FIFO)

Esta implementação utiliza um vetor estático para simular uma fila circular, otimizando o uso de memória.

## 🧠 Conceitos Aplicados
- **FIFO (First-In, First-Out):** O primeiro elemento a entrar é o primeiro a ser removido.
- **Aritmética Modular:** Uso do operador `%` para fazer os ponteiros `inicio` e `fim` retornarem ao começo do vetor quando atingem o limite, evitando o desperdício de espaços vazios.



## 🛠️ Funções Implementadas
- `Enqueue`: Insere no fim.
- `Dequeue`: Remove do início.
- `isFull` / `isEmpty`: Verificam o estado da estrutura.
