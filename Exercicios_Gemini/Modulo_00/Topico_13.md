# Tópico 13 - Lógica Booleana em C: Entender que em C ANSI, 0 é Falso e qualquer outra coisa é Verdadeiro. A biblioteca <stdbool.h>.

Embora um valor booleano precise de apenas 1 bit de informação (0 ou 1), o menor endereço endereçável na RAM é o Byte (8 bits). Logo, um bool geralmente ocupa 1 byte inteiro (sizeof(bool) == 1).

Quando você faz um cast de um inteiro qualquer para bool, o compilador aplica uma "normalização":

- (bool)0 vira 0 (false)
- (bool)1234 vira 1 (true)

Essa propriedade permite criar lógica sem usar if (Branchless Programming), algo essencial para pipelines de processadores modernos que odeiam saltos de execução.

**O Desafio (Enunciado)**
Você está desenvolvendo o firmware de um Amplificador de Sinal de Segurança. O sistema recebe um sinal bruto (dado) e um sinal de ativação (flag).

O "sinal de ativação" vem de um sensor analógico ruidoso. Ele pode enviar 0 (Desligado), mas quando está Ligado, ele pode enviar valores aleatórios como 5, 1024, ou -33.

Sua missão é filtrar o sinal. Se a ativação for diferente de 0, o sinal passa. Se for 0, o sinal é cortado.

O Desafio: Você deve implementar essa lógica SEM USAR if, else, switch, ou Operador Ternário. Você deve usar a propriedade matemática do tipo bool para "zerar" ou "manter" o sinal através de multiplicação pura.

**Requisitos Técnicos:**

- Use obrigatoriamente <stdbool.h>.
- Leia: sinal_bruto (int) e sensor_ativacao (int).
- Crie uma variável bool sistema_ativo que receba o cast do sensor.
- Calcule a saida_final usando apenas aritmética (multiplicação).
- Proibido: Usar operadores relacionais (>, <, ==). Assuma que não chegamos na Aula 14 ainda. Confie apenas no cast para bool.

**Casos de Teste**

- Entrada: Sinal: 500, Sensor: 1 | Saída Esperada: Saída: 500
- Entrada: Sinal: 999, Sensor: 0 | Saída Esperada: Saída: 0
- Entrada: Sinal: -15, Sensor: 2048 | Saída Esperada: Saída: -15 (Nota: 2048 vira true/1, mantendo o sinal original)