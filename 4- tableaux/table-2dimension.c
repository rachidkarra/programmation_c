/* Initialisation d'un tableau en 2 dimensions */

#include <stdio.h>

int main(void)
{
    int temperatures[3][4] = {{19, 37, 20, 32}, {1, 37, 25, 45}, {7, 19, 25, 40}};

    printf("\nLa valeur de temperatures[1][3] %d \n", temperatures[1][3]); // output : 45
    // Il passe a l'élément suivant du tableau ,il déborde sur la ligne suivante
    printf("La valeur de temperatures[1][4] %d \n ", temperatures[1][4]); // output : 7
    // undefined behavior, puisqu'on accède à un élément hors des limites du tableau
    printf("La valeur de temperatures[3][0] %d \n", temperatures[3][0]); // output : ???? undefined behavior

    return 0;
}