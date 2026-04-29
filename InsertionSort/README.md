# 📥 Estrutura de Dados: Insertion Sort

Este diretório contém a implementação do algoritmo **Insertion Sort** em C. Este método é conhecido por sua eficiência em conjuntos de dados pequenos ou que já estão parcialmente ordenados.

## 🧠 O que é o Insertion Sort?
O algoritmo funciona de forma semelhante à organização de cartas em uma mão: ele percorre o vetor e, para cada elemento (chamado de `chave`), ele o compara com os elementos anteriores, "empurrando" os maiores para a direita até encontrar o lugar correto para inserir a chave.

## 🛠️ Funções e Lógica Implementada
* **insertionSort:** Utiliza um laço `for` para percorrer o vetor a partir do segundo elemento e um `while` interno para deslocar os elementos e abrir espaço para a inserção.
* **Métricas de Performance:** O programa monitora a eficiência através de:
    - **comp:** Incrementado dentro do `while` a cada comparação de valores.
    - **trocas:** Conta cada deslocamento de posição e a inserção final da chave.
* **Variáveis Locais:** Uso de `chave` para guardar temporariamente o valor que está sendo posicionado.

## 📊 Comparativo Técnico
Diferente do Bubble Sort, o Insertion Sort faz menos trocas e comparações em vetores quase ordenados, sendo uma escolha muito comum para otimizar algoritmos mais complexos (como o Quick Sort).
- **Complexidade:** $O(n^2)$ no pior caso, mas muito performático na prática para pequenos volumes de dados.

---
*Desenvolvido para fins didáticos no curso de ADS - FATEC.*
