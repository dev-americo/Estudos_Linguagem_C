#include <stdio.h>
#include <stdbool.h>

int main(void){

    int velocidade, veiculo, clima;

    printf("Velocidade: ");
    if ((scanf("%d", &velocidade) != 1)){
        return 1;
    }

    printf("Veiculo (1 - carro | 2 - caminhão): ");
    if ((scanf("%d", &veiculo) != 1)){
        return 1;
    }

    printf("Clima (0 - sol | 1 - chuva): ");
    if ((scanf("%d", &clima) != 1)){
        return 1;
    }

    int limite = 100;

    if (clima == 1){
        limite = 80;
    }

    if (veiculo == 2){
        limite -= 10;
    }

    int margem = velocidade - limite;

    if (margem > 20){
        printf("Multa R$ 195.00 e Carteira Suspensa\n");
        return 0;
    }

    if (margem >= 8){
        printf("Multa de R$ 130.00\n");
        return 0;
    }

    printf("Sem Multa\n");
    return 0;

}