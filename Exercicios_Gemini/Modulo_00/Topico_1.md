# Tópico 01 - Anatomia de um Programa C: A estrutura mínima (#include, main, return 0)

Sua tarefa é escrever um programa que imprima um log formatado identado, simulando o boot do sistema, e no final, simule uma Falha Crítica retornando um código de erro ao sistema operacional.

**Requisitos Técnicos:**

- Formatação Rigorosa: Você deve usar caracteres de escape para formatar a saída.
- \n para nova linha.
- \t para tabulação (indentação).
- Cabeçalho Limpo: O código deve incluir apenas <stdio.h>.
- Sinalização de Erro: O programa NÃO deve retornar 0. Ele deve retornar o código 255 para indicar falha fatal.
- Estilo: Use comentários (// ou /* */) para explicar o que o retorno faz.

**Saída Visual Esperada (Terminal):**

```
[KERNEL] Loading...
    > CPU: OK
    > MEM: OK
[FAIL] System corrupted.
```

3. Casos de Teste

- Compilação: O compilador (gcc/clang) não deve emitir nenhum Warning (use a flag -Wall se souber, senão, apenas compile).
- Saída Visual: O texto deve estar alinhado exatamente como no exemplo acima, usando tabs.

**Verificação do Retorno:**

- Após rodar o programa, verifique o código de erro.
  - Linux/Mac: Digite ```echo $?``` logo após rodar. Deve aparecer 255.
  - Windows: Digite ```echo %ERRORLEVEL%``` logo após rodar. Deve aparecer 255.