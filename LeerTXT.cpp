#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *archivo;
    char c;

    archivo = fopen("datos.txt", "r");

    while ((c = fgetc(archivo)) != EOF)
    {
        putchar(c);
    }
    
    fclose(archivo); 

    getch(); 
    return 0;
}

