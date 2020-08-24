
//Dado el número que identifica a una partida, marcarla como finalizada, ingresando en ese momento la cédula del ganador e incrementando su cantidad de partidas ganadas.
//En caso de que la partida no exista o de que ya hubiera sido finalizada antes, la operación será cancelada, emitiendo un mensaje de error.
/*
#include "torneo.h"
#include "partidas.h"
#include "jugadores.h"

void pruebaReq3 ()
{
    int numPartida=0;
    printf("\nIngrese el numero de partida que quiere finalizar:");
    scanf("%d",&numPartida);
    if(existePartida (numPartida, partidasJugadas))
    {
        partida laPartida=obtengoPartida(partidasJugadas,numPartida);
        if(partidaFinalizada(laPartida))
        {
            int opcion;
            int j1,j2;
            jugador ganador,perdedor;
            obtengoCIJugadores(laPartida,j1,j2);
            printf("\nCI Jugador 1: %d",j1);
            printf("\nCI Jugador 2: %d",j2);
            printf("\nIngrese el numero del jugador ganador (1/2): ");
            scanf("%d",&opcion);
            switch (opcion)
            {
                case 1:
                    finalizarLaPartida(laPartida);
                    cargarGanador(laPartida, j1);
                    ganador=Find(inscriptos,j1);
                    perdedor=Find(inscriptos,j2);
                    incrementarGanadas (ganador);
                    incrementarJugadas (ganador);
                    incrementarJugadas (perdedor);
                    break;

                case 2:
                    finalizarLaPartida(laPartida);
                    cargarGanador(laPartida, j2);
                    ganador=Find(inscriptos,j2);
                    perdedor=Find(inscriptos,j1);
                    incrementarGanadas (ganador);
                    incrementarJugadas (ganador);
                    incrementarJugadas (perdedor);
                    break;

                default: printf("\nLa opcion ingresada no es correcta");
                    break;
            }
        }
        else
            printf("\nLa partida no esta finalizada");

    }
    else
        printf("\nEl numero de partida ingresado no existe");
return 0;
}
*/
