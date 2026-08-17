/* Ce code illustre l'utilisation des directives du préprocesseur en C.
   Il définit une macro pour la multiplication et une valeur constante à l'aide de #define.
*/
#include <stdio.h>
#define multiplication(a, b) (a * b)
#define CINQ 5

int main(void)
{
    int resultat = multiplication(3, 4);
    printf("Le resultat est %d\n", resultat);

    printf("Depuis une macro %d", multiplication(CINQ, 8));
    return 0;
}
