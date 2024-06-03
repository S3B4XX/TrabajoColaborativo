#include <stdio.h>
#include "lecturas.h"

#define MAX_PRODUCTOS 100

int main() {
    Producto productos[MAX_PRODUCTOS];
    int cantidad_productos = 0;

    int opcion;
    do {
        printf("1. Agregar producto\n");
        printf("2. Mostrar inventario\n");
        printf("3. Buscar producto\n");
        printf("4. Salir\n");
        printf("Introduce una opción: ");
        scanf("%i", &opcion);

        switch (opcion) {
            case 1:
                agregar_producto(productos, &cantidad_productos);
                break;
            case 2:
                mostrar_inventario(productos, cantidad_productos);
                break;
            case 3:
                buscar_producto(productos, cantidad_productos);
                break;
            case 4:
                printf("Adiós.\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion!= 4);

    return 0;
}