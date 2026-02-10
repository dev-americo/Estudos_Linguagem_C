#include <stdio.h>

int main(void){
    
    short int horario;

    printf("Horário: ");
    scanf("%hd", &horario);

    short int preco = (horario == 1) ? 30 : ((horario == 2) ? 10 : 20);

    printf("Preço: %hd\n", preco);

    return 0;

}