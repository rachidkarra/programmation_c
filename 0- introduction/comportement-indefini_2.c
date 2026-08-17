/*
Ce code illustre un comportement indéfini en C.
Il tente d'utiliser une variable non initialisée « b » et effectue une division par zéro.
Ces deux actions entraînent un comportement indéfini selon la norme C17.
Remarque : L'exécution de ce code peut produire des résultats imprévisibles ou provoquer un plantage du programme.
 */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a, b;
    a = b;

    printf("La division par zero: %d", x / 0);
}
