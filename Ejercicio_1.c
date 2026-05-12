#include <stdio.h>

int main()
 {
    int arreglo [] = {2, 4, 6, 8, 10};
    int *ptr; // El puntero apunta al primer elemento del arreglo

    ptr = &arreglo[2]; // El puntero ahora apunta al tercer elemento del arreglo (6)
    printf("%d\n", *ptr); // Imprime el valor al que apunta el puntero (6)

     int tam = sizeof(arreglo) / sizeof(arreglo[0]); // Calcula el tamaño del arreglo
    for (int i = 0; i < 5; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
    
    
}