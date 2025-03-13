#include <stdio.h>

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int *ponteiroArray = numeros;
    printf("Primeiro elemento do array: %d\n", *ponteiroArray);
    printf("Segundo elemento do array: %d\n", *(ponteiroArray + 1));
    return 0;
}
