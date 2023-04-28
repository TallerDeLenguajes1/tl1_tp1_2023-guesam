#include <stdio.h>

int cuadrado (int num);
void cuadradoDeNum (int num);
void direccionYcontenido(int num);
void invertir(int a, int b);
void orden(int a, int b);

int main(){
    int a, b;

    printf("Ingresa dos numeros: ");
    scanf("%d", &a);
    fflush(stdin);
    scanf("%d", &b);

    printf("El cuadrado de %d es: %d \n", a, cuadrado(a));
    cuadradoDeNum(b);
    direccionYcontenido(a);
    invertir(a, b);
    orden(a, b);

    return 0;
}


//a) Haga una función que devuelva el cuadrado de un número
int cuadrado (int num){
    int aux;
    aux = num * num;
    return aux;
}

//b) Haga la función anterior, pero devolviendo un tipo void
void cuadradoDeNum (int num){
    int aux;
    aux = num * num;
    printf("El cuadrado de %d es: %d \n", num, aux);
}

//c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
void direccionYcontenido(int num){
    printf("Direccion de la variable: %p \n", &num);
    printf("Contenido de la variable: %d \n", num);
}

//d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void invertir(int a, int b){
    printf("Original: \na = %d \nb = %d \n", a, b);
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("Invertido: \na = %d \nb = %d \n", a, b);
}

//e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(int a, int b){
    int aux = a;
    if(a > b){
        a = b;
        b = aux;
    } 
    printf("Ordenado: \na = %d \nb = %d \n", a, b);
}