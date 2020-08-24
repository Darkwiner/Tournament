#include "partida.h"

//Crear partida
void crearPartida(partida &a, int numero,int ci1, int ci2)
{
    a.numeroPartida = numero;
    a.cedulaJ1 = ci1;
    a.cedulaJ2 = ci2;
    a.finalizada=false;
}

//Imprimir partida
void mostrarPartida(partida a)
{
    printf("\nNumero Partida: %d",a.numeroPartida+1);
    printf("\nCi de los jugadores: %d y %d",a.cedulaJ1, a.cedulaJ2);
    if(a.finalizada)
    {
        printf("\nGanador de la partida: %d",a.cedulaGanador);
        printf("\nLa partida esta finalizada\n");
    }
    else
        printf("\nLa partida esta en juego\n");
}

//Verifico si la ci del J1 es igual a la ci del J2
bool ciIguales (int ciJ1, int ciJ2)
{
    return ciJ1 == ciJ2;
}


//Devuelvo numero Partida
int obtengoNPartida(partida a)
{
    return a.numeroPartida;
}

//Devuelvo las cedula de los jugadores
void obtengoCIJugadores(partida a,int &ciJ1,int &ciJ2)
{
    ciJ1=a.cedulaJ1;
    ciJ2=a.cedulaJ2;
}


//Obtengo ganador de la partida
int obtengoGanador(partida a)
{
    return a.cedulaGanador;
}


//Verifico si la partida termino
bool partidaFinalizada(partida a)
{
    return a.finalizada;
}

//Finaliza una partida
void finalizarLaPartida (partida &p)
{
    p.finalizada = true;
}


//Carga la cedula del ganador
void cargarGanador (partida &p, int ganador)
{
    p.cedulaGanador=ganador;
}

