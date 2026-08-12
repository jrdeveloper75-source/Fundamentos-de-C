#include<stdio.h>
#include<string.h>

int main(){
    char palabra1[100];
    char palabra2[100];

    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    if(strcmp(palabra1, palabra2) == 0){
        printf("Las palabras son iguales.\n");
        printf("Y tienen una longitud de %zu caracteres.\n", strlen(palabra1));
    } else {
        printf("Las palabras son diferentes.\n");
        printf("La primera palabra tiene una longitud de %zu caracteres.\n", strlen(palabra1));
        printf("La segunda palabra tiene una longitud de %zu caracteres.\n", strlen(palabra2));
    }
    
    return 0;
}