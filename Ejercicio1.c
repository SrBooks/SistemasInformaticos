#include <stdio.h>
// El archivo de cabecera de la biblioteca estándar de C limits.h
// Se utiliza para establecer mediante constantes ciertas propiedades de las variables de tipo entero,
// propiedades como por ejemplo la definición de su rango.
// http://www.tutorialspoint.com/c_standard_library/limits_h.htm
// http://tigcc.ticalc.org/doc/limits.html
#include <limits.h>
//
// El archivo de cabecera de la biblioteca estándar de C float.h
// Se utiliza para establecer mediante constantes ciertas propiedades de las variables de tipo float,
// propiedades como por ejemplo la definición de su rango. FLT_MIN,FLT_MAX
#include <float.h>

int main()
{
   printf ("Storage size for int : %d \n", (int) sizeof(int)); //Devuelve el tamaño en bytes del tipo entero (int).
   printf ("Mínimo y máximo valor del tipo de datos int valor= %d\t\t%d\n",INT_MIN,INT_MAX);
   printf ("Máximo valor del tipo de datos unsigned int valor= %u\t\n",UINT_MAX);
   printf ("\n"); //INTRO
   printf ("Storage size for short int : %d \n", (short) sizeof(short)); //Devuelve el tamaño en bytes del tipo short (int).
   printf ("Mínimo y máximo valor del tipo de datos short int valor= %d\t\t%d\n",SHRT_MIN,SHRT_MAX);
   printf ("Máximo valor del tipo de datos unsigned short valor= %d\t\n",USHRT_MAX);
   printf ("\n"); //INTRO
   printf ("Storage size for long : %ld \n", (long) sizeof(long)); //Devuelve el tamaño en bytes del tipo long (int).
   printf ("Mínimo y máximo valor del tipo de datos long valor= %ld\t\t%ld\n",LONG_MIN,LONG_MAX);
   printf ("Máximo valor del tipo de datos unsigned long valor= %lu\t\n",ULONG_MAX);
   printf ("\n"); //INTRO
   printf ("Storage size for char : %d \n", (char) sizeof(char)); //Devuelve el tamaño en bytes del tipo caracter (char).
   printf ("Mínimo y máximo valor del tipo de datos char valor= %d\t\t%d\n",CHAR_MIN,CHAR_MAX);
   printf ("Mínimo y máximo valor del tipo de datos signed schar valor= %d\t\t%d\n",SCHAR_MIN,SCHAR_MAX);
   printf ("Máximo valor del tipo de datos unsigned char valor= %d\t\n",UCHAR_MAX);
   printf ("Máximo número de bytes en un caracter multy-byte valor= %d\t\n",MB_LEN_MAX);
   printf ("\n"); //INTRO
   printf ("Storage size for float : %f \n", (float) sizeof(float)); //Devuelve el tamaño en bytes del tipo decimal (float).
   printf ("Mínimo y máximo valor del tipo de datos float valor= %f\t\t%f\n",FLT_MIN,FLT_MAX);
   printf ("\n"); //INTRO
   printf ("Storage size for double : %f \n", (double) sizeof(double)); //Devuelve el tamaño en bytes del tipo decimal (double).
   printf ("Mínimo y máximo valor del tipo de datos double valor= %f\t\t%f\n",DBL_MIN,DBL_MAX);
   printf ("\n"); //INTRO
   printf ("Mínimo y máximo valor del tipo de datos long double valor= %Lf\t\t%Lf\n",LDBL_MIN,LDBL_MAX);
   return 0;
}

//
//Referencias para códigos de formatos en la función printf
//https://msdn.microsoft.com/es-es/library/aa291517(v=vs.71).aspx
//http://es.cppreference.com/w/cpp/io/c/printf_format
//
//Fuentes para la realizacioń del Ejercicio1
//https://www.tutorialspoint.com/c_standard_library/limits_h.htm
//http://www.rowleydownload.co.uk/arm/documentation/index.htm?http://www.rowleydownload.co.uk/arm/documentation/UINT_MAX.htm
//https://bytes.com/topic/c/answers/221315-ulong_max
//http://stackoverflow.com/questions/18797400/how-would-i-print-the-largest-possible-float-and-double-in-c
