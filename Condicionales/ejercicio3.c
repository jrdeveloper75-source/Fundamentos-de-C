//Pide un día de la semana representado por un número del 1 al 7. Muéstralo usando switch. Si el usuario escribe un número fuera del rango, informa que es inválido.
#include <stdio.h>

int main(){
    int dia;

    printf("Escribe un número del 1 al 7 para representar un día de la semana:\n");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Número inválido. Debe ser entre 1 y 7.\n");
    }
    return 0;
}