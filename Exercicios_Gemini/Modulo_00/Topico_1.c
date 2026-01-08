// Biclioteca necessária para funções de entrada e saída
#include <stdio.h>

// Função principal do programa
int main(void) {
    
    // Simulação de mensagens de carregamento do sistema
    printf(
    "[KERNEL] Loading...\n"
    "\t> CPU: OK\n"
    "\t> MEM: OK\n"
    "[FAIL] System corrupted.\n");

    //Retorna 255 para indicar erro genérico
    return 255;
}