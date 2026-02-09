# Tópico 12 - Casting (Conversão de Tipos): Implícito (promoção automática) vs Explícito ((float)int).

O Casting Manual Você pode "fantasiar" uma variável de outro tipo apenas por uma linha de código.

```
int a = 5, b = 2;

/* Leitura: "Trate 'a' como float AGORA, divida por b, e guarde em resultado" */
float resultado = (float)a / b;
```

A Ordem das Coisas (Precedência):
- (float)a transforma o 5 em 5.0.
- Agora a conta é 5.0 / 2.
- O C vê um float e promove o 2 para 2.0.
- Resultado: 2.5.

**O Desafio: A Média Escolar**
Você vai calcular a média aritmética de duas provas. O sistema da escola é antigo e só aceita notas inteiras (0 a 100). Porém, a média final precisa ser exata 10(com decimais) para decidir se o aluno passa ou não.

**Requisitos Técnicos:**
- Declare nota1 e nota2 estritamente como int.
- Declare media como float.
- Peça as duas notas ao usuário.
- Calcule a média. Você é obrigado a usar o casting (float) na fórmula.
- Imprima a média com 2 casas decimais.

**Casos de Teste**
- Entrada: 5 e 2 | Saída: 3.50 (Se der 3.00, você errou a posição do cast)
- Entrada: 90 e 91 | Saída: 90.50
- Entrada: 10 e 10 | Saída: 10.00