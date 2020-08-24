#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <stdio.h>

const int MAX = 20;
typedef char * string;

//Crear string
void strCrear(string &s);

//Carga string ingresado por teclado
void cargarString (string &s);

//Mostrar string en pantalla
void mostrarString (string s);

//Dice si el string es vacio
bool stringVacio (string s);

//Compara dos strings si son iguales
bool comparoString (string s1, string s2);

//Largo del string
int strlar (string s);

//Copiar el primer string en el segundo
void strcop(string &texto1, string  texto2);

//Convierte strings de números a tipo de dato int. PRECONDICIÓN: el string solo contiene números
int convertirString (string s);

//Libera memoria dinamica del string
void liberarMemoriaString (string &s);

//Concateno string, segundo en el primero
void strcon(string &texto1,string texto2);

//Agrego de a un carater a un string
void agregoCharAString(char a, string &s);

//Devuelve si es un numero valido o no
bool esNumero (string s);

//Calcula la potencia
int potencia (int base, int exp);

//Convierte strings de números a tipo de dato int. PRECONDICIÓN: el string solo contiene números
int convertirString (string s);

//Dice si un string posee solo letras
bool esSoloLetras(string s);

#endif // STRING_H_INCLUDED
