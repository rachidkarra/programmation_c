// L'utilisation de la fonction `scanf` avec une entrée de caractères et la gestion des espaces.

#include <stdio.h>

int main()
{
    char c1 = ' ';
    puts("Saisissez un caractère");
    scanf("%c", &c1);
    printf("Le caractère saisie est: %c", c1);

    char c2 = ' ';
    puts("Saisissez un autre caractère");
    scanf("%c ", &c2);
    getchar();
    getchar(); // vider le buffer
    printf("Le caractère saisie est: %c", c2);
    /*Avec scanf("%c ", &c);, l'espace après %c dans le format indique à scanf de consommer tous les espaces blancs suivants jusqu'à rencontrer un caractère non-blanc.
    Comportement :
        %c lit un caractère (même un espace)
        L'espace dans le format force scanf à lire et ignorer tous les espaces/tabs/retours à la ligne qui suivent
        scanf attend jusqu'à ce qu'un caractère non-blanc soit saisi (pour savoir que les espaces blancs sont terminés)*/

    int c3 = ' ';
    puts("3- Saisissez un troisième caractère");
    c3 = getchar();
    printf("3- Le caractere saisie est: %c", c3);
    return 0;
}

/* Si vous ajouter un espace dans la ligne 9 :  scanf("%c   ", &c); le buffer va attendre la premiere non whitespace
 avant de sortir.
  c11 standards
  scanf will read and discard all withespace characters until a non-whitespace character is encountered
 */
