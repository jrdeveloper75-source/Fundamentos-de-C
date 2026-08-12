#include<stdio.h>

int main(){
    int numeros[] = {7,4,1,3,1,3,8,1,5,2}; // Declaración e inicialización del arreglo de enteros
    int acumulador = 0;
    int encontrar; // Número a encontrar en el arreglo

    printf("Ingrese el número a encontrar: ");
    scanf("%d", &encontrar);

    for(int contador = 0; contador < 10; contador++){
        if(numeros[contador] == encontrar){
            acumulador++;
        }
    }

    if(acumulador == 0){
        printf("El numero %d no se encuentra en el arreglo.\n", encontrar);
    } else {
        printf("El numero %d se encuentra %d veces en el arreglo.\n", encontrar, acumulador);
    }

    return 0;
}