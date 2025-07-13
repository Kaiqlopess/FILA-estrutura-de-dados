# 📚 Implementação de Fila em C++

Este projeto demonstra a implementação da estrutura de dados **Fila (Queue)** em C++ utilizando alocação dinâmica e ponteiros.

---

## 📌 O que é uma Fila?

A **Fila** é uma estrutura de dados do tipo **FIFO (First In, First Out)**, ou seja, o primeiro elemento a entrar é o primeiro a sair.

Exemplo prático: uma fila de pessoas no caixa — quem chega primeiro é atendido primeiro.

---

## 🧠 Lógica da Implementação

A fila foi implementada utilizando **nós dinâmicos** (classe `No`) conectados por ponteiros, simulando uma fila encadeada.

### Atributos principais:

- `frente`: ponteiro para o primeiro nó da fila (onde ocorre a remoção);
- `fundo`: ponteiro para o último nó da fila (onde ocorre a inserção).

### Métodos principais:

- `enqueue(int d)`: insere um elemento no final da fila;
- `dequeue()`: remove o elemento do início da fila e exibe o valor removido;
- `exibirElemento()`: exibe todos os elementos da fila do `frente` até o `fundo`, além de mostrar o valor do elemento da frente e do fundo.

---

## 🖥️ Exemplo de Execução

```cpp
Fila f;

f.enqueue(3);
f.enqueue(4);
f.enqueue(5);

f.dequeue();        // Saída: 3 Removido

f.exibirElemento(); 
// Saída:
// frente->4->5->fundo
// Frente: 4
// Fundo: 5
