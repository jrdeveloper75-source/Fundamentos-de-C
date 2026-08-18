#include<stdio.h>
#include<string.h>

struct Producto {
    char nombre[50];
    float precio;
    int cantidad;
};

struct Producto productos[5] = {
    {
        .nombre = "Producto 1",
        .precio = 10.5,
        .cantidad = 5
    },
    {
        .nombre = "Producto 2",
        .precio = 20.0,
        .cantidad = 3
    },
    {
        .nombre = "Producto 3",
        .precio = 15.75,
        .cantidad = 8
    },
    {
        .nombre = "Producto 4",
        .precio = 5.25,
        .cantidad = 10
    },
    {
        .nombre = "Producto 5",
        .precio = 12.0,
        .cantidad = 6
    }
};

int main() {
    float costoso = 0.0;
    int menor = 0;

    char producto_mas_costoso[50];
    char producto_menor_cantidad[50];

    for(int i = 0; i < 5; i++){
        printf("Producto: %s\n", productos[i].nombre);

        if(productos[i].precio > costoso){
            costoso = productos[i].precio;
            strcpy(producto_mas_costoso, productos[i].nombre);
        }

        if (menor == 0){
            menor = productos[i].cantidad;
        }else if(productos[i].cantidad < menor){
            menor = productos[i].cantidad;
            strcpy(producto_menor_cantidad, productos[i].nombre);
        }
    }
    printf("El producto más costoso es: %s\n", producto_mas_costoso);
    printf("El producto con la menor cantidad es: %s\n", producto_menor_cantidad);

    return 0;
}