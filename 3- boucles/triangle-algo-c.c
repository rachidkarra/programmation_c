// Ce programme imprime le motif triangulaire suivant 
// Output:
// 1
// 12
// 123
// 1234
// 12345
#include <stdio.h>

int main(void)
{
    int i, j, n;
    n = 5;
    printf("\n");
    for (i = 1; i <= n; i = i + 1) // Essayez i = i + 2 pour voir ce qui se passe
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
// Remarque : pour un triangle inversé, essayez
// for (j = 1; j <= n - i + 1; j++)