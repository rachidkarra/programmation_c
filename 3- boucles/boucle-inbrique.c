/* Exemple de boucle imbriquée en C
  Ce programme affiche les valeurs de i et j dans une boucle imbriquée. */

#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;
    for (i = 1; i < 4; i = i++)
    {
        for (j = 1; i < 4; j = j++)
        {
            printf("La valeur de i est %d, la valeur de j est %d \n", i, j);
        }
    }
    return 0;
}

/* Corrections à apporter :
   1- L'incrémentation "i = i++" et "j = j++" n'incrémente pas correctement les variables.
      L'instruction `i = i++;` a un comportement indéfini (undefined behavior) en C.
      Vous modifiez `i` deux fois dans la même expression sans point d'arrêt, ce qui
      permet au compilateur de faire n'importe quoi : laisser `i` inchangé, l'incrémenter, ou pire...
      Il faut utiliser "i++" et "j++" seuls pour incrémenter correctement.

  2-  La condition devrait être "i < 4" au lieu de "j < 4", ça donne une boucle infinie
      pour j car i ne change pas dans la boucle interne.
  */