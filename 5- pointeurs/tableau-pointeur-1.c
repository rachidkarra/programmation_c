/* Accès aux éléments d'un tableau via un pointeur  */
#include <stdio.h>

int main(void)
{
    int temperatures[] = {19, 37, 20, 32, 8};
    // Accès via l'indice du tableau
    printf("\nLa troisième température est de %d degrés Celsius.\n", temperatures[2]);
    // Accès via un pointeur
    int *ptr = &temperatures[0];
    ptr += 2;
    printf("La troisième température est de %d degrés Celsius.\n", *ptr);
    // Accès via la décomposition du tableau en pointeur
    printf("La troisième température est de %d degrés Celsius.\n", *(temperatures + 2));

    return 0;
}
