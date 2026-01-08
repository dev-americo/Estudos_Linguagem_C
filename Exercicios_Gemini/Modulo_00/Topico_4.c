#include <stdio.h>

int main(void){

    float decimal = 0.1;
    double decimal_double = 0.1;

    printf(
        "=== ANALISE DE PRECISAO ===\n"
        "Float  0.1: %.20f\n"
        "Double 0.1: %.20f\n"
        "\n",
        decimal, decimal_double
    );

    if(decimal != decimal_double){
        printf("Diferentes! A precisao muda o valor.\n");
    } else {
        printf("Iguais\n");
    }

    return 0;

}