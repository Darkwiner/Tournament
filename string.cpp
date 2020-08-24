#include "string.h"

//Crear string con puntero
void strCrear(string &s)
{
    s= new char[1];
    s[0]='\0';
}


//Cargar string ingresado por teclado
void cargarString (string &s)
{
    int i=0;
    char car;
    string auxS= new char[MAX];
    //Solicitar en el main el texto a cargar
    scanf ("%c", &car);
    while (car !='\n' && i < MAX-1)
    {
        auxS[i] = car;
        i++;
        scanf ("%c", &car);
    }
    auxS[i]='\0';
    liberarMemoriaString(s);
    s= new char[i];
    s=auxS;
}

//Mostrar string en pantalla
void mostrarString (string s)
{
    int i=0;
    //Soliciar en el main lo que se quiere mostrar
    while (s[i] != '\0'/* && s[i] != '\n'*/)
    {
        if (i == 0) //Primer char
        {
            if ((96 < s[i] && s[i]< 123)) //Si es minuscula
            {
                printf ("%c",s[i] - 32); //Lo imprime en mayuscula
                i++;
            }
        }
        printf("%c",s[i]);
        i++;
    }
}

//Largo del string
int strlar (string s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}


//Dice si el string es vacio
bool stringVacio (string s)
{

    bool resultado=false;
    if(s [0] == '\0')
        resultado=true;
    return resultado;
}

//Libera memoria dinamica del string
void liberarMemoriaString (string &s)
{
    delete []s ;
    // s = NULL;
    strCrear(s);
}

//Copiar el segundo string en el primero
void strcop(string &texto1, string  texto2)
{
    int i=0;
    liberarMemoriaString(texto1);
    int largo=strlar(texto2)+1;
    texto1=new char[largo];
    while(texto2[i]!='\0')
    {
        texto1[i]=texto2[i];
        i++;
    }
    texto1[i]='\0';
}

//Agrego de a un carater a un string
void agregoCharAString(char a, string &s)
{
    int largo=2;
    string auxS= new char[largo];
    auxS[0] = a;
    auxS[1]='\0';
    strcon(s,auxS);
    liberarMemoriaString(auxS);
}

//Concateno string, segundo en el primero
void strcon(string &texto1,string texto2)
{

    int i=0,j=0,largoT2=0,largoT1;
    string auxS;
    largoT2=strlar(texto2);
    largoT1=strlar(texto1);
    auxS=new char[largoT1+1];
    strcop(auxS,texto1);
    liberarMemoriaString(texto1);
    texto1=new char[largoT1+largoT2+1];
    while(auxS[i]!='\0')

    {
        texto1[i]=auxS[i];
        i++;
    }
    while(texto2[j]!='\0')
    {
        texto1[i]=texto2[j];
        i++;
        j++;
    }
    liberarMemoriaString(auxS);
    texto1[i]='\0';
}

bool comparoString(string texto1, string texto2)
{
    int i=0;
    bool resultado=true;
    while(texto1[i]!='\0' && texto2[i]!='\0' && resultado)
    {
        if(texto1[i]!=texto2[i])
            resultado=false;
        else
            i++;
    }
    if(texto1[i]!=texto2[i]&& resultado )
        resultado=false;
    return resultado;
}

//Devuelve si es un numero valido o no
bool esNumero (string s)
{
    int i = 0;
    bool valido = false;
    int contador=0;
    while (s[i] != '\0')
    {
        if(s[i] ==45 && i==0)
        {
            i++;
            contador++;
        }
        if ( s[i] < 58 && s[i] > 47 )
        {
            contador++;
        }
        i++;
    }
    if(contador==i)
        valido=true;
    return valido;
}

//Calcula la potencia
int potencia (int base, int exp)
{
    if (exp == 0)
        return 1;
    int i,w;
    w = base;
    for (i = 1; i < exp; i++)
        base = base*w;
    return base;
}

//Convierte strings de números a tipo de dato int. PRECONDICIÓN: el string solo contiene números
int convertirString (string s)
{
    int i = 0;
    bool esNagativo=false;
    int numero = 0;
    int largo = strlar(s);
    if(largo == 1 && s[i] != 45)
    {
        numero = s[0] - 48;
    }
    else
    {
        if(s[i] == 45)
        {
            i = 1;
            esNagativo = true;
        }
        int num = largo;
        for (i; i<num; i++)
        {
            numero = numero + ((s[i] - 48) * potencia (10, num - 1 - i));
        }
        if(esNagativo)
            numero = numero * -1;
    }
    return numero;
}

//Dice si un string posee solo letras
bool esSoloLetras(string s)
{
    bool es = true;
    int i = 0;
    while (s[i] != '\0' && es)
    {
        if (((64 < s[i] && s[i] < 91) || (96 < s[i] && s[i]< 123) || s[i] == 39)) //Mayusculas - Minusculas - Comilla simple
            i++;
        else
            es = false;
    }
    return es;
}

