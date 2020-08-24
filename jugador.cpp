#include "jugador.h"

//Crear jugador
void crearJugador(jugador &a,int ident,int ci,string nombre,string apellido,string departamento)
{
    a.identificador=ident;
    a.cedula=ci;
    strCrear(a.nombre);
    strCrear(a.apellido);
    strCrear(a.departamento);
    strcop(a.nombre,nombre);
    strcop(a.apellido,apellido);
    strcop(a.departamento,departamento);
    a.partidasDisputadas = 0;
    a.partidasGanadas = 0;
}

//Mostrar jugador
void mostrarJugador(jugador a)
{
    printf("\nIdentificador: %d\nCedula: %d",a.identificador, a.cedula);
    printf("\nNombre: ");
    mostrarString(a.nombre);
    printf("\nApellido: ");
    mostrarString(a.apellido);
    printf("\nDepartamento: ");
    mostrarString(a.departamento);
    printf("\nPartidas jugadas: %d\nPartidas ganadas: %d", a.partidasDisputadas, a.partidasGanadas);
    printf("\n+++++++++++++++++++++++++++++");

}

//Incrementar partidas ganadas al jugador
void incrementarGanadas (jugador &a)
{
    a.partidasGanadas++;
}

//Incrementar partidas ganadas al jugador
void incrementarJugadas (jugador &a)
{
    a.partidasDisputadas++;
}

//D	evuelvo numero
int obtengoIdentificador(jugador a)
{
    return a.identificador;
}

//Devuelvo la cedula
int obtengoCedula(jugador a)
{
    return a.cedula;
}

//Obtengo nombre
void obtengoNombre(jugador a,string &nombre)
{
    strcop(a.nombre, nombre);
}

//Obtengo apellido
void obtengoApellido(jugador a,string &apellido)
{
    strcop(a.apellido, apellido);
}

//Obtengo departamento
void  obtengoDepartamento(jugador a,string &departamento)
{
    strcop(departamento, a.departamento);
}

//Obtengo cantidad de partidas jugadas
int obtengoCantidadJugadas(jugador a)
{
    return a.partidasDisputadas;
}

//Obtengo cantidad de partidas ganadas
int obtengoCantidadGanadas(jugador a)
{
    return a.partidasGanadas;
}


