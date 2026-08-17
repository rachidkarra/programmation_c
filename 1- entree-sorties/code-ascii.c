// code-ascii.c :
// Programme qui lit un caractere et affiche son code ASCII.

#include <stdio.h>

int main()
{
    char c;
    printf("Saisissez un caractere: ");
    scanf("%c", &c);
    printf("Le code ASCII de %c est %d \n", c, c);
    return 0;
}