#include "jugadores.h"


//Crear un abb de jugadores vacio
void Make(jugadores &a)
{
    a = NULL;
}

//Verificar si ABB jugadores es vacio
bool hayJugadores(jugadores a)
{
    return (a != NULL);
}

//Inserto un jugador en el arbol según algoritmo de inserción en un ABB (usando el documento como identificador)
void Insert (jugadores &a, jugador elJugador)
{
    if(a == NULL)
    {
        a = new nodoA;
        a->info = elJugador;
        a->hizq=NULL;
        a->hder=NULL;
    }
    else
    {
        if(obtengoCedula(elJugador) < obtengoCedula(a->info))
            Insert(a->hizq,elJugador);
        else
            Insert(a->hder,elJugador);
    }
}

//Buscar si existe un jugador dada una ci
bool Member(jugadores a,int cedula)
{
    if(a!=NULL)
    {
        if(obtengoCedula(a->info)==cedula)
            return true;
        else
        {
            if(obtengoCedula(a->info)>cedula)
                return Member(a->hizq, cedula);
            else
                return Member(a->hder, cedula);
        }

    }
    else
        return false;
}

//Dado un documento devuelvo un jugador, precondicion el jugador existe
jugador Find(jugadores a,int cedula)
{
    if(obtengoCedula(a->info)==cedula)
        return a->info;
    else
    {
        if(obtengoCedula(a->info)>cedula)
            return Find(a->hizq, cedula);
        else
            return Find(a->hder, cedula);
    }
}

//Muestro el ABB jugadores en orden por pantalla nodo a nodo
void mostrarJugadores (jugadores a)
{
    if (a != NULL)
    {
        mostrarJugadores(a -> hizq);
        mostrarJugador(a->info);
        mostrarJugadores (a -> hder);
    }
}

//Imprimir por pantalla los jugadres que pertenecen al departamento
void jugadoresDepartamentos (string departamento, jugadores a,int &contador)
{
    if (a != NULL)
    {
        jugadoresDepartamentos(departamento, a->hizq,contador);
        string deptoJugador;
        strCrear (deptoJugador);
        obtengoDepartamento(a->info, deptoJugador);
        if (comparoString(deptoJugador,departamento))
        {
            mostrarJugador(a->info);
            contador++;
        }
        jugadoresDepartamentos(departamento, a->hder,contador);
    }
}

//agregar un procedimiento que devuelva el jugador con la maxima cantidad de partidas y la cantidad de partidas correspondiente, precondicion la partida tiene que estar terminada
void jugadorGanador(jugadores j,int &maximo,jugador &a1)
{

    if(j!=NULL)
    {
        if(obtengoCantidadGanadas(j->info) > maximo)
        {
            maximo=obtengoCantidadGanadas(j->info);
            a1=j->info;
            jugadorGanador(j->hizq,maximo,a1);
            jugadorGanador(j->hder,maximo,a1);
        }
        else
        {
            jugadorGanador(j->hizq,maximo,a1);
            jugadorGanador(j->hder,maximo,a1);
       }
    }
}

//Dada la cédula de un jugador, listar todos sus datos, incluyendo además
//la cantidad de partidas que lleva disputadas y la cantidad de partidas que lleva ganadas hasta el momento.
void mostrarJugadorCI (jugadores j, int cedula)
{
    if (hayJugadores(j))
        if (Member(j, cedula))
            mostrarJugador(Find(j, cedula));
        else
            printf ("\nEl jugador no esta registrado.");
    else
        printf ("\nNo hay jugadores registrados en el torneo.");
}


//Actualizar datos de jugador en arbol
void actualizarJugador (jugadores &a, jugador elJug, int cedula)
{
    if(obtengoCedula(a->info)==cedula)
        a->info=elJug;
    else
    {
        if(obtengoCedula(a->info)>cedula)
            actualizarJugador(a->hizq,elJug, cedula);
        else
            actualizarJugador(a->hder,elJug, cedula);
    }
}
