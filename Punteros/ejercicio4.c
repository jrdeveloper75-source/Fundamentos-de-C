#include<stdio.h>

void incrementar(int *numero, int incremento){
    *numero += incremento; // Incrementamos el valor apuntado por el puntero
}

int main(){
    int numero = 10;
    int incremento = 5;

    printf("Valor original: %d\n", numero);
    incrementar(&numero, incremento); // Pasamos la dirección de memoria de numero a la función incrementar
    printf("Valor después del incremento: %d\n", numero);

    return 0;
}