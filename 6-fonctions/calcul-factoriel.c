/*
** Calcul du factorielle d'un entier n en utilisant une fonction.
   rappel : n! = n * (n-1) * (n-2) * ... * 1
*/
#include <stdio.h>

int calcul_factorielle(unsigned int n)
{
	int i = 1, result = 1;
	if (n < 0)
	{
		return -1; // Factorielle non définie pour les entiers négatifs
	}
	if (n == 0)
	{
		return 1; // 0! est défini comme 1
	}
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int main(void)
{
	printf("\nVeuillez entrer un entier: ");
	unsigned int n = 0;
	scanf("%u", &n);
	printf("Le factorielle de %u est : %d\n", n, calcul_factorielle(n));

	return 0;
}

/* Si n est négatif et qu'on l'affecte à une variable de type entier non signé,
le compilateur convertit cette valeur négative en une grande valeur positive selon la règle suivante :
  Résultat = (Valeur négative) + (VALEUR_MAX + 1).
Exemple : Si un entier non signé est codé sur 32 bits, sa valeur maximale (UINT_MAX) est 4 294 967 295.
L'affectation de -1 donne : -1 + (4 294 967 295 + 1) = 4 294 967 295.
L'affectation de -5 donne : -5 + 4 294 967 296 = 4 294 967 291.
*/