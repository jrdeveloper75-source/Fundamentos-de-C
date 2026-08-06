//Pide la edad del usuario y muestra si es mayor o menor de edad
#include <stdio.h>

int main(){
    int edad;

    printf("Escribe tu edad:\n");
    scanf("%d", &edad);

    if(edad >= 18){
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }
    return 0;
}