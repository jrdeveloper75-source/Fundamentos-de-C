#include <stdio.h>

struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main(){
    struct Persona persona1;

    printf("Ingrese el nombre de la persona: ");
    fgets(persona1.nombre, sizeof(persona1.nombre), stdin);
    printf("Ingrese la edad de la persona: ");
    scanf("%d", &persona1.edad);
    printf("Ingrese la altura de la persona (en metros): ");
    scanf("%f", &persona1.altura);

    printf("\nDatos de la persona:\n");
    printf("Nombre: %s", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Altura: %.2f metros\n", persona1.altura);
    return 0;
}