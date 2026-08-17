/* Utilisation du type _Bool en C  standard,
    _Bool est un type de données natif en C, introduit dans la norme C99.
    Il représente une valeur booléenne, où 0 est false et tout autre valeur est vrai (true).
    En C17, le type _Bool est toujours disponible sans avoir besoin d'inclure <stdbool.h>. */

#include <stdio.h>

int main(void)
{
    /*  Changer la valeur a 10 , 19 107
     C interprète tout non nul  (!= 0) comme vrai, c'est-à-dire 1 */
    _Bool x = 18;
    _Bool y = 0;
    if (x)
    {
        printf("_Bool type de données C natif \n");
    }
    if (!y) /* Equivalent à (y == 0) */
    {
        puts("_Bool  n'a pas besoin de <stdbool.h>");
    }
}