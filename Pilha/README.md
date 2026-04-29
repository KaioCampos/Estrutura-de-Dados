# 📚 Estrutura de Dados: Pilha (Stack)

Esta é uma implementação clássica de uma **Pilha** utilizando um vetor estático em C. O objetivo é demonstrar o gerenciamento de dados seguindo a lógica **LIFO**.

## 🧠 O que é LIFO?
**LIFO** significa *Last-In, First-Out* (O último a entrar é o primeiro a sair). É a estrutura ideal para situações onde precisamos reverter ações ou acessar o dado mais recente primeiro.

## 🛠️ Operações Implementadas
No código, você encontrará as seguintes funções fundamentais:

* **Push (Inserir):** Adiciona um elemento no topo da pilha. Se o topo atingir o limite do vetor, o programa avisa que houve um *Stack Overflow*.
* **Pop (Remover):** Retira o elemento que está no topo e decrementa o índice.
* **isEmpty / isFull:** Funções de verificação que garantem a segurança das operações antes de inserir ou remover.
* **exibirPilha:** Percorre o vetor do topo até a base para mostrar visualmente como os dados estão empilhados.

## 💻 Exemplo de Uso Real
As pilhas são usadas em quase tudo na computação, como:
- O botão "Voltar" do seu navegador.
- A função "Desfazer" (Ctrl+Z) em editores de texto.
- A pilha de execução de funções (Call Stack) do próprio processador.

---
*Desenvolvido para fins didáticos no curso de ADS.*
