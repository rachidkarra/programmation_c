/* Exemple d'arithmétique de pointeurs avec des tableaux */
#include <stdio.h>
#define N 10

int main(void)
{
    int temperatures[] = {19, 37, 20, 32, 8};
    // Affichage des adresses en la dualité pointeur-tableau
    printf("%lu \n", temperatures);
    printf("%lu \n", &temperatures[0]);
    // Affichage des valeurs en la dualité pointeur-tableau
    printf("%lu \n", *temperatures);
    printf("%lu \n", *(temperatures + 1));

    return 0;
}