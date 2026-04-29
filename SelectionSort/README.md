# 🎯 Estrutura de Dados: Selection Sort

Este diretório contém a implementação do algoritmo **Selection Sort** em C. Este método foca em encontrar o menor elemento de uma lista e posicioná-lo corretamente a cada iteração.

## 🧠 O que é o Selection Sort?
A lógica do Selection Sort consiste em dividir o vetor em duas partes: uma já ordenada e outra não ordenada. O algoritmo seleciona o **menor** elemento da parte não ordenada e o troca com o primeiro elemento dessa parte, repetindo o processo até que todo o vetor esteja organizado.

## 🛠️ Funções e Lógica Implementada
* **selectionSort:** Utiliza dois laços `for`. O externo define a posição atual que queremos preencher, e o interno busca o menor valor no restante do vetor.
* **Métricas de Performance:** O programa monitora a eficiência através de:
    - **comp:** Incrementado a cada comparação dentro da busca pelo menor valor e na validação final da troca.
    - **troca:** Só ocorre uma única vez por iteração do laço externo, o que torna este algoritmo muito eficiente em termos de movimentação de dados.
* **Variáveis de Controle:** Uso das variáveis `menor` para armazenar o índice do menor valor encontrado e `aux` para realizar a troca (swap).

## 📊 Vantagem Prática
Embora tenha complexidade $O(n^2)$, o Selection Sort supera o Bubble Sort em cenários onde "escrever" na memória (fazer trocas) é mais caro do que "ler" (fazer comparações), pois ele minimiza o número de swaps realizados.

---
*Desenvolvido para fins didáticos no curso de ADS - FATEC.*
