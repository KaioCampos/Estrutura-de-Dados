# 🫧 Estrutura de Dados: Bubble Sort

Este diretório contém a implementação do algoritmo de ordenação **Bubble Sort** em C. O foco deste exercício é analisar a eficiência de algoritmos de ordenação através da contagem de trocas e comparações.

## 🧠 O que é o Bubble Sort?
O Bubble Sort (Ordenação por Bolha) é um algoritmo que percorre o vetor várias vezes. A cada passagem, ele compara elementos adjacentes e os troca de lugar se estiverem na ordem errada. O maior elemento "flutua" para o final do vetor a cada iteração completa.

## 🛠️ Funções e Lógica Implementada
* **bubbleSort:** Utiliza uma estrutura `do-while` combinada com um `while` interno para realizar as varreduras.
* **Métricas de Performance:** O programa utiliza as variáveis `comp` (comparações) e `troca` (trocas realizadas) para medir o custo computacional do algoritmo no console.
* **Otimização:** A variável `tam` é decrementada a cada ciclo, evitando verificações desnecessárias em elementos que já estão em suas posições finais.

## 📊 Exemplo de Execução
Ao rodar o programa com o vetor `{44, 38, 12, 2, 17, 25, 19, -4, 30, 10}`, o console exibirá:
- O vetor original.
- O vetor ordenado.
- O total de operações realizadas para concluir a ordenação.

---
*Desenvolvido para fins didáticos no curso de ADS - FATEC.*
