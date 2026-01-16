#include <stdio.h>

int main(void){

    int fahrenheit;
    float celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = (fahrenheit - 32.0)*(5.0/9.0);

    printf("No Brasil estaria: %.1f C\n", celsius);

    return 0;

}