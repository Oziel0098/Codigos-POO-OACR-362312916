#include <stdio.h>
#include <conio.h>
#define PI 3.14

class Circulo 
{
private:
    float diametro;
    float radio;

public:
    Circulo(float d, float r) 
	{
        diametro = d;
        radio = r;
    }

    float calcularPerimetro() 
	{
        return PI * diametro;
    }

    float calcularArea() 
	{
        return PI * radio * radio;
    }
};

int main() 
{
    int opcion;
    float diametro, radio, resperimetro, resarea;

    printf("Calculadora de Area y Perimetro de un Circulo");
    printf("Menu\n");
    printf("(1) Perimetro\n");
    printf("(2) Area\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) 
	{
        case 1:
            printf("Ingresa el diametro: ");
            scanf("%f", &diametro);

            {
                Circulo circulo(diametro, 0); 
                resperimetro = circulo.calcularPerimetro();
                printf("El perimetro del circulo es: %f\n", resperimetro);
            }
            break;
            
            case 2:
            printf("Ingresa el radio: ");
            scanf("%f", &radio);

            {
                Circulo circulo(0, radio);
                resarea = circulo.calcularArea();
                printf("El area del circulo es: %f\n", resarea);
            }
            break;
            
        default:
            printf("Opcion invalida.\n");
            break;
    }

    getch();
    return 0;
}
