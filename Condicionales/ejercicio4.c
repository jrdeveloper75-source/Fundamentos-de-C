/*Pide un año. Determina si es bisiesto. Pista: Un año es bisiesto si: es divisible entre 4, 
excepto si es divisible entre 100, salvo que también sea divisible entre 400.*/
#include <stdio.h>

int main(){
    int año;

    printf("Escribe un año y te diré si es bisiesto:\n");
    scanf("%d", &año);

    if(año % 4 == 0){
        if(año % 100 == 0){
            if(año % 400 == 0){
                printf("El año %d es bisiesto.\n", año);
            } else {
                printf("El año %d no es bisiesto.\n", año);
            }
        } else {
            printf("El año %d es bisiesto.\n", año);
        }
    } else {
        printf("El año %d no es bisiesto.\n", año);
    }
    return 0;
}