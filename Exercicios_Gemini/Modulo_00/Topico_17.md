

**O Desafio**
Você está desenvolvendo o firmware de um Radar Inteligente em uma rodovia perigosa.
O limite base da estrada é 100 km/h. Porém, o limite real muda dinamicamente dependendo de dois fatores:

- Clima: Se estiver Chovendo (input 1), o limite cai em 20%.
- Veículo: Caminhões (input 2) têm o limite reduzido em 10 km/h adicionais (aplicado após a redução do clima, se houver). Carros (input 1) não têm redução extra.

**Regras de Multa (Sobre o Limite Calculado):**
- Zona de Tolerância: Até 7 km/h acima do limite - Sem Multa.
- Infração Média: De 8 km/h até 20 km/h (inclusive) acima - Multa de R$ 130.00.
- Infração Grave: Acima de 20 km/h do limite - Multa de R$ 195.00 + Carteira Suspensa.

Sua Missão: Calcule o limite dinâmico, verifique a velocidade do motorista e aplique a punição correta.

**Requisitos Técnicos:**

- Inputs: velocidade (int), tipo_veiculo (int: 1=Carro, 2=Caminhão), clima (int: 0=Sol, 1=Chuva).
- Valide os inputs (não aceite tipos ou climas inválidos).
- Use if/else aninhados para calcular o limite e depois para decidir a multa.
- Proibido: Usar switch ou operadores lógicos complexos (&&/||) dentro do if de cálculo de multa. Quero ver a estrutura de decisão hierárquica (escada if-else-if).

**Casos de Teste**
- Entrada: Vel: 105, Tipo: 1 (Carro), Clima: 0 (Sol)
    - Limite: 100. Excesso: 5. Saída: "Sem Multa" (Tolerância).
- Entrada: Vel: 105, Tipo: 1 (Carro), Clima: 1 (Chuva)
    - Limite: 80 (100 - 20%). Excesso: 25. Saída: "Multa R$ 195.00 e Carteira Suspensa".
- Entrada: Vel: 75, Tipo: 2 (Caminhão), Clima: 1 (Chuva)
    - Limite: 70 (80 - 10). Excesso: 5. Saída: "Sem Multa".