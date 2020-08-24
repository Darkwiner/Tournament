#include "partidas.h"

//Crear partidas
void Make (Partidas &p)
{
    p.tope = 0;
}

//Inserta la partida al final de las partidas
void InsBack (Partidas &p, partida e)
{
    p.arreglo[p.tope] = e;
    p.tope++;
}

//Dice si no hay partidas cargadas
bool Empty (Partidas p)
{
    return (p.tope == 0);
}

//Devuelve la primer partida creada
partida Front (Partidas p)
{
    return p.arreglo[0];
}

//Devuelve una partida segun el numero de partida ingresado
partida obtengoPartida(Partidas p,int num) ///CAMBIAR IR NENECHO
{
    return p.arreglo[num-1];
}

//Dado un numero de partida, verificar si la partida existe
bool existePartida (int num, Partidas p)
{
    if (num -1 >= p.tope)
        return false;
    else if (num -1 < 0)
        return false;
    else
        return true;
}

//Obtengo el tope, precondicion no esta lleno la secuencia
int obtengoTope (Partidas p)
{
    return p.tope;
}


//Verifico si puedo agregar mas partidas
bool partidasLlena(Partidas p)
{
    return (N*(N-1)/2)==p.tope;
}


//Muestro todas las partidas ordenadas por numero de partida
void muestroTodasPartidas (Partidas p)
{
    for (int i=0; i<p.tope; i++)
    {
        mostrarPartida(p.arreglo[i]);
    }
}

//Dado el numero que identifica a una partida, actualizo la partida
void actualizarPartida (int num, Partidas &p, partida a)
{
    p.arreglo[num-1]=a;
}
// verifico que las partidas esten terminadas
bool partidasTerminadas(Partidas p)
{
    int i=0;
    bool terminado=true;
    while (i<p.tope && terminado)
    {
        if(!partidaFinalizada(p.arreglo[i]))
            terminado=false;
        i++;
    }
    return terminado;
}
