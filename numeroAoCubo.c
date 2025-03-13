#include <stdio.h>

int main()
{
    int num = 0;
    int cubo = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    cubo = num*num*num;
    printf("\nCubo de %d = %d\n", num, cubo);
    
    return 0;
}
