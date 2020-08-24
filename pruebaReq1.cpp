
//Cargar los datos de todos los jugadores que participan del torneo.
//Esta operación se ejecutará solamente una vez, al comienzo del torneo.
//Los jugadores serán inscriptos respetando el orden de llegada, y ordenados por cédula de identidad.

#include "torneo.h"
#include "partidas.h"
#include "jugadores.h"

/**/



/*int pruebaReq1 ()
{
    jugadores inscriptos;
    Make(inscriptos);
    cargarJugadores(inscriptos);
    printf("\n\n");
    mostrarJugadores(inscriptos);
}
*/

///PRUEBA 2
/*int pruebaReq1 ()
{
    jugadores inscriptos;
    Make(inscriptos);
    cargarJugadores(inscriptos);
    printf("\n\n");
    mostrarJugadores(inscriptos);
}
*/

///PRUEBA 2
/*
int prueba2Req1 ()
{
    jugador elJugador;
    int cedula;
    string nombre, apellido, departamento;
    strCrear (nombre);
    strCrear (apellido);
    strCrear (departamento);
    int canJugadores = 1;
    jugadores inscriptos;
    Make(inscriptos);

    while (canJugadores <= N)
    {
        printf ("\nIngrese cedula del jugador: ");
        fflush(stdin);
        scanf("%d",&cedula);
        printf ("Ingrese nombre del jugador: ");
        fflush(stdin);
        cargarString(nombre);
        printf ("Ingrese apellido del jugador: ");
        fflush(stdin);
        cargarString(apellido);
        printf ("Ingrese departamento del jugador: ");
        fflush(stdin);
        cargarString(departamento);
        crearJugador(elJugador,canJugadores,cedula,nombre,apellido,departamento);
        Insert(inscriptos, elJugador);
        canJugadores++;
    }
    printf("\n\n");
    mostrarJugadores(inscriptos);
    string departamentoB;
    strCrear(departamentoB);
    printf ("\nIngrese departamento para buscar los jugadores: ");
    cargarString(departamentoB);
    jugadoresDepartamentos (departamentoB,inscriptos);
}*/


///PRUEBA CARGA DE JUGADORES
/*
jugador elJugador;
jugadores inscriptos;
Make(inscriptos);
crearJugador (elJugador, 1, 123, "tomas", "cancela", "lavalleja");
Insert (inscriptos, elJugador);
crearJugador (elJugador, 2, 456, "emi", "correa", "mdeo");
Insert (inscriptos, elJugador);
crearJugador (elJugador, 3, 789, "nico", "cabrera", "mdeo");
Insert (inscriptos, elJugador);
mostrarJugadores(inscriptos);
*/
///PRUEBA FUNCIONAL
/*
int pruebaReq1 ()
{
    jugador elJugador;
    string cedula, nombre, apellido, departamento;
    strCrear (cedula);
    strCrear (nombre);
    strCrear (apellido);
    strCrear (departamento);
    int canJugadores = 1;
    int ciJugador;
    jugadores inscriptos;
    Make(inscriptos);

    while (canJugadores <= N)
    {
        printf ("Ingrese cedula del jugador: ");
        fflush(stdin);
        cargarString(cedula);
        if (esNumero(cedula))
        {
            ciJugador = convertirString(cedula);
            if (!Member(inscriptos,ciJugador))
            {
                printf ("Ingrese nombre del jugador: ");
                fflush(stdin);
                cargarString(nombre);
                if (esSoloLetras(nombre))
                {
                    printf ("Ingrese apellido del jugador: ");
                    fflush(stdin);
                    cargarString(apellido);
                    if (esSoloLetras(apellido))
                    {
                        printf ("Ingrese departamento del jugador: ");
                        fflush(stdin);
                        cargarString(departamento);
                        if (esSoloLetras(departamento))
                        {
                            crearJugador(elJugador, canJugadores, ciJugador, nombre, apellido, departamento);
                            Insert(inscriptos,elJugador);
                            canJugadores++;
                            printf ("\n");

                        }
                        else
                            printf ("Error: El departamento del jugador no es valido.\n");
                    }
                    else
                        printf ("Error: El apellido del jugador no es valido.\n");
                }
                else
                    printf ("Error: El nombre del jugador no es valido.\n");
            }
            else
                printf ("Error: El jugador ya esta inscripto en el torneo.\n");
        }
        else
            printf ("Error: La cedula del jugador no es correcta.\n");
    }
    printf("\n");
    ///SI SE QUIERE VER LOS JUGADORES INGRESADOS
    mostrarJugadores(inscriptos);
}*/
