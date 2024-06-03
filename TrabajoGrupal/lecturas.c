#include "lecturas.h"
#include <stdio.h>
#include <string.h>

void agregar_producto(Producto productos[], int* cantidad_productos) {
    printf("Introduce el código del producto: ");
    scanf("%i", &productos[*cantidad_productos].codigo);
    printf("Introduce el nombre del producto: ");
    scanf("%49s", productos[*cantidad_productos].nombre);
    printf("Introduce la cantidad del producto: ");
    scanf("%i", &productos[*cantidad_productos].cantidad);
    printf("Introduce el precio del producto: ");
    scanf("%f", &productos[*cantidad_productos].precio);
    (*cantidad_productos)++;
}

void mostrar_inventario(Producto productos[], int cantidad_productos) {
    printf("Inventario:\n");
    for (int i = 0; i < cantidad_productos; i++) {
        printf("Código: %i, Nombre: %s, Cantidad: %i, Precio: %.2f\n",
               productos[i].codigo, productos[i].nombre, productos[i].cantidad, productos[i].precio);
    }
}

void buscar_producto(Producto productos[], int cantidad_productos) {
    int codigo_buscar;
    printf("Introduce el código del producto a buscar: ");
    scanf("%i", &codigo_buscar);
    for (int i = 0; i < cantidad_productos; i++) {
        if (productos[i].codigo == codigo_buscar) {
            printf("Producto encontrado:\n");
            printf("Código: %i, Nombre: %s, Cantidad: %i, Precio: %.2f\n",
                   productos[i].codigo, productos[i].nombre, productos[i].cantidad, productos[i].precio);
            return;
        }
    }
    printf("Producto no encontrado.\n");
}