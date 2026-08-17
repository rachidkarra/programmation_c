/* Exemple d'affectation sans pointeur en C
   Le parametre est passe par valeur, donc la variable
   locale de la fonction n'affecte pas la variable du main */

#include <stdio.h>

void fonction_affectation(int x)
{
	x = 2; // le x local est modifiée, pas le x du main
	// ce x est une copie de celui du main
	printf("La valeur de x dans la methode %d  \n", x);
}

int main(void)
{
	int x = 1;
	printf("\nLa valeur de x avant la methode %d  \n", x);
	fonction_affectation(x);
	printf("La valeur de x apres la methode %d   \n", x);
	return 0;
}