#include "torneo.h"

//Crear un torneo vacio
void Crear(torneo &t)
{
   for(int i=0;i<N;i++)
   {
      for(int j=0;j<N;j++)
      {
      t[i][j]=0;
      }
   }
}

//Agregar una partida al torneo
void InsertarArista(torneo &t, int u, int v)
{
   t[u-1][v-1]=1;
    t[v-1][u-1]=1;
}

//Muestro si el torneo termino
bool torneoFinalizado(torneo t)
{
    int i=0,j=0;
    bool noFinalizado = true;
    while(i<N && noFinalizado)
    {
        while(j<N && noFinalizado)
        {
            if ((i!=j) && (t[i][j]!=1))
                noFinalizado=false;
            j++;
        }
        i++;
    }
    return noFinalizado;
}

//Verificar si dos jugadores jugaron un partido
bool JugaronPartido(torneo t,int v,int u)
{
    return t[u-1][v-1]>0;
}

