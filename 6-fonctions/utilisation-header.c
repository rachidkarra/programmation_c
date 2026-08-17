/* Exemple d'utilisation des fonctions déclarées dans le fichier d'en-tête "salut.h" */
#include <stdio.h>
#include "salut.h"

void fonction_affectation(int x)
{
    printf("Valeur reçue : %d\n", x);
}

int main()
{
    int valeur = 42;
    fonction_affectation(valeur);
    fonction_addition(10, 20);
    fonction_multiplication(5, 6);
    return 0;
}

void fonction_addition(int a, int b)
{
    int somme = a + b;
    printf("La somme de %d et %d est %d\n", a, b, somme);
}