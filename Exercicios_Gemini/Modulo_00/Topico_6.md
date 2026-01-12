# Tópico 06 - Variáveis e Inicialização: Declaração vs Definição. O lixo de memória que existe em variáveis não inicializadas.

**Conceito**
- Variáveis Globais (declaradas fora da main) são zeradas automaticamente pelo sistema. 
- Variáveis Locais (dentro da main ou funções) NÃO são.

Vamos tentar ler o passado da sua memória RAM.

**Requisitos Técnicos:**

- Variáveis Globais: Declare um vetor nao inicializado fora da main.
- Variáveis Locais: Declare um vetor nao inicializado dentro da main.

- Imprima o valor do vetor global.
- Imprima o valor do vetor local.

**O que eu quero ver:** Eu quero ver números estranhos. Grandes, negativos, aleatórios. Se der tudo zero, seu sistema operacional é "superprotetor", mas tecnicamente, isso é sorte, não regra.