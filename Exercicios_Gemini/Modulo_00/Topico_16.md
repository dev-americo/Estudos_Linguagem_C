# Tópico 16 - Avaliação de Curto-Circuito (Short-Circuit)

Os operadores lógicos && e || não avaliam o lado direito se o lado esquerdo já definir o resultado final.

- No && (E): Se a primeira condição for 0 (Falso), o resultado será Falso, independentemente do que vier depois. O C para a leitura e não executa o segundo comando.
- No || (OU): Se a primeira condição for 1 (Verdadeiro), o resultado será Verdadeiro. O C para a leitura.

**O Desafio (Enunciado)**
Você está programando a IA de navegação de um Drone de Carga.
Para aceitar uma missão, o drone precisa verificar se a eficiência de voo é aceitável. A fórmula da eficiência é: distancia / bateria. A missão só é segura se a eficiência for menor ou igual a 5 (km por % de bateria).
- O Perigo: Se a bateria for 0, a divisão distancia / bateria causará um erro fatal (Floating Point Exception) e derrubará o sistema.
- Sua Missão: Declare uma variável bool rota_segura. Ela deve ser Verdadeira apenas se:
- A bateria tiver carga (não for zero).
- E a eficiência calculada for aceitável (<= 5).

**Requisitos Técnicos:**

- Leia distancia e bateria como inteiros (com validação do scanf).
- Proibido usar if para verificar a bateria antes.
- Use o Curto-Circuito do && na atribuição da variável rota_segura para impedir que a divisão ocorra caso a bateria seja 0.

**Casos de Teste**

- Entrada: Dist: 100, Bat: 20
    - Saída Esperada: Rota Segura: 1
- Entrada: Dist: 100, Bat: 10
    - Saída Esperada: Rota Segura: 0
- Entrada: Dist: 50, Bat: 0
    - Saída Esperada: Rota Segura: 0 (Sem crash!)