# Tópico 05 - Modificadores de Tipo: unsigned, short, long, long long. O perigo do Overflow e Underflow (Odômetro girando).

Temos modificadores que alteram o tamanho ou o comportamento do sinal:

- short: Promessa de usar menos memória (geralmente 2 bytes). Range: -32k a +32k.
- long: Promessa de usar mais memória (pelo menos 4 bytes, muitas vezes 8 em sistemas 64-bit modernos).
- long long: O peso pesado. Garante pelo menos 8 bytes (64 bits). Range absurdo.
- unsigned: O mais perigoso. Remove o sinal negativo e dobra a capacidade positiva.
- signed char: -128 a 127.
- unsigned char: 0 a 255.

### Simular um bug clássico de loops infinitos.

**Cenário:** Você está programando um timer de contagem regressiva para um micro-ondas usando unsigned int (porque tempo não pode ser negativo, certo?).

**Enunciado:**

- Declare uma variável unsigned int contador = 5;
- Faça um loop while (contador >= 0).
- Dentro do loop, imprima o valor: printf("%u\n", contador);.
- Incremente negativamente (decremente): contador--;.
- No final, imprima uma mensagem "Fim".

**IMPORTANTE:** Adicione um break ou uma condição de segurança (if (contador > 10) break;) dentro do loop, senão seu computador vai travar em loop infinito imprimindo números gigantes.

**Objetivo:** Quero que você veja que 0 menos 1 em unsigned não é -1. É o maior número possível (MAX_INT). Por isso a condição contador >= 0 é sempre verdadeira para unsigned.