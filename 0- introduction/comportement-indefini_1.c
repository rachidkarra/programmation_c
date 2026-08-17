/* La norme C ne définit pas ce qui se passe en cas de dépassement de capacité signé,
 le compilateur peut donc tout faire:
    - Passage à un nombre négatif (sur la plupart des systèmes)
    - Piège/plantage
    - Produire tout autre résultat arbitraire
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int x = INT_MAX;
    printf("Le max plus un: %d", x + 1);

    return 0;
}