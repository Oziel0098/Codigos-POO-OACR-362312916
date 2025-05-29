#include <stdio.h>
#include <conio.h>

using namespace std;

//Clase base Deportes
class Deportes
{
	public:
	char Nombre[30];
	char NumJugadores[30];
	char Tiempo[30];
	
//Metodos
	void InicioJuego()
	{
		printf("El partido de %s empieza cuando el arbitro da la orden\n", Nombre);
	}
	
	void FinalJuego()
	{
		printf("El partido de %s finaliza cuando se cumple el tiempo reglamentario\n", Nombre);
	}
	
	virtual void Reglas() = 0;

};

//SubClases

class ContactoPie : public Deportes
{
public:
	
    void CapturarDatos() 
	{
        printf("\nIngresa el nombre del deporte: ");
        scanf("%s", Nombre);

        printf("Ingresa su numero de jugadores para que pueda iniciar: ");
        scanf("%s", NumJugadores);

        printf("Ingresa el tiempo reglamentario: ");
        scanf("%s", Tiempo);
    }
    
    void MostrarInformacion() 
	{
        printf("\nNombre del deporte: %s\n", Nombre);
        printf("Numero de jugadores: %s\n", NumJugadores);
        printf("Tiempo reglamentario: %s minutos\n", Tiempo);
    }
    
    void Reglas() 
	{
        printf("En el %s un jugador que no sea portero no puede tocar el balon con las manos\n", Nombre);
    }
};

class ContactoMano : public Deportes
{
public:
	
    void CapturarDatos() 
	{
        printf("\nIngresa el nombre del deporte: ");
        scanf("%s", Nombre);

        printf("Ingresa su numero de jugadores para que pueda iniciar: ");
        scanf("%s", NumJugadores);

        printf("Ingresa el tiempo reglamentario : ");
        scanf("%s", Tiempo);
    }
    
    void MostrarInformacion() 
	{
        printf("\nNombre del deporte: %s\n", Nombre);
        printf("Numero de jugadores: %s\n", NumJugadores);
        printf("Tiempo reglamentario: %s minutos\n", Tiempo);
    }
    
    void Reglas() 
	{
        printf("En el %s un jugador no puede tocar el balon con el pie\n", Nombre);
    }
};

int main()
{
	ContactoPie pie;
	ContactoMano mano;
	
        pie.CapturarDatos();
        mano.CapturarDatos();
        
        pie.MostrarInformacion();
        pie.Reglas();
        pie.InicioJuego();
        pie.FinalJuego();
        
        mano.MostrarInformacion();
        mano.Reglas();
        mano.InicioJuego();
        mano.FinalJuego();
         getch();

    return 0;
}


