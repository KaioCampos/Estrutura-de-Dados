# ⚡ Estrutura de Dados: Merge Sort

Este diretório contém a implementação do **Merge Sort** em C. Este é um algoritmo de alta performance que utiliza a estratégia de **Dividir e Conquistar** e **Recursividade**.

## 🧠 O que é o Merge Sort?
O Merge Sort divide repetidamente o vetor ao meio até que cada sub-vetor tenha apenas um elemento. Depois, ele combina (faz o *merge*) esses sub-vetores de forma ordenada. É um dos algoritmos mais eficientes para grandes volumes de dados.

## 🛠️ Funções e Lógica Implementada
* **mergeSort (Função Recursiva):** Calcula o meio do vetor e chama a si mesma para as metades esquerda e direita. É aqui que ocorre a "divisão" do problema.
* **merge (Função de Intercalação):** É o "coração" do algoritmo. Ela cria vetores temporários (`esquerda[]` e `direita[]`), compara os elementos de cada um e os devolve para o vetor original na ordem correta.
* **Complexidade:** Diferente dos métodos anteriores ($O(n^2)$), o Merge Sort possui complexidade **$O(n \log n)$**, o que o torna muito mais rápido para listas grandes.

## 📊 Diferenciais Técnicos
* **Estabilidade:** Mantém a ordem relativa de elementos iguais.
* **Recursividade:** Demonstra o uso avançado da pilha de execução para resolver problemas complexos.
* **Gerenciamento de Memória:** O código utiliza vetores auxiliares para realizar a junção dos elementos de forma segura.

---
*Desenvolvido para fins didáticos no curso de ADS - FATEC.*
