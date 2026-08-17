/* Répétition avec une fonction
La fonction message() qui affiche la phrase,
« Je dois manger 5 fruits et légumes par jour » un certain nombre de fois.
Le nombre de répétitions est passé en paramètre à la fonction. */

#include <stdio.h>

void message(int nombre_de_lignes)
{
	for (int i = 0; i < nombre_de_lignes; i++)
	{
		printf("Je dois manger 5 fruits et légumes par jour\n");
	}
}

int main(void)
{
	printf("\n");
	int nombre_de_lignes = 5;
	message(nombre_de_lignes);
	printf("Press Enter to continue...");
	getchar();

	return 0;
}