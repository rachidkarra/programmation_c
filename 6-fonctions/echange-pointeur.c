/* Échange de deux entiers en utilisant des pointeurs
   Les pointeurs permettent de modifier les variables originales */
#include <stdio.h>

void echange(int *a, int *b)
{
	int t = 0;
	t = *a;
	*a = *b;
	*b = t;
	printf("Dans la fonction echange a' = %d; b' = %d\n", *a, *b);
}

int main(void)
{
	int a = 14, b = 5;
	printf("\nAvant la fonction d'échange a = %d; b = %d\n", a, b);
	echange(&a, &b); // On passe les adresses de a et b
	printf("Après la fonction d'échange a = %d; b = %d\n", a, b);

	return 0;
}

/* Explication :
   - La fonction echange prend deux pointeurs en paramètres.
   - Elle utilise l'opérateur de déréférencement (*) pour accéder aux valeurs pointées.
   - Dans main, on passe les adresses des variables a et b à la fonction echange en utilisant l'opérateur &.
   - Même si les paramètres x et y sont des copies des adresses de a et b,
	 ils pointent vers les mêmes emplacements mémoire. (x et a partagent la même adresse, de même pour y et b)
   - Ainsi, les modifications effectuées dans echange affectent directement les variables a et b dans main.

*/