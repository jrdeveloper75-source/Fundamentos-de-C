//Pide dos números. Indica cuál es mayor. Si son iguales, también debes informarlo.
#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Escribe dos números y te diré cuál es mayor:\n");
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("El número %d es mayor que %d.\n", a, b);
    } else if(b > a){
        printf("El número %d es mayor que %d.\n", b, a);
    } else {
        printf("Los números son iguales.\n");
    }
    return 0;
}