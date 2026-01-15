#include <stdio.h>

#define GRAVIDADE 9.80665

int main(void){

    const int MAX_VELOCIDADE = 300;

    int tempo = 5;
    
    float velocidade = GRAVIDADE * tempo;

    printf("velocidade: %.2f\n", velocidade);

    //MAX_VELOCIDADE = 500; Não há como mudar uma constante após ser declarada

    return 0;
}