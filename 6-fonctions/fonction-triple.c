/*  appel de fonction triple */
#include <stdio.h>

int triple(int nombre)
{
	return 3 * nombre;
}

int main(int argc, char *argv[])
{
	int nombre = 0;
	printf("Entrez un nombre... ");
	scanf("%d", &nombre);

	// Le résultat de la fonction est directement envoyé au printf et n'est pas stocké dans une variable
	printf("Le triple de ce nombre est %d\n", triple(nombre));

	return 0;
}