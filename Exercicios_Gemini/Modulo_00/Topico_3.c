#include <stdio.h>

int main(void){

    char texto; // variavel para representar caracteres
    int inteiro; // variavel para representar numeros inteiros
    float decimal; // variavel para representar numeros decimais
    double decimal_preciso; // variavel para representar numeros decimais com precisão dupla

    // teste de overflow em variaval char com intervalo -128 a +127
    char teste_overflow = 127; 
    char overflow = teste_overflow + 1;

    printf(
        "=== TAMANHOS DE TIPO ===\n"
        "Char: %zu bytes\n"
        "Int: %zu bytes\n"
        "Float: %zu bytes\n"
        "Double: %zu bytes\n"
        "\n"
        "=== TESTE DE OVERFLOW ===\n"
        "Valor inicial: %d\n"
        "Apos incremento: %d\n"
        , sizeof(texto), sizeof(inteiro), sizeof(decimal), sizeof(decimal_preciso), teste_overflow, overflow
    );

    return 0;

}
