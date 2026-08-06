//Declara una variable de cada tipo (int, float, double y char) y muestra sus valores.
#include<stdio.h>

int main(){
    //numeros enteros
    int edad = 24;
    //numeros decimales
    float medida = 24.6;
    //numeros decimales con más precición
    double pi = 3.141592653589793;
    //un caracter
    char letra = 'J';

    //Mostrar cada variable en pantalla
    printf("%d %f %f %c\n", edad, medida, pi, letra);
    return 0;
}