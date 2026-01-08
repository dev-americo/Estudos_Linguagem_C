# Topico 02 - Comentários e Estilo: // vs /* */

Você acaba de herdar um código "Legacy" escrito por um estagiário que foi demitido. O código funciona, mas é ilegível: indentação quebrada, nomes de variáveis criptografados e comentários que insultam sua inteligência.

**Sua Missão:** Reescrever o código abaixo aplicando Clean Code.

**Código Sujo (Copie e conserte):**

```
#include <stdio.h>
/* funcao principal */
int main(){
int x=10; // valor da largura
int y=5;//valor da altura
int z;
/* calcula area
multiplicando x por y */
z=x*y;
// imprime na tela
printf("Area: %d\n",z);
return 0;}
```

**Requisitos Técnicos:**

- Indentação: Use 4 espaços (ou 1 tab) consistentemente. O código dentro do main deve estar recuado.
- Nomes Significativos: Troque x, y, z por nomes que representem o domínio do problema (ex: largura, altura, area).
- Comentários de Cabeçalho: Adicione um bloco /* */ antes da main explicando o propósito do programa.
- Limpeza: Remova os comentários óbvios (// imprime na tela). Mantenha apenas o que explica a regra de negócio (se necessário).
- Espaçamento: Dê ar ao código. Separe declaração de lógica e lógica de saída com linhas em branco. Use espaços ao redor de operadores (=, *).