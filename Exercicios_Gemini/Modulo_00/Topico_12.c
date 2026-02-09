#include <stdio.h>

int main(void){

    int nota1, nota2;

    printf("Digite a Nota 1: ");
    scanf("%d", &nota1);

    printf("Digite a Nota 2: ");
    scanf("%d", &nota2);

    float media = ((float)nota1 + nota2)/2;

    printf("Média: %.2f\n", media);
    
    return 0;

}