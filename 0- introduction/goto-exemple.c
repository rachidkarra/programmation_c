/* Exemple de la mauvaise utilisation de goto
 en effet, le label sortie est utilisé:
  : pour sortir prématurément de la boucle, ce qui rend le code difficile à comprendre et à maintenir.
   Mais aussi rendre la boucle infinie a cause de i = 0 */
#include <stdio.h>

int main(void)
{

    int i;
sortie:
    // i = 0;
    printf("\n Non, deja??");
    for (i = 0; i < 10; i = i + 1)
    {
        if (i == 3)
            goto sortie;
        printf(" %d-fois ", i);
    }

    return 0;
}
