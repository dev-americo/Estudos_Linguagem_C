#include <stdio.h>

int main(void){

    long int numero;

    printf("Digite um número: ");
    scanf("%ld", &numero);

    if (numero <= 0){
        printf("número inválido\n");
        return 1;
    }

    long int pico = 1;
    int contador = 0;

    while (numero != 1) {
        
        if (numero > pico){
            pico = numero;
        }

        contador += 1;

        if(numero % 2){
            numero = (numero * 3) + 1;
        }
        else{
            numero = numero/2;
        }

        printf("%ld -> ", numero);
    }

    printf(
        "\n"
        "Passos: %d\n"
        "Pico Máximo: %ld\n",
        contador, pico
    );

    return 0;
}