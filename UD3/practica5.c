#include<string.h>//Para el tratamiento de cadenas
#include<stdlib.h>
#include<unistd.h>//Para solucionar los warning que aparecian al compilar

int main(int argc, char **argv)
{

int fichOrigen, fichDestino;
static int tam_buffer = 1024;
int bytesLeidos,bytesEscritos;
int fragmentacion;
int cont = 1;

if (argc != 3)//Si se han introducido menos de 3 parametros dara error, el parametro [0] es el compilado
{
    printf("Error: número de arguntos incorrecto\n");
    printf("Usar: ./backup <fichero Origen> <fichero Destino>\n");
    return -1;
}

printf("Introduzca un tamaño de buffer:");
scanf("%d",&tam_buffer);
const char* buffer[tam_buffer];


fichOrigen = open(argv[1],O_RDONLY);//Le asignamos a fichOrigen la ruta del archivo fuente (/etc/passwd)
if (fichOrigen == -1)//Si nos devuelve un -1 se cerrara el fichero y seguidamente el programa
{
    printf("Error: el fichero %s no existe o no se ha podido abrir\n",argv[1]);
    close(fichOrigen);
    return -2;
}

fichDestino = open(argv[2], O_CREAT|O_WRONLY,0644);

//Si al abir o crear el fichero hay algún error nos devolver un -1 y cerramos el fichero y el programa
if (fichDestino == -1)
{
    printf("Error: el fichero %s no existe o no se ha podido crear\n",argv[2]);
    close(fichDestino);
    return -2;
}


  /*Le indicamos que en la variable bytesLeidos queremos almacenar la lectura del fichOrigen(fuente), iremos leyendo
   el fichero hasta que no quede nada por leer*/

while ((bytesLeidos = read(fichOrigen,buffer,tam_buffer)) > 0)
{
    bytesEscritos = write(fichDestino,buffer,bytesLeidos);                      //Almacenaremos la información en el fichDestino y mostraremos por pantalla 										//los bytes leidos para visualizar la diferencia al cambiar el tamaño de buffer.
    printf("Iteración %d Tamaño de bloque = %d Bytesleidos: %d - BytesEscritos: %d\n",cont,tam_buffer,bytesLeidos,bytesEscritos);
    cont++;
}

close(fichOrigen);//Cerramos el fichero origen
close(fichDestino);//Cerramos el fichero destino
fragmentacion = (tam_buffer - bytesEscritos);
printf("La fragmentacion ha sido de: %d\n",fragmentacion);
printf("Total de llamadas al sistema:%d \n",(4 + (cont*2)));
printf("El programa ha finalizado\n");//Indicamos al usuario que el programa ya ha finailzado
return 1;//Salimos del programa
}
