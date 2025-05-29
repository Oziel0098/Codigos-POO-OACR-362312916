#include <stdio.h>
#include <conio.h>

// Clase base Animal
class Animal 
{
public:
    // Atributos
    char nombre[30];
    char habitat[20];
    char tamano[20];
    char vertebrado[30];

    // Métodos
    virtual void Comer() = 0;

    void Dormir() 
	{
        printf("%s duerme cuando termina de comer\n", nombre);
    }

    // Método para mostrar información
    void MostrarInformacion() 
	{
        printf("\nNombre: %s\n", nombre);
        printf("Habitat: %s\n", habitat);
        printf("Tamano: %s\n", tamano);
        printf("Es %s\n\n", vertebrado);
    }

    // Método para capturar datos del animal
    void CapturarDatos() 
	{
        printf("\nIngresa el nombre del animal: ");
        scanf("%s", nombre);

        printf("Ingresa su habitat: ");
        scanf("%s", habitat);

        printf("Ingresa el tamano : ");
        scanf("%s", tamano);

        printf("Ingresa si es vertebrado o invertebrado: ");
        scanf("%s", vertebrado);
    }

};

// Subclase Mamifero
class Mamifero : public Animal 
{
public:
    void Comer() 
	{
        printf("%s es un mamifero y come carne, plantas o ambos\n", nombre);
    }
};

// Subclase Molusco
class Molusco : public Animal 
{
public:
    void Comer() 
	{
        printf("%s es un molusco y se alimenta de algas, plancton u otros organismos\n", nombre);
    }
};

int main() 
{
	int opcion;
    printf("Selecciona el tipo de animal:\n");
    printf("1. Mamifero\n");
    printf("2. Molusco\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion);
    
    switch(opcion)
    {
    	case 1:
    	{
    	Mamifero mam;
        mam.CapturarDatos();
        mam.MostrarInformacion();
        mam.Comer();
        mam.Dormir();
        }
        break;
         
		case 2:
    	{
    	Molusco mol;
        mol.CapturarDatos();
        mol.MostrarInformacion();
        mol.Comer();
        mol.Dormir();
        }
        break; 
		  
        default:
            printf("Opcion invalida.\n");
            break;
	}

    getch();

    return 0;
}

