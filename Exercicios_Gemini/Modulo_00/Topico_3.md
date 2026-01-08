# Topico 03 - Tipos Primitivos (Inteiros): int, char. Tamanho em bytes (sizeof) e intervalo de valores.

Escreva um programa que revele a arquitetura da sua máquina e prove a existência do Overflow.

**quisitos Técnicos:**

- Header: Inclua <stdio.h> e <limits.h> (para ver os limites reais se quiser, mas não é obrigatório usar as constantes agora).
- Auditoria: Imprima o tamanho (sizeof) em bytes de:
    - char
    - int
    - float
    - double
    - Use o formato correto: `"%zu bytes"`.

**A Prova do Overflow:**

1. Declare uma variável char (com sinal) e atribua o valor máximo: 127.
2. Imprima o valor.
3. Incremente a variável (variavel = variavel + 1; ou variavel++).
4. Imprima o novo valor.
5. Obrigatório: Um comentário // explicando por que o número mudou de sinal.

**Saída Esperada (Exemplo):**

```
=== TAMANHOS DE TIPO ===
Char:   1 bytes
Int:    4 bytes
Float:  4 bytes
Double: 8 bytes

=== TESTE DE OVERFLOW ===
Valor inicial: 127
Apos incremento: -128
```