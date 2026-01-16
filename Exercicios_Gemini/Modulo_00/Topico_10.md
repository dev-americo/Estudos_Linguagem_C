# Tópico 10 - Operadores Aritméticos: +, -, *, /. A pegadinha da divisão inteira (5/2 é 2, não 2.5).

**O Conceito: A Pegadinha da Divisão Inteira**

Na matemática da escola, $5 \div 2 = 2.5$.Na linguagem C, depende de QUEM está sendo dividido.
A CPU tem circuitos diferentes para tratar Inteiros e Ponto Flutuante.

- Int / Int = Int:
    - 5 / 2 resulta em 2. (A parte decimal é truncada/jogada fora. Não é arredondamento, é corte).
    - 5 / 9 resulta em 0. (Porque $0.55...$ vira $0$).

- Float / Int (ou vice-versa) = Float:
    - 5.0 / 2 resulta em 2.5.
    - 5 / 2.0 resulta em 2.5.
    - Se pelo menos um dos lados for ponto flutuante, o C "promove" o outro lado e faz a conta certa.

Precedência de Operadores (PEMDAS): O C respeita a ordem clássica: Parênteses () > Multiplicação/Divisão * / > Soma/Subtração + - 

**O Desafio: O Conversor Meteorológico**

Você está escrevendo o firmware de um sensor climático americano que precisa exibir a temperatura em Celsius para o resto do mundo.

A fórmula física é: $$C = (F - 32) \times \frac{5}{9}$$

**Requisitos Técnicos:**
- Solicite ao usuário a temperatura em Fahrenheit usando um número Inteiro (int).
- Calcule a temperatura em Celsius (float).
- A Obrigação: Você deve escrever a fração 5/9 explicitamente no código.Se você escrever 5/9, o resultado será 0 e seu sensor dirá que está sempre congelando.
- Você deve forçar o C a entender que essa divisão deve gerar casas decimais.
- Exiba o resultado com 1 casa decimal.

**Saída Esperada:**

```
Digite a temperatura em Fahrenheit: 100
No Brasil estaria: 37.8 C
```

**Casos de Teste**

- Ebulição: Entrada 212 -> Saída 100.0 C
- Congelamento: Entrada 32 -> Saída 0.0 C
- Humano: Entrada 98 -> Saída 36.7 C (aprox)