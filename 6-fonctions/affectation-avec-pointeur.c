/* Exemple de passage d'adresse pour modifier une variable */
#include <stdio.h>

void fonction_affectation(int *x)
{
	*x = 2; /* le x local est modifiée, pas le x du main */
	printf("La valeur de x dans la methode %d  \n", *x);
}

int main(void)
{
	int x = 1;
	int *p = &x;
	printf("La valeur de x avant la methode %d  \n", x);
	fonction_affectation(&x); // c'est la meme adresse
	printf("La valeur de x apres la methode %d   \n", x);
	return 0;
}