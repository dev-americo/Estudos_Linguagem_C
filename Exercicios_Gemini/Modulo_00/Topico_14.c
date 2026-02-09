#include <stdio.h>

int main(void){

    int temp, min, max;

    printf("Temperatura: ");
    scanf("%d", &temp);

    printf("Temperatura mínima: ");
    scanf("%d", &min);

    printf("Temperatura máxima: ");
    scanf("%d", &max);

    int frio, quente, seguro;

    frio = (temp < min);
    quente = (temp > max);
    seguro = (temp >= min) * (temp <= max);

    printf("Frio: %d | quente: %d | seguro: %d\n", frio, quente, seguro);

    return 0;

}