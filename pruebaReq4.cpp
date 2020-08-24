/*
//Dado un departamento, listar por pantalla los datos de todos los jugadores que provienen de dicho departamento.
//Este listado debe emitirse ordenado por cédula de identidad.

#include "torneo.h"
#include "partidas.h"
#include "jugadores.h"

void pruebaReq4 ()
{
    jugadores inscriptos;
    Make(inscriptos);
    cargarJugadores(inscriptos);
    if(hayJugadores(inscriptos))
    {
        string depto;
        strCrear(depto);
        printf ("\nIngrese departamento: ");
        cargarString(depto);
        int contador=0;
        jugadoresDepartamentos(depto, inscriptos, contador);
        if(contador==0)
        {
            printf ("\nNo hay jugadores en el torneo del departamento de ");
            mostrarString(depto);
        }
    }
    else
        printf ("\nNo hay jugadores inscriptos en el torneo.");
}
*/
