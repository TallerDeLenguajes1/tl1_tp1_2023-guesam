#include <stdio.h>

int main(){
    int num = 10;
    int * puntero;
    puntero = &num;

    printf("Hola mundo \n");
    printf("Contenido del puntero: %d \n", *puntero);
    printf("La direccion de memoria almacenada por el puntero: %p \n", puntero);
    printf("La direccion de memoria de la variable: %p \n", &num);
    printf("La direccion de memoria del puntero: %p \n", &puntero);
    printf("el tamanio de memoria utilizado por esa variable usando la funcion sizeof(): %d", sizeof(num));

    return 0;
}