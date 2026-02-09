#include <stdio.h>
#include <stdbool.h>

int main(void){

    int sinal;
    int sensor;

    printf("Sinal: ");
    scanf("%d", &sinal);

    printf("Sensor: ");
    scanf("%d", &sensor);

    int saida = sinal * (bool)sensor;

    printf("%d\n", saida);

    return 0;

}