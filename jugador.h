#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include "string.h"

typedef struct{ int identificador;
                int cedula;
                string nombre;
                string apellido;
                string departamento;
                int partidasDisputadas;
                int partidasGanadas;
                }jugador;



//Crear jugador
void crearJugador(jugador &a,int ident,int ci,string nombre,string apellido,string departamento);

//Imprimir jugador
void mostrarJugador(jugador a);

//Incrementar partidas ganadas al jugador
void incrementarGanadas (jugador &a);

//Incrementar partidas jugadas al jugador
void incrementarJugadas (jugador &a);

//Devuelvo numero
int obtengoIdentificador(jugador a);

//Devuelvo la cedula
int obtengoCedula(jugador a);

//Obtengo nombre
void obtengoNombre(jugador a,string &nombre);

//Obtengo apellido
void obtengoApellido(jugador a,string &apellido);

//Obtengo departamento
void obtengoDepartamento(jugador a,string &departamento);

//Obtengo cantidad de partidas jugadas
int obtengoCantidadJugadas(jugador a);

//Obtengo cantidad de partidas ganadas
int obtengoCantidadGanadas(jugador a);



#endif // Jugador_H_INCLUDED
