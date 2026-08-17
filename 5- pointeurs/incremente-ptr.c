/* La différence entre deux pointeurs se fait
    en nombre d'éléments (et non en octets) */
#include <stdio.h>

int main(void)
{
    double i = 3;
    double *p1, *p2 = NULL;
    p1 = &i;
    printf("\nLa valeur de l'adresse du pointeur 1 est %lu, et La valeur du pointeur 1 est %lu \n", &p1, p1);

    p2 = p1 + 1; // Incrémente le pointeur de la taille d'un double (généralement 8 octets)
    printf("La valeur de l'adresse du pointeur 2 est %lu, et La valeur du pointeur 2 est %lu \n", &p2, p2);

    // La différence entre deux pointeurs: nombre d'éléments entre eux
    printf("La différence entre deux pointeurs est %d", p2 - p1);

    return 0;
}