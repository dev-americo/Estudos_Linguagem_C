#include <stdio.h>
#include <stdbool.h>

int main(void){

    int distancia, bateria;

    printf("Distância: ");
    scanf("%d", &distancia);

    printf("Bateria: ");
    scanf("%d", &bateria);

    bool rota_segura = bateria && (distancia/bateria)<=5;

    printf("Rota Segura: %d\n", rota_segura);

    return 0;

}