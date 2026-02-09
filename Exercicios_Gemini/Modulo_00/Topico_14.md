# Tópico 14 - Operadores Relacionais: Comparação >, <, >=, <=, ==, !=.

**O Desafio (Enunciado)**

Você está projetando o painel de controle de um Reator Químico. O sistema precisa monitorar a temperatura e acender luzes indicadoras (representadas por 0 ou 1) baseadas em faixas de segurança.

Você receberá uma Temperatura Atual, uma Mínima Segura e uma Máxima Segura.

Sua missão é gerar o estado de três LEDs (variáveis inteiras) SEM USAR if, switch ou Ternário:

- led_frio: Acende (1) se a temperatura for estritamente menor que a Mínima.
- led_quente: Acende (1) se a temperatura for estritamente maior que a Máxima.
- led_seguro: Acende (1) apenas se a temperatura estiver dentro do intervalo (inclusive as pontas).

**Requisitos Técnicos:**

- Valide o input (verifique o retorno do scanf).
- Use apenas Operadores Relacionais (<, >, <=, >=) e Aritméticos.
- Imprima o estado dos 3 LEDs.

**Casos de Teste**

- Entrada: Temp: 50, Min: 20, Max: 80 
    - Saída: Frio: 0 | Quente: 0 | Seguro: 1

- Entrada: Temp: 100, Min: 0, Max: 90
    - Saída: Frio: 0 | Quente: 1 | Seguro: 0

- Entrada: Temp: 10, Min: 10, Max: 20
    - Saída: Frio: 0 | Quente: 0 | Seguro: 1 (Borda inclusiva)