/* initialisation des tableaux	*/

#include <stdio.h>
#define N 10

int main(void)
{
	printf("\n");
	int tableau1[] = {19, 37, 20, 32, 8}; // Taille déduite automatiquement
	int tableau2[5] = {};				  // Les valeurs sont initialisées a zéro
										  //	int tableau3[3] = {19, 37, 20, 32};	  // Dépassement du nombre d'éléments, les derniers sont ignorés

	// Déclaration valide de tableau, elle ne le sera pas si on déclare const int N
	int tableau4[N] = {10, 18, 30}; // Les autres valeurs sont initialisées a zéro
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("tableau 1  %2d ", tableau1[i]);
		printf("tableau 4  %2d \n", tableau4[i]);
	}

	/* Certaines opérations ont un résultat non - spécifié ou indéfini, donc pour lesquels les choix
	   peuvent varier d'un compilateur à l'autre. */
	printf("tableau 2  %d  \n", tableau2[8]);

	return 0;
}