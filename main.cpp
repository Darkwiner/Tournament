#include "jugadores.h"
#include "torneo.h"
#include "partidas.h"
#include <stdlib.h>

int main()
{
    //DECLARO VARIABLES GLOBALES
    torneo elTorneo;
    Crear(elTorneo);
    jugadores inscriptos;
    Make(inscriptos);
    Partidas partidasJugadas;
    Make(partidasJugadas);
    ///Carga de jugadores en el torneo
    printf ("*** Comienza el Torneo ***\n\n");
    printf ("Registrar jugadores en el torneo:\n\n");
    jugador elJugador;
    string cedula, nombre, apellido, departamento;
    strCrear (cedula);
    strCrear (nombre);
    strCrear (apellido);
    strCrear (departamento);
    int canJugadores = 1;
    int ciJugador;
    while (canJugadores <= N)
    {
        printf ("Ingrese cedula del jugador: ");
        fflush(stdin);
        cargarString(cedula);
        if (!stringVacio(cedula))
        {
            if (esNumero(cedula))
            {
                ciJugador = convertirString(cedula);
                if (!Member(inscriptos,ciJugador))
                {
                    printf ("Ingrese nombre del jugador: ");
                    fflush(stdin);
                    cargarString(nombre);
                    if (!stringVacio(nombre))
                    {
                        if (esSoloLetras(nombre))
                        {
                            printf ("Ingrese apellido del jugador: ");
                            fflush(stdin);
                            cargarString(apellido);
                            if (!stringVacio(apellido))
                            {
                                if (esSoloLetras(apellido))
                                {
                                    printf ("Ingrese departamento del jugador: ");
                                    fflush(stdin);
                                    cargarString(departamento);
                                    if (!stringVacio(departamento))
                                    {
                                        if (esSoloLetras(departamento))
                                        {
                                            crearJugador(elJugador, canJugadores, ciJugador, nombre, apellido, departamento);
                                            Insert(inscriptos,elJugador);
                                            canJugadores++;
                                            printf ("\n");

                                        }
                                        else
                                            printf ("Error: El departamento del jugador no es valido. Ingrese los datos nuevamente.\n");
                                    }
                                    else
                                        printf ("Error: Ingrese un departamento. Ingrese los datos nuevamente.\n");
                                }
                                else
                                    printf ("Error: El apellido del jugador no es valido. Ingrese los datos nuevamente.\n");
                            }
                            else
                                printf ("Error: Ingrese un apellido. Ingrese los datos nuevamente.\n");
                        }
                        else
                            printf ("Error: El nombre del jugador no es valido. Ingrese los datos nuevamente.\n");
                    }
                    else
                        printf ("Error: Ingrese un nombre. Ingrese los datos nuevamente.\n");
                }
                else
                    printf ("Error: El jugador ya esta inscripto en el torneo. Ingrese los datos nuevamente.\n");
            }
            else
                printf ("Error: La cedula del jugador no es correcta. Ingrese los datos nuevamente.\n");
        }
        else
            printf ("Error: ingrese una cedula.\n");
    }
    system("cls");
    printf ("\nJugadores registrados correctamente:\n");
    printf("\n+++++++++++++++++++++++++++++\n");
    mostrarJugadores(inscriptos);
    printf ("\n\n");
    system ("pause");
    system("cls");
    bool salir = false;
    do
    {
        bool verMenu = false;
        if (hayJugadores(inscriptos))
        {
            printf("1 - Ver todos los jugadores registrados en el torneo");
            printf("\n2 - Iniciar una nueva partida entre dos jugadores");
            printf("\n3 - Marcar como finalizada una partida");
            printf("\n4 - Mostrar los datos de todos los jugadores provenientes de un departamento");
            printf("\n5 - Mostrar los datos de un jugador");
            printf("\n6 - Mostrar los datos de todas las partidas, ordenadas en forma ascendente por el numero de partida");
            printf("\n7 - Verificar si el torneo finalizo y mostrar el jugador ganador");
            printf("\n8 - Salir");
            printf("\nIngrese un comando: ");
            fflush(stdin);
            string comando;
            strCrear(comando);
            cargarString(comando);
            if(!stringVacio(comando))
            {
                while (!verMenu)
                {
                    int opcion;
                    opcion = convertirString(comando);
                    switch (opcion)
                    {
                    case 1:
                    {
                        system("cls");
                        printf ("Jugadores registrados:\n");
                        printf("\n+++++++++++++++++++++++++++++");
                        mostrarJugadores(inscriptos);
                    }
                    break; //Fin case 1
                    case 2:
                    {
                        if(!partidasLlena(partidasJugadas))
                        {
                            if(hayJugadores(inscriptos)) //Lo pongo aca para no pedir las cedulas al pepe
                            {
                                int ci1,ci2;
                                printf ("\nIngrese cedula del jugador 1: ");
                                fflush(stdin);
                                scanf("%d",&ci1);
                                printf ("Ingrese cedula del jugador 2: ");
                                fflush(stdin);
                                scanf("%d",&ci2);
                                int contadorExist=0;
                                if (Member(inscriptos, ci1))
                                    contadorExist++;
                                if(Member(inscriptos, ci2))
                                    contadorExist=contadorExist+2;
                                switch (contadorExist)
                                {
                                case 0:
                                    printf ("\nLos documentos ingresados son incorrectos.");
                                    break;
                                case 1:
                                    printf ("\nEl documento ingresado para el jugador 2 no existe.");
                                    break;
                                case 2:
                                    printf ("\nEl documento ingresado para el jugador 1 no existe.");
                                    break;
                                case 3:
                                    if(ci1==ci2)
                                        printf ("\nLos documentos son iguales, ingrese dos documentos diferentes.");
                                    else
                                    {
                                        int id1,id2;
                                        id1=obtengoIdentificador(Find(inscriptos,ci1));
                                        id2=obtengoIdentificador(Find(inscriptos,ci2));
                                        if(JugaronPartido(elTorneo,id1,id2))
                                            printf ("\nLos jugadores ya jugaron una partida entre si.");
                                        else
                                        {
                                            int proximaPartida=obtengoTope(partidasJugadas);
                                            partida nuevaPartida;
                                            crearPartida(nuevaPartida, proximaPartida, ci1, ci2);
                                            InsBack (partidasJugadas, nuevaPartida);
                                            InsertarArista(elTorneo, id1, id2);
                                            printf ("\nComienza la partida entre jugador %d y jugador %d.",id1,id2);
                                        }
                                    }
                                    break;
                                default:
                                    printf ("\nError");
                                    break;
                                }
                            }
                            else
                                printf ("\nNo hay jugadores registrados en el torneo.");
                        }
                        else
                            printf ("\nNo se pueden crear mas partidas, el torneo esta por finalizar");
                    }
                    break; //Fin case 2
                    case 3:
                    {
                        int numPartida=0;
                        if (!Empty(partidasJugadas))
                        {
                            printf("\nIngrese el numero de partida que quiere finalizar: ");
                            scanf("%d",&numPartida);
                            if(existePartida (numPartida, partidasJugadas))
                            {
                                partida laPartida = obtengoPartida(partidasJugadas,numPartida);
                                if(!partidaFinalizada(laPartida))
                                {
                                    int opcion, j1, j2;
                                    jugador ganador,perdedor;
                                    obtengoCIJugadores(laPartida,j1,j2);
                                    printf("\nCI Jugador 1: %d",j1);
                                    printf("\nCI Jugador 2: %d",j2);
                                    printf("\nIngrese el numero del jugador ganador (1/2): ");
                                    scanf("%d",&opcion);
                                    switch (opcion)
                                    {
                                    case 1:
                                        finalizarLaPartida(laPartida);
                                        cargarGanador(laPartida,j1);
                                        ganador = Find(inscriptos,j1);
                                        perdedor = Find(inscriptos,j2);
                                        incrementarGanadas(ganador);
                                        incrementarJugadas(ganador);
                                        incrementarJugadas(perdedor);
                                        actualizarPartida(numPartida,partidasJugadas,laPartida);
                                        actualizarJugador(inscriptos,ganador,obtengoCedula(ganador));
                                        actualizarJugador(inscriptos,perdedor,obtengoCedula(perdedor));
                                        break;
                                    case 2:
                                        finalizarLaPartida(laPartida);
                                        cargarGanador(laPartida,j2);
                                        ganador = Find(inscriptos,j2);
                                        perdedor = Find(inscriptos,j1);
                                        incrementarGanadas(ganador);
                                        incrementarJugadas(ganador);
                                        incrementarJugadas(perdedor);
                                        actualizarPartida(numPartida,partidasJugadas,laPartida);
                                        actualizarJugador(inscriptos,ganador,obtengoCedula(ganador));
                                        actualizarJugador(inscriptos,perdedor,obtengoCedula(perdedor));
                                        break;
                                    default:
                                        printf("\nLa opcion ingresada no es correcta.");
                                        break;
                                    }
                                    printf ("\nPartida finalizada, jugador ganador: %d",opcion);
                                }
                                else
                                    printf("\nLa partida esta finalizada.");
                            }
                            else
                                printf("\nEl numero de partida ingresado no existe.");
                        }
                        else
                            printf ("\nNo hay partidas en juego.");
                    }
                    break; //Fin case 3
                    case 4:
                    {
                        if(hayJugadores(inscriptos))
                        {
                            string depto;
                            strCrear(depto);
                            printf ("Ingrese departamento: ");
                            cargarString(depto);
                            if (!stringVacio(depto))
                            {
                                if (esSoloLetras(depto))
                                {
                                    printf ("\nJugadores del departamento de ");
                                    mostrarString(depto);
                                    printf ("\n");
                                    int contador=0;
                                    jugadoresDepartamentos(depto, inscriptos, contador);
                                    if(contador==0)
                                    {
                                        printf ("\nNo hay jugadores en el torneo del departamento de ");
                                        mostrarString(depto);
                                    }
                                }
                                else
                                    printf ("Error: El departamento no es valido.");
                            }
                            else
                                printf ("\nError: No se ha ingresado un departamento.");
                        }
                        else
                            printf ("\nNo hay jugadores inscriptos en el torneo.");
                    }
                    break; //Fin case 4
                    case 5:
                    {
                        if(hayJugadores(inscriptos))
                        {
                            printf ("\nIngrese cedula de jugador a buscar en el torneo: ");
                            fflush(stdin);
                            string ci;
                            strCrear(ci);
                            cargarString(ci);
                            if (esNumero(ci))
                            {
                                int cedula;
                                cedula = convertirString(ci);
                                if (Member(inscriptos, cedula))
                                    mostrarJugador(Find(inscriptos, cedula));
                                else
                                    printf ("\nEl jugador no esta registrado en el torneo.");
                            }
                            else
                                printf ("Error: Ingrese una cedula valida.");
                        }
                        else
                            printf("\nNo hay jugadores inscriptos en el torneo.");
                    }
                    break; //Fin case 5
                    case 6:
                    {
                        if (!Empty(partidasJugadas))
                        {
                            muestroTodasPartidas(partidasJugadas);
                        }
                        else
                            printf ("\nError: No hay partidas en proceso ni finalizadas.");
                    }
                    break; //Fin case 6
                    case 7:
                    {
                        if (torneoFinalizado(elTorneo))
                        {
                            if (partidasTerminadas(partidasJugadas))
                            {
                                jugador j1;
                                int maximo = 0;
                                jugadorGanador(inscriptos, maximo, j1);
                                printf("\nEl jugador ganador es: ");
                                mostrarJugador(j1);
                            }
                            else
                                printf("\nEl torneo no ha finalizado, todavia quedan partidas por terminar.");
                        }
                        else
                            printf("\nEl torneo no ha finalizado, todavia quedan partidas por jugar.");
                    }
                    break; //Fin case 7
                    case 8:
                    {
                        char opcSalir;
                        printf("\nDesea salir del torneo? S/N: ");
                        fflush(stdin);
                        scanf("%c",&opcSalir);
                        if (torneoFinalizado(elTorneo))
                        {
                            switch (opcSalir)
                            {
                            case 'S':
                            case 's':
                                printf("Hasta la proxima!");
                                salir = true;
                            }
                        }
                        else
                        {
                            system("cls");
                            printf ("Error: El torneo no ha finalizado.");
                        }
                    }
                    break; //Fin case 8
                    default:
                        printf ("\nIngrese comando valido.");
                    }
                    printf ("\n\n");
                    system("pause");
                    verMenu = true;
                    system("cls");
                }
            }
            else
            {
                system("cls");
                printf("No ha digitado ningun comando, por favor ingrese uno.\n\n");
            }
        }

    }
    while (!salir);
}



