/*
//Listar por pantalla los datos de todas las partidas, ordenadas en forma ascendente por número de partida.

#include "torneo.h"
#include "partidas.h"
#include "jugadores.h"

void pruebaReq6 ()
{
    jugadores losJugadores;
    jugador elJugador;
    int cedula;
    string ci, nombre, apellido, departamento;
    strCrear (ci);
    strCrear (nombre);
    strCrear (apellido);
    strCrear (departamento);
    int cantJugadores = 0;
    while (cantJugadores < N)
    {
        printf ("\nIngrese cedula del jugador: ");
        fflush(stdin);
        cargarString(ci);
        if (esNumero(ci))
        {
            cedula = convertirString(ci);
            if (!Member(losJugadores, cedula))
            {
                printf ("Ingrese nombre del jugador: ");
                fflush(stdin);
                cargarString(nombre);
                printf ("Ingrese apellido del jugador: ");
                fflush(stdin);
                cargarString(apellido);
                printf ("Ingrese departamento del jugador: ");
                fflush(stdin);
                cargarString(departamento);
                crearJugador(elJugador,cantJugadores,cedula,nombre,apellido,departamento);
                Insert(losJugadores, elJugador);
                cantJugadores++;
            }
            else
                printf ("Error: El jugador ya esta inscripto en el torneo.");
        }
        else
            printf ("Error: Ingrese una cedula valida.");
    }
    //Cargo partidas
    torneo elTorneo;
    Crear(elTorneo);
    Partidas partidas;
    partida juego;
    string jugadorUno, jugadorDos;
    strCrear(jugadorUno);
    strCrear(jugadorDos);
    int ciJugadorUno, ciJugadorDos;
    printf ("\nIngrese cedula del jugador 1: ");
    fflush(stdin);
    cargarString(jugadorUno);
    if (esNumero(jugadorUno))
    {
        ciJugadorUno = convertirString(jugadorUno);
        printf ("\nIngrese cedula del jugador 2: ");
        fflush(stdin);
        cargarString(jugadorDos);
        if (esNumero(jugadorDos))
        {
            ciJugadorDos = convertirString(jugadorDos);
            if (ciJugadorUno != ciJugadorDos)
            {
                if (Member(losJugadores, ciJugadorUno))
                {
                    if (Member(losJugadores, ciJugadorDos))
                    {
                        int numJugadorUno, numJugadorDos;
                        numJugadorUno = obtengoIdentificador(Find(losJugadores, ciJugadorUno));
                        numJugadorDos = obtengoIdentificador(Find(losJugadores, ciJugadorDos));
                        if (!JugaronPartido(elTorneo, numJugadorUno, numJugadorDos))
                        {
                            int numPartida = obtengoTope(partidas);
                            crearPartida(juego, numPartida, ciJugadorUno, ciJugadorDos);
                            InsBack(partidas,juego);
                            InsertarArista(elTorneo, numJugadorUno, numJugadorDos);
                        }
                        printf ("\nError: los jugadores ya jugaron entre ellos.");
                    }
                    printf ("\nEl jugador 2 no esta registrado en el torneo.");
                }
                printf ("\nEl jugador 1 no esta registrado en el torneo.");
            }
            printf ("\nError: Las cedulas son iguales.");
        }
        printf ("\nError: Ingrese una cedula valida para el jugador 1.");
    }
    printf ("\nError: Ingrese una cedula valida para el jugador 2.");
return 0;
}
*/

