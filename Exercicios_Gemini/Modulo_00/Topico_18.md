# Tópico 18 - Operador Ternário: A elegância do condição ? valor_se_v : valor_se_f.

O operador ternário é o único operador do C que aceita três operandos. Ele é essencialmente um if/else que retorna um valor.

`Sintaxe: condição ? valor_se_verdadeiro : valor_se_falso`

**O Desafio**

Você está programando o Sistema de Precificação de um Pedágio Automático.
- O preço base é R$ 20.
- Se for Horário de Pico (input 1), o preço sobe para R$ 30.
- Se for Madrugada (input 2), o preço cai para R$ 10.
- Qualquer outro horário, mantém o preço base.

Sua Missão: Leia o horario (int). Calcule o preco_final (int) usando apenas Operadores Ternários Aninhados.

Restrição Absoluta:
- PROIBIDO USAR if para definir o preço.

Você deve fazer tudo na linha da declaração: int preco = ... ? ... : ...;

**asos de Teste**
- Entrada: 1 (Pico) | Saída: Preço: 30
- Entrada: 2 (Madrugada) | Saída: Preço: 10
- Entrada: 0 (Normal) | Saída: Preço: 20
- Entrada: 99 (Inválido/Normal) | Saída: Preço: 20