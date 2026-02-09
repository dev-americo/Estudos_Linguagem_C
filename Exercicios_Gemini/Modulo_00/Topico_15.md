# Tópico 15 - Operadores Lógicos: && (AND), || (OR), ! (NOT).

**O Desafio**
Você está programando o Módulo de Disparo de um Sistema de Supressão de Incêndio para um Data Center do Google.

O sistema possui 4 entradas digitais (0 ou 1):
- sensor_fumaca: Detecta partículas no ar.
- sensor_temperatura: Detecta calor extremo.
- botao_manual: Um humano apertou o botão de emergência.
- modo_manutencao: O sistema está sendo consertado (trava de segurança).

A Lógica de Disparo: O sistema deve disparar o gás (saída = 1) SE:
- (O modo_manutencao NÃO estiver ativado) E
- ( (O sensor_fumaca estiver ativo E o sensor_temperatura estiver ativo) [Confirmação dupla para evitar falso positivo] OU (O botao_manual for pressionado) [Intervenção humana supera sensores] )

Sua missão: Escreva a expressão lógica que define a variável disparar.

**Requisitos Técnicos:**
- Valide os inputs (retorno do scanf).
- Use <stdbool.h>.
- Proibido: Usar if para decidir o disparo. Use apenas a atribuição lógica: bool disparar = ...;

**Casos de Teste**
- Entrada: Fumaca: 1, Temp: 0, Manual: 0, Manutencao: 0
    - Saída Esperada: Disparar: 0 (Falta temperatura para confirmar).
- Entrada: Fumaca: 1, Temp: 1, Manual: 0, Manutencao: 0
    - Saída Esperada: Disparar: 1 (Fogo confirmado).
- Entrada: Fumaca: 0, Temp: 0, Manual: 1, Manutencao: 0
    - Saída Esperada: Disparar: 1 (Humano ativou).
- Entrada: Fumaca: 1, Temp: 1, Manual: 1, Manutencao: 1
    - Saída Esperada: Disparar: 0 (Manutenção bloqueia tudo).