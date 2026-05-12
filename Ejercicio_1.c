#include <stdio.h>

int main()
 {
    int arreglo [] = {2, 4, 6, 8, 10};
    int *ptr; // El puntero apunta al primer elemento del arreglo

    ptr = &arreglo[0]; // Asignamos la dirección del primer elemento del arreglo al puntero

    for (int i = 0; i < 5; i++) 
    {
        printf("arreglo[%d] = %d\n", i, *ptr); // Imprime el valor al que apunta el puntero
        ptr = &arreglo[i];
        printf("%d\n", *ptr); // Imprime el valor al que apunta el puntero  

        
        
    }

    
    
}