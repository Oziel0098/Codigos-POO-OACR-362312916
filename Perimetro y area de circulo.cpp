#include<stdio.h>
#include<conio.h>
#define pi 3.14
//Calculador de area y perimetro de un circulo
float Perimetro(float diametro)
{
	float perimetro;
	perimetro = pi * diametro;
	return perimetro;
}
float Area(float radio)
{
	float area;
	area = pi*(radio*radio);
	return area;
}
main()
{
int opcion;
float radio, diametro;
printf("Calculador de area y perimetro de un circulo.");
printf("\nMenu de calculos");
printf("\n(1)Perimetro");
printf("\n(2)Area");
printf("\nIngrese una opcion: ");
scanf ("%d", &opcion);
switch (opcion)
{
       case 1: 
	   {
	   	printf("\nIngresa el diametro: ");
        scanf ("%f", &diametro);
        printf("El Perimetro del circulo es %f", Perimetro(diametro));
		break;
	   }
	   case 2:
	   {
		printf("\nIngresa el radio: ");
        scanf ("%f", &radio);
        printf("El area del circulo es %f", Area(radio));
		break;
	   }    
default: printf("\nOpcion invalida");
break;
}
getch();   
}
