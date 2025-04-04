#include <stdio.h>

int main() {
    char opcion[1];
    char ingrediente[2];


    printf("Quieres una pizza vegetariana? (si/no): ");
    scanf("%s", opcion);

    if ((opcion, "si") == 0 || (opcion, "sí") == 0) {
        printf("ingredientes  vegetarianos: Pimiento, Tofu\n");
    } else {
        printf("Opciones no vegetarianas: Peperoni, Jamon, Salmon\n");
    }printf("Elige un ingrediente:");
    scanf("%s", ingrediente);

    printf("\nTu pizza es %s y lleva Mozzarella, Tomate y %s.\n",
           ((opcion, "si") ==(opcion, "sí") )?"vegetariana":"no vegetariana",
           ingrediente);

    return 0;
}

