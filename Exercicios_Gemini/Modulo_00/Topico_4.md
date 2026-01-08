# Tópico 01 - Tipos Primitivos (Ponto Flutuante): float, double. Precisão simples vs dupla e perigos de comparação.

**O Conceito: Ponto Flutuante & A Mentira do 0.1**

No papel, $1/3$ é $0,333...$ infinitamente. Na memória RAM, o espaço é finito. O padrão IEEE 754 (usado em C) tenta espremer números infinitos em 32 ou 64 bits usando Notação Científica Binária:

$$Valor = Sinal \times Mantissa \times 2^{Expoente}$$

O Problema: Assim como $1/3$ não tem representação finita em decimal, $0.1$ não tem representação finita em binário. É uma dízima periódica binária.
- float: Precisão simples (32 bits). Cerca de 7 casas decimais confiáveis.
- double: Precisão dupla (64 bits). Cerca de 15 casas decimais confiáveis.

**A Regra de Ouro:** Jamais compare floats com ==. Se você fizer if (a == b), há 99% de chance de falhar porque $3.00000004$ é diferente de $3.00000000$.

## Enunciado: Crie um programa que armazene o número 0.1 em um float e em um double. Compare-os e mostre a sujeira escondida na memória.

**Requisitos Técnicos:**
- Declare float f = 0.1;.
- Declare double d = 0.1;.
- A Prova: Imprima ambos usando `printf` com o formatador `%.20f` (para forçar a exibição de 20 casas decimais).
- A Armadilha: Use um if/else para perguntar: if (f == d).
    - Se forem iguais, imprima "Iguais".
    - Se forem diferentes, imprima "Diferentes! A precisao muda o valor.".
- Clean Code: Mantenha o padrão de comentários explicando o porquê.

**Saída Esperada (Aproximada):**

```
=== ANALISE DE PRECISAO ===
Float  0.1: 0.10000000149011611938
Double 0.1: 0.10000000000000000555

Resultado da comparacao: Diferentes! A precisao muda o valor.
```