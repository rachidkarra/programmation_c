//  Illustration de l'instruction switch
// Le programme demande un entier a l'utilisateur et affiche un message
// en fonction de l'entier definit avec #define
// gcc -std=c17 -o switch-condition switch-condition.c
// debug and security problems?????
#define VALEUR 10

#include <stdio.h>

int main()
{
    int n = 0;
    printf("donnez un entier:");
    scanf("%d", &n);
    switch (n)
    {
    case VALEUR - 1:
        printf("Valeur inferieure \n");
        break;
    case VALEUR:
        printf("Valeur egale \n");
        break;
    case VALEUR + 1:
        printf("Valeur superieure \n");
        break;
    default:
        printf("Valeur par default \n");
        return 0;
    }
}