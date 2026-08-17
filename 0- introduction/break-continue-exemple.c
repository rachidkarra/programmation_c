/* Exemple d'utilisation des instructions break et continue */
#include <stdio.h>

int main(void)
{
    int i, j, n;
    n = 6;
    for (i = 1; i <= n; i = i + 1)
    {
        if (i == 3)
        {
            break; // Sortir de la boucle lorsque i égale 3
        }
        for (j = 1; j <= n; j++)
        {
            if (j == 4)
            {
                continue; // Sortir de l'itération lorsque j égale 4
            }
            printf("i = %d, j = %d \n", i, j);
        }
        printf("|_| Fin des itérations de i = %d \n", i);
    }
    return 0;
}