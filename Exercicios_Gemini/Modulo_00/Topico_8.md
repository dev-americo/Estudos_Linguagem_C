# Tópico 08 - Entrada e Saída (I/O) Básica: printf e seus especificadores de formato (%d, %f, %c).

**A sintaxe do printf geral é:** %[flags][largura][.precisão]tipo

- Controle de Precisão (.2f):
    - Corta o float em 2 casas.
    - %.0f arredonda para inteiro visualmente, sem perder o valor na memória.

- Largura de Campo (Padding):
    - Imagine que você quer imprimir uma tabela. Se você imprimir o número 10 e embaixo o 1000, eles ficam desalinhados.
    - %5d: Diz ao C: "Reserve 5 espaços para esse número. Se ele for menor, preencha com espaços vazios à esquerda".
    - Isso alinha colunas de números à direita (padrão contábil).

- Alinhamento à Esquerda (-):
    - %-5d: O sinal de menos inverte a lógica. O número cola na esquerda e os espaços vazios vão para a direita. Útil para textos ou códigos.

- Zero Padding (0):
    - %05d: Preenche com zeros em vez de espaços.
    - Ex: 12 vira 00012. Essencial para datas e códigos de barras.

**O Desafio: O Cupom Fiscal**

Você vai gerar um "Cupom Fiscal" alinhado matematicamente, sem usar a tecla Tab (\t) e sem dar espaços manuais na string. A formatação deve ser feita inteiramente pelos especificadores do printf.

Como ainda não estudamos Strings (vetores de char), usaremos um char único para o código do produto.

**Requisitos Técnicos:**

- Dados:
    - Produto A: Código 'A', Preço 4.50, Qtd 3.
    - Produto B: Código 'B', Preço 125.90, Qtd 2.
    - (Calcule o total de cada linha em variáveis novas).

- Formatação Obrigatória:
    - Coluna COD: Alinhada à esquerda, largura 5.
    - Coluna QTD: Com 3 zeros à esquerda (ex: 003), largura 4.
    - Coluna PRECO: Alinhada à direita, largura 8, 2 casas decimais.
    - Coluna TOTAL: Alinhada à direita, largura 8, 2 casas decimais.
    - Moldura: Use caracteres como |, =, ou - para desenhar uma borda simples.

Saída Esperada (Atenção ao alinhamento vertical):

| COD | QTD  |   PRECO  |   TOTAL |
|-----|------|----------|---------|
| A   | 0003 |     4.50 |   13.50 |
| B   | 0002 |   125.90 |  251.80 |
