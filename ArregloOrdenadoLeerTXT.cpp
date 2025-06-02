#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *archivo;
    int arreglo[5], temp;

    archivo = fopen("datos.txt", "r");

    for (int i = 0; i < 5; i++)
    {
        fscanf(archivo, "%d", &arreglo[i]);
    }

    fclose(archivo); 

    // Ordenamiento burbuja
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    printf("Los datos ordenados son:");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", arreglo[i]);
    }

    getch();
    return 0;
}

