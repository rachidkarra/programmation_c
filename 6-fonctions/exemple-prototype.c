/* Exemple de programme utilisant un prototype de fonction
   Si on n'utilise pas de prototype, le compilateur va générer des erreurs
   puisque il ne va pas reconnaître la fonction appelée 'addition' (vient après main) */

#include <stdio.h>

//  Prototype de la fonction
int addition(int a, int b);

int main(void)
{
    // Appel de la fonction
    int result = addition(5, 3);
    printf("Résultat: %d\n", result);
    return 0;
}

//  Définition de la fonction
int addition(int a, int b)
{
    return a + b;
}