#include <stdio.h>

int main() {
    int numero = 42; // Uma variável inteira
    int *ponteiro; // Declarando um ponteiro para inteiro
    ponteiro = &numero; // Atribuindo o endereço de 'numero' ao ponteiro
    printf("Valor de 'numero': %d\n", numero);
    printf("Endereço de 'numero': %p\n", (void*)&numero);
    printf("Valor apontado por 'ponteiro': %d\n", *ponteiro);
    return 0;
}

