#include <stdio.h>
#include <stdbool.h>

int main(void){

    int sensor_fumaca, sensor_temperatura, botao_manual, modo_manutencao;

    printf("Sensor de fumaça: ");
    if (scanf("%d", &sensor_fumaca) != 1){
        return 1;
    }

    printf("Sensor de temperatura: ");
    if (scanf("%d", &sensor_temperatura) != 1){
        return 1;
    }

    printf("Botão Manual: ");
    if (scanf("%d", &botao_manual) != 1){
        return 1;
    }

    printf("Modo Manutenção: ");
    if (scanf("%d", &modo_manutencao) != 1){
        return 1;
    }

    bool disparar = ((sensor_fumaca && sensor_temperatura) || botao_manual) && !modo_manutencao;

    printf("Disparar: %d\n", disparar);

    return 0;

}