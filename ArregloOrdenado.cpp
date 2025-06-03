#include <stdio.h>
#include <conio.h>

int main()
{
    int celda;
    float arreglo[10], temp;

    printf("Arreglo Sencillo\n");
    for (celda = 0; celda < 10; ++celda)
    {
        printf("Dame el dato de la celda %d: ", celda);
        scanf("%f", &arreglo[celda]); 
    }

    // Ordenamiento
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    printf("\nLos datos ordenados son:");
    for (celda = 0; celda < 10; ++celda)
    {
        printf("\n%f", arreglo[celda]); 
    }

    getch();
    return 0;
}



