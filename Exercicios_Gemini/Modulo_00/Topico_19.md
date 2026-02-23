# Tópico 19 - Estrutura de Seleção Múltipla (switch/case)

O compilador frequentemente otimiza um switch criando uma Jump Table (Tabela de Salto). Ele calcula o endereço de memória para onde pular baseando-se no valor da variável, tornando a decisão $O(1)$ (tempo constante), em vez de $O(N)$ (testar vários ifs).

Ao contrário de outras linguagens modernas, o C não para quando encontra um case verdadeiro. Ele executa aquele case e cai (fall-through) para o próximo case abaixo, a menos que encontre um break.

**O Desafio**

Você está programando o firmware de um Robô de Exploração em Marte. Ele recebe comandos de um caractere.
Sua missão é interpretar o comando e imprimir a ação, mas o sistema deve ser robusto para aceitar tanto letras Maiúsculas quanto Minúsculas sem duplicar código (Use o "Case Stacking").

**Comandos:**
- 'W' ou 'w': Imprima "Mover Frente"
- 'S' ou 's': Imprima "Mover Trás"
- 'A' ou 'a': Imprima "Girar Esquerda"
- 'D' ou 'd': Imprima "Girar Direita"
- 'E' ou 'e': Imprima "Coletar Amostra"
- Qualquer outra coisa: Imprima "Comando Inválido"

**Requisitos Técnicos:**

- Input: char comando (Use scanf(" %c", ...) -> note o espaço antes do %c para limpar o buffer do Enter anterior, falaremos disso na aula de buffer, mas use o espaço por fé agora).
- Obrigatório: Usar switch.
- Obrigatório: Usar "Case Stacking" (ex: case 'A': case 'a': ...) para evitar repetir o printf.
- Obrigatório: Usar default para o erro.

**Casos de Teste**
- Entrada: w | Saída: Mover Frente
- Entrada: E | Saída: Coletar Amostra
- Entrada: x | Saída: Comando Inválido

**Regras de Ferro:**

- Tipos permitidos: O switch só funciona com Inteiros (int, char, short, long, enum). Não funciona com float, double ou Strings.
- Constantes: O valor após o case deve ser uma constante literal (ex: 'A', 10, 0xFF). Não pode ser uma variável (ex: case x: é proibido).
- Dois pontos ( : ): Vai depois do valor do case.