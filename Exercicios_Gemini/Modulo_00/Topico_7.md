# Tópico 07 - Constantes e Literais: #define (Macro) vs const (Read-only variable). Boas práticas de "Magic Numbers".

### O Conceito: Constantes e "Magic Numbers"
Um "Magic Number" é um número solto no código que ninguém sabe de onde veio. Exemplo ruim: area = raio * raio * 3.1415; (O que é 3.1415? E se precisarmos de mais precisão em 50 arquivos diferentes?).

Em C, temos duas formas de resolver isso:

+ A Macro (#define):

`#define PI 3.1415`

**Como funciona:** O Preprocessador (passo 1 da compilação) faz um "Localizar e Substituir" brutal antes de compilar. O compilador nunca vê a variável PI, ele vê o número 3.1415 colado lá. Não ocupa memória RAM (é imediato no código).

+ A Constante (const):

`const float PI = 3.1415;`

**Como funciona:** É uma variável real. Ela tem endereço de memória, ocupa bytes, tem tipo. Mas o compilador proíbe que você escreva nela.

**Regra do Sênior:** Prefira #define para configurações globais simples e const quando o tipo da variável for importante (para evitar bugs de conversão).

### O Desafio: A Imutabilidade
Você vai criar um simulador de física simples que tenta quebrar as leis do universo (alterar uma constante).

**Requisitos Técnicos:**

- Defina uma macro #define GRAVIDADE 9.80665.
- Declare uma variável constante local const int MAX_VELOCIDADE = 300;.
- Tente calcular a velocidade de queda livre: velocidade = GRAVIDADE * tempo.
- A Sabotagem: Tente alterar o valor de MAX_VELOCIDADE no meio do código (ex: MAX_VELOCIDADE = 500;).
- A Compilação: O compilador DEVE dar erro e recusar gerar o executável.
- A Solução: Comente a linha do erro (// MAX_VELOCIDADE = 500;) e adicione um comentário explicando o erro que o compilador gerou.

**Saída Esperada:** Quero ver o código que funciona (com a linha do erro comentada) e a explicação do erro.