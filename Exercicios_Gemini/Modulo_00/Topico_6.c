#include <stdio.h>

void mostrar(int vetorRecebido[10]){
    
    for(int i = 0; i <10; i++){
        printf("%d ", vetorRecebido[i]);
    }

    printf("\n");
}

int vetorForaMain[10];

int main(void){
    int vetor[10];

    mostrar(vetorForaMain);
    mostrar(vetor);

    return 0;

}