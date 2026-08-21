#include<stdio.h>

int main(){
    //variables
    int saldo_disponible = 0;
    int condicion = 1;
    int opcion = 0;
    int retirar = 0;
    int depositar = 0;

    do{
        //menu
        printf("====Cajero Automatico====\n");
        printf("1. Consultar saldo\n");
        printf("2. Retirar Dinero\n");
        printf("3. Depositar Dinero\n");
        printf("4. Salir\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf("Saldo disponible = %d\n", saldo_disponible);
                break;
            case 2:
                printf("Cuanto dinero quieres retirar: ");
                scanf("%d", &retirar);
                saldo_disponible -= retirar;
                break;
            case 3:
                printf("Cuanto dinero quieres depositar: ");
                scanf("%d", &depositar);
                saldo_disponible += depositar;
                break;
            case 4:
                condicion = 0;
            default:
                break;
        }

    }while(condicion != 0);

    return 0;
}