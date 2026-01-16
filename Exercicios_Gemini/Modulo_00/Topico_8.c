#include <stdio.h>

int main(void){

    char produto_A_codigo = 'A';
    int produto_A_qtd = 3;
    float produto_A_preco = 4.50;
    float produto_A_total = produto_A_preco * produto_A_qtd;

    char produto_B_codigo = 'B';
    int produto_B_qtd = 2;
    float produto_B_preco = 125.90;
    float produto_B_total = produto_B_preco * produto_B_qtd;

    printf(
        "====================================\n"
        "| COD | QTD  |   PRECO  |   TOTAL  |\n"
        "|-----|------|----------|----------|\n"
        "| %-3c | %04d | %8.2f | %8.2f |\n"
        "| %-3c | %04d | %8.2f | %8.2f |\n"
        "====================================\n",
        produto_A_codigo, produto_A_qtd, produto_A_preco, produto_A_total,
        produto_B_codigo, produto_B_qtd, produto_B_preco, produto_B_total
    );

    return 0;

}