/* Quelques operations qui illustrent la priorite des operateurs */

#include <stdio.h>

int main(void)
{
    int n = 5, m = 8;

    printf("n = %d et m = %d\n", n, m);
    printf("Calcul de quelques operations prioritaires\n");
    // m > n est evalué: vrai(1) ou faux(0)
    printf("m > n: %d\n", m > n);
    printf("m < n: %d\n", m < n);
    // > a moins de priorite que +
    printf("m %% n + m > n: %d\n", m % n + m > n);
    // ++ est equivalent a n = n + 1
    printf("++n: %d\n", ++n);
    printf("n++: %d\n", n++);
    // (m > n ? n : m) est une expression conditionnelle qui renvoie n si m > n est vrai, sinon m
    printf("n * (m > n ? n : m): %d\n", n * (m > n ? n : m));
    // Division entiere, resultat entier
    printf("m / n : %d\n", m / n);
    // Division flottante
    printf("m / n : %f\n", (float)m / n);

    return 0;
}
