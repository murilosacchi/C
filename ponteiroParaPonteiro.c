#include <stdio.h>

int main () {
    int a = 231 ;
    int *pd ; 
    int **pi ; 
    pd = &a ; 
    pi = &pd ; 
    printf ("a está em %p e vale %d\n", &a, a);
    printf ("pd está em %p e vale %p\n", &pd, pd);
    printf ("pi está em %p e vale %p\n", &pi, pi);
    printf ("*pd vale %d\n", *pd);
    printf ("*pi vale %p\n", *pi);
    printf ("**pi vale %d\n", **pi);
    return 0 ;
}
