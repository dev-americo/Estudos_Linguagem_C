#include <stdio.h>

int main(void){

    int tempo;
    printf("Digite o empo em segundos: ");
    scanf(" %d", &tempo);

    int horas = tempo / 3600;
    int resto = tempo % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    printf(
        "Tempo: %dh %dmin %ds",
        horas, minutos, segundos
    );

    return 0;

}