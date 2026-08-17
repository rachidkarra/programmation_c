// Exemple d'utilisation de getchar(), gestion du retour chariot dans l'entrée standard
#include <stdio.h>

int main()
{
    char fruits, legumes;
    puts("Est que vous mangez 5 fruits ? y/n");
    fruits = getchar();
    getchar();
    puts("Est que vous mangez 5 legumes ? y/n");
    legumes = getchar();

    if (fruits == 'y' && legumes == 'y')
    {
        printf("Felicitation vous prenez soins de votre sante !!");
    }
    else
    {
        printf("Dommage, faites plus attention a vous !!");
    }

    return 0;
}

/* Le problème c'est le retour chariot ("entrer ↵" considéré comme entrée pour deuxième getchar())
 de la première réponse il est bouffé par le deuxième getchar.
 Solution à la ligne 12: getchar();    Pour ne pas prendre en compte le retour à la ligne */
