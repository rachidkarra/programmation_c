// lecture.c : Exemple de lecture formatée avec scanf

#include <stdio.h>

int main()
{
    int n1 = 0, p1 = 0;

    /* N'importe quel séparateur "espace blanc" fonctionne : espace, tabulation ou retour à la ligne (Enter).
       Ils sont équivalents pour scanf  */

    printf("Entrez deux entiers, espacés avec un espace : ");
    scanf("%d %d", &n1, &p1);
    printf("Premier: %d ---- %d \n", n1, p1);

    int n2 = 0, p2 = 0;
    printf("A nouveau, Entrez deux entiers, espacés : ");
    scanf("%4d %2d", &n2, &p2);
    printf("Deuxieme: %4d ---- %2d \n", n2, p2);

    /*  %4d lit au plus 4 chiffres pour n2, puis s'arrête (en laissant le reste pour le prochain spécificateur).
        %2d lit au plus 2 chiffres pour p2.
       input       ---> output
       1234 56     ---> 1234 56 → %4d prend 1234, %2d prend 56.
       12 34 56    ---> 12 34 56 → %4d prend 12, %2d prend 34; le dernier 56 reste dans le buffer et n’est pas lu.
       123456789@  ---> 123456789@ → %4d prend 1234, %2d prend 56; le reste (789@) reste non lu */

    return 0;
}
