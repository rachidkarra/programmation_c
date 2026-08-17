/* Triangle de Pascal: Affiche les n premières lignes du triangle de Pascal */
#include <stdio.h>

int main(void)
{
    int i, n;
    printf("\nDonnez un nombre: ");
    scanf("%d", &n);

    // Algorithm du triangle de Pascal
    for (i = 0; i < n; i++)
    {
        int coef = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1); // Calcul du coefficient binomial
        }
        printf("\n");
    }
    return 0;
}