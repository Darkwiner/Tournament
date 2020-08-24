#ifndef TORNEO_H_INCLUDED
#define TORNEO_H_INCLUDED
#include <stdio.h>

const int N = 3;// cantidad de participantes del torneo
typedef int torneo [N][N];

///typedef partida torneo [N] [N]; ???

//Crear un torneo vacio
void Crear (torneo &t);

//Agregar una partida al torneo
void InsertarArista(torneo &t, int u, int v);

//mustro si el torneo termino
bool torneoFinalizado(torneo t);

//Verificar si dos jugadores jugaron un partido
bool JugaronPartido(torneo t,int v,int u);




/*
//Listar en pantalla las partidas de un jugador
void listarPartidasJugador(torneo &t,int v);

//Determinar cuantos partidos jugo un jugador
int partidosJugadosJugador(torneo t,int v);*/




//Listar por pantalla los datos de todas las partidas
///ordenadas en forma ascendente por número de partida.
void datosPartidas (torneo t);//a partidas



#endif // MATRIZAD_H_INCLUDED
