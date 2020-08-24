#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED
#include <stdio.h>

typedef struct
            {
                int numeroPartida;
                int cedulaJ1;
                int cedulaJ2;
                int cedulaGanador;
                bool finalizada;
            } partida;


//Crear partida
void crearPartida(partida &a,int numero,int ci1, int ci2);

//Imprimir partida
void mostrarPartida(partida a);

//Verifico si la ci del J1 es igual a la ci del J2
bool ciIguales (partida a, int ciJ1, int ciJ2);

//Devuelvo numero Partida
int obtengoNPartida(partida a);

//Devuelvo las cedula de los jugadores
void obtengoCIJugadores(partida a,int &ciJ1,int &ciJ2);

//Obtengo ganador de la partida
int obtengoGanador(partida a);

//Finaliza una partida
void finalizarLaPartida (partida &p);

//Verifico si la partida termino
bool partidaFinalizada(partida a);

//Carga la cedula del ganador
void cargarGanador (partida &p,int ganador);

#endif // vertAr_H_INCLUDED
