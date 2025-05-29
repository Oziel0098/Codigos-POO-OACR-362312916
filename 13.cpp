#include <stdio.h>
#include <conio.h>

int main() 
{
    float depositoMensual = 1000.0;
    float tasaInteres = 0.03; // 3% mensual
    int meses = 10 * 12; // 10 años * 12 meses
    float total = 0.0;

    for (int i = 1; i <= meses; i++) 
	{
        total = (total + depositoMensual) * (1 + tasaInteres);
    }

    printf("Total ahorrado despues del tiempo especificado: $%.2f\n", total);

    getch(); 
    return 0;
}
