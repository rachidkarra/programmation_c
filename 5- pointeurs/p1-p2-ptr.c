/* Exemple d'utilisation de pointeurs en C */
#include <stdio.h>

int main(void)
{
    int i = 3, j = 6;
    int *p1, *p2;
    p1 = &i;
    p2 = &j;
    printf("\nLa valeur de l'adresse du pointeur 1 est %lu, et La valeur du pointeur 1 est %lu \n", &p1, p1);
    printf("La valeur de l'adresse du pointeur 2 est %lu, et La valeur du pointeur 2 est %lu \n", &p2, p2);
    // Affectation de la valeur pointée par p2 à la valeur pointée par p1
    *p1 = *p2;
    printf("La valeur de l'adresse du pointeur 1 est %lu, et La valeur du pointeur 1 est %lu \n", &p1, p1);
    printf("La valeur de l'adresse du pointeur 2 est %lu, et La valeur du pointeur 2 est %lu \n", &p2, p2);
    printf("La valeur de i est %d, et La valeur j est %d \n", i, j);
    // Affectation de l'adresse pointée par p2 à p1
    p1 = p2;
    printf("La valeur de l'adresse du pointeur 1 est %lu, et La valeur du pointeur 1 est %lu \n", &p1, p1);
    printf("La valeur de l'adresse du pointeur 2 est %lu, et La valeur du pointeur 2 est %lu \n", &p2, p2);

    return 0;
}