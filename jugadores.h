#ifndef JUGADORES_H_INCLUDED
#define JUGADORES_H_INCLUDED
#include "jugador.h"
#include "torneo.h"


typedef struct  nodoA	{
                    	jugador info;
                       	nodoA * hizq;
                    	nodoA * hder;
                    	}Nodo;
typedef Nodo * jugadores;


//Crear un abb de jugadores vacio
void Make(jugadores &a);

//Verificar si ABB jugadores, si no es vacio
bool hayJugadores (jugadores a);

//Inserto un jugador en el arbol según algoritmo de inserción en un ABB (usando el documento como identificador)
void Insert (jugadores &a, jugador elJugador);

//buscar si existe un jugador dada una ci
bool Member(jugadores a,int cedula);

//Dado un documento devuelvo un jugador
jugador Find(jugadores a,int cedula);

//Muestro el ABB jugadores en orden por pantalla nodo a nodo
void mostrarJugadores (jugadores a);

//Cargar los datos de todos los jugadores que participan del torneo. Esta operación se ejecutará
//solamente una vez, al comienzo del torneo. Los jugadores serán inscriptos respetando el
//orden de llegada, y ordenados por cédula de identidad.
void cargarJugadores (jugadores &losJugadores);

//Dado un departamento, listar por pantalla los datos de todos los jugadores que provienen de
//dicho departamento.
///Ordenados por cedula de identidad
void jugadoresDepartamentos (string departamento, jugadores a, int &cant);//,int &contador);

//Imprimir por pantalla los jugadres que pertenecen al departamento
void muestroJugadorDepartamento (jugadores j, string departamento, int &cant);

//agregar un procedimiento que devuelva el jugador con la maxima cantidad de partidas y la cantidad de partidas correspondiente
void jugadorGanador(jugadores j,int &maximo,jugador &a1);

//Dada la cédula de un jugador, listar todos sus datos, incluyendo además
//la cantidad de partidas que lleva disputadas y la cantidad de partidas que lleva ganadas hasta el momento.
void mostrarJugadorCI (jugadores j, int cedula);

//Actualizar datos de jugador en arbol
void actualizarJugador (jugadores &a, jugador elJug, int cedula);



#endif // jugadores_H_INCLUDED
