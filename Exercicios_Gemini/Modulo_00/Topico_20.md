# Tópico 20 - Laços de Repetição

**O Desafio**
Vamos testar sua capacidade de controlar o fluxo com um dos problemas matemáticos não resolvidos mais famosos da história: a Conjectura de Collatz (ou Problema 3N + 1).

A regra é simples. Dado um número inteiro positivo $N$:
- Se $N$ for par, o próximo número será $N / 2$.
- Se $N$ for ímpar, o próximo número será $3N + 1$.

A conjectura diz que, não importa qual número você escolha, a sequência sempre chegará no número 1 (onde o loop deve parar, senão ficaria no ciclo 1 -> 4 -> 2 -> 1 infinito).

**Sua Missão:**
Escreva o motor de cálculo da Conjectura de Collatz. O programa deve receber um número $N$ inicial, calcular a sequência até chegar a 1, e ao final imprimir:
- Quantos passos foram necessários.
- Qual foi o pico (o maior número atingido durante a sequência).

**Requisitos Técnicos:**
- Valide o input: o número inicial deve ser estritamente maior que 0. Se não for, encerre com erro.
- Use um laço while para gerar a sequência até que $N$ seja 1.
- A cada iteração, atualize $N$, conte o passo e verifique se bateu um novo recorde (pico).
- Proibido: Usar laço for e bibliotecas avançadas. Apenas matemática básica e lógica.

**Casos de Teste**
- Entrada: 1
    - Saída Esperada: Passos: 0 | Pico Maximo: 1
- Entrada: 6
    - Saída Esperada: Passos: 8 | Pico Maximo: 16
- Entrada: 27
    - Saída Esperada: Passos: 111 | Pico Maximo: 9232

**Casos de Borda**
- Entrada Negativa ou Zero: A regra de Collatz é para inteiros positivos. Rejeite $\le 0$ para evitar loops infinitos ou comportamento indefinido.
- Integer Overflow (Odômetro Girando): O número 27 atinge um pico de 9232. Se você colocar um número inicial muito grande (ex: alguns milhões), o cálculo de $3N+1$ pode ultrapassar o limite de um int de 32 bits (cerca de 2.14 bilhões), resultando em números negativos e criando um loop infinito catastrófico.