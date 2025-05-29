//desarrollar un programa que me permita desarrollar el area de un triangulo a partir de lalongitud base y altura (escaleno, isoceles y equilatero)
#include <stdio.h>
#include <conio.h>

class Triangulo
{
	private: 
	float base;
	float altura;
	
	public:
		Triangulo(float b, float a)
		{
			base = b;
			altura = a;
		}
	float calculaArea()
	{
			return base * altura / 2;
	}	
};

int main()
{
	int opcion;
	float base, altura, resarea;
	
	printf("Calculadora de Area de un Triangulo");
    printf("Menu\n");
    printf("(1) Equilatero\n");
    printf("(2) Isoceles\n");
    printf("(3) Escaleno\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion);
    
    switch(opcion)
    {
    case 1:
    	printf("Ingresa la base: ");
            scanf("%f", &base);
        printf("Ingresa la altura: ");
            scanf("%f", &altura);

            {
                Triangulo triangulo(base, altura); 
                resarea = triangulo.calculaArea();
                printf("El area del triangulo Equilatero es: %f\n", resarea);
            }
    break;
    
    case 2:
    	printf("Ingresa la base: ");
            scanf("%f", &base);
        printf("Ingresa la altura: ");
            scanf("%f", &altura);

            {
                Triangulo triangulo(base, altura); 
                resarea = triangulo.calculaArea();
                printf("El area del triangulo Isoceles es: %f\n", resarea);
            }
    break;
    
    case 3:
    	printf("Ingresa la base: ");
            scanf("%f", &base);
        printf("Ingresa la altura: ");
            scanf("%f", &altura);

            {
                Triangulo triangulo(base, altura); 
                resarea = triangulo.calculaArea();
                printf("El area del triangulo Escaleno es: %f\n", resarea);
            }
    break;
    
    default:
            printf("Opcion invalida.\n");
            break;
    }
    return 0;
    getch();
}


