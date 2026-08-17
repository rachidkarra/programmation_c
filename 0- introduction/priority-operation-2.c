/* la difference entre ++n et n++ */

#include <stdio.h>

int main(void)
{
    int n = 5, m = 8;
    int q1 = 0, q2 = 0;
    printf("\n n = %d et m = %d\n", n, m);
    // Le premier cas: ici, l'operateur de post-incrementation (n++) a une priorite plus elevee que
    // l'operateur de comparaison (> et !=), donc n est utilise avant d'etre incremente.
    q1 = n++ > m || m++ != 9;
    printf("Le premier cas est : n = %d , m = %d et q = %d \n ", n, m, q1);

    // Le deuxieme cas, c'est vrai que suffixe-incrementation (++n) est prioritaire que == et !=,
    // mais en suffixe l'evaluation se fait apres l'utilisation de la valeur
    n = 5, m = 8;
    q2 = ++n == 5 || ++m != 9;
    printf("Le deuxieme cas est : n = %d , m = %d et q = %d", n, m, q2);

    return 0;
}
