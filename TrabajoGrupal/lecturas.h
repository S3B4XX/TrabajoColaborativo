typedef struct {
    int codigo;
    char nombre[50];
    int cantidad;
    float precio;
} Producto;

void agregar_producto(Producto productos[], int* cantidad_productos);
void mostrar_inventario(Producto productos[], int cantidad_productos);
void buscar_producto(Producto productos[], int cantidad_productos);

