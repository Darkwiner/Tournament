/*
//Dada la cedula de un jugador, listar todos sus datos, incluyendo ademas la cantidad de partidas que lleva disputadas y
//la cantidad de partidas que lleva ganadas hasta el momento.

#include "torneo.h"
#include "partidas.h"
#include "jugadores.h"

void pruebaReq5 ()
{
    jugadores inscriptos;
    Make(inscriptos);
    cargarJugadores(inscriptos);
    printf("\n\n\n");
    mostrarJugadores(inscriptos);
    bool seguir = true;
    while (seguir)
    {
        printf ("\nIngrese cedula de jugador a buscar en el torneo: ");
        fflush(stdin);
        string ci;
        cargarString(ci);
        if (esNumero(ci))
        {
            int cedula;
            cedula = convertirString(ci);
            mostrarJugadorCI(inscriptos, cedula);
            seguir = false;
        }
        else
            printf ("Error: Ingrese una cedula valida.");
    }
}
*/
