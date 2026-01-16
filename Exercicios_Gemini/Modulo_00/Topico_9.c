#include <stdio.h>

int main(void){

    int idade;
    float peso;
    char inicial_nome;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua letra inicial: ");
    scanf(" %c", &inicial_nome);

    printf(
        "\n=== FICHA ===\n"
        "Nome: %c\n"
        "Idade: %d anos\n"
        "Peso: %.2f kg\n",
        inicial_nome, idade, peso 
    );

    return 0;
}