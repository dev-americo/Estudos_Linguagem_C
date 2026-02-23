#include <stdio.h>

int main(void){

    char comando;

    printf("Comando: ");
    scanf(" %c", &comando);

    switch(comando){
        case 'W':
        case 'w':
            printf("Mover Frente\n");
            break;
        case 'S':
        case 's':
            printf("Mover Trás\n");
            break;
        case 'A':
        case 'a':
            printf("Girar Esquerda\n");
            break;
        case 'D':
        case 'd':
            printf("Girar Direita\n");
            break;
        case 'E':
        case 'e':
            printf("Coletar Amostra\n");
            break;
        default:
            printf("Comando Inválido\n");
            return 1;
    }
    return 0;
}