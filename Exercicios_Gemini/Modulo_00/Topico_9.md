# Tópico 09 - Leitura do Teclado (scanf): Uso básico. O problema do buffer de teclado (o "Enter" pendente).

**O Conceito: Entrada de Dados (scanf)**

O scanf é o oposto do printf. Mas ele é traiçoeiro.

- O "E" Comercial (&): Para o scanf escrever na sua variável, ele precisa saber onde ela mora na memória RAM.

```
int idade;

scanf("%d", &idade); //-> "Escreva no endereço de idade".
```

Se você esquecer o &, seu programa vai acessar um endereço de memória aleatório e dar Crash (Segfault).

O Problema do Buffer (O "Enter" Fantasma): Quando você digita 10 e aperta Enter, você enviou dois caracteres para o buffer do teclado: 1 0 \n (Enter). O scanf("%d") pega o 10 e deixa o \n lá. O próximo scanf que for ler um caractere (%c) vai ler esse \n pendente e pular a vez do usuário.

**O Desafio: O Interrogatório**

Você vai criar um formulário de cadastro que pede dados de tipos diferentes e imprime uma ficha formatada no final.

**Requisitos Técnicos:**

- Declare variáveis para:
    - Idade (int)
    - Peso (float)
    - Inicial do Nome (char)
- Peça os dados nesta ordem exata:
    - "Digite sua idade: "
    - "Digite seu peso: "
    - "Digite a inicial do seu nome: "

A Armadilha: O problema do Buffer vai acontecer entre o Peso e a Inicial. Você precisará descobrir como limpar o buffer (dica: um espaço em branco no scanf resolve scanf(" %c"...) ou consumir o enter).

No final, imprima os dados organizados.

Saída Esperada:

```
Digite sua idade: 25
Digite seu peso: 80.5
Digite a inicial do seu nome: A

=== FICHA ===
Nome:  A
Idade: 25 anos
Peso:  80.50 kg
```