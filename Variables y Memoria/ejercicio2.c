//Pide al usuario su edad y muéstrala.
#include<stdio.h>

int main(){
    int edad;
    printf("¿Cuantos años tienes?\n");
    //Esta función pide que el usuario ingrese el dato
    scanf("%d", &edad);
    printf("Ya veo, asi que tu edad es %d años", edad);
    return 0;
}