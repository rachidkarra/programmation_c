// Exemple d'initialisation et d'utilisation d'un pointeur en C
#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a; // declarer et initialiser le pointeur

    //  La valeur de 'a'
    printf("%d\n", *p);
    printf("%d\n", *&a); // dereferencement de l'adresse de 'a'

    // L'adresse de 'a'
    printf("%u\n", &a);
    printf("%u\n", p);

    printf("%u\n", &p); // l'addresse de 'p'

    return 0;
}
