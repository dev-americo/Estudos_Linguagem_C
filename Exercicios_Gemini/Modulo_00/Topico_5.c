#include <stdio.h>

int main(void){

    unsigned int contador = 5;

    while (contador >= 0){

        printf("%u\n", contador);
        
        if(contador > 5){
            break;
        }

        contador--;
    }

    printf("Fim\n");

    return 0;

}