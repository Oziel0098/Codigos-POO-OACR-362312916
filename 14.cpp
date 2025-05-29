#include <stdio.h>
#include <conio.h>
#include <math.h>  // Necesaria para la función pow()

int main() 
{
    float deposito = 15000.0;
    float tasaMensual = 0.037; // 3.7% expresado como decimal
    float meses = 15 * 12;
    float monto;

    monto = deposito * pow(1 + tasaMensual, meses);

    printf("Monto ahorrado despues del tiempo especificado: $%.2f\n", monto);

    getch(); // Espera una tecla para finalizar
    return 0;
}

