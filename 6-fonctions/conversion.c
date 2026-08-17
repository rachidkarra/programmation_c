/* conversion.c : conversion de dirhams en dollars
   Utilisation d'une fonction
*/
#include <stdio.h>
#include <stdlib.h>
double conversion(double dirhams)
{
	// checker si le montant est negatif
	if (dirhams < 0)
	{
		printf("Erreur: montant negatif\n");
		return EXIT_FAILURE;
	}
	double dollars = 0;
	dollars = 0.090009 * dirhams;

	return dollars;
}

int main(void)
{
	printf("010 DH= %.2lf $\n", conversion(10.0));
	printf("050 DH = %.2lf $ \n", conversion(50.0));
	printf("100 DH = %.1lf $ \n", conversion(100.0));
	printf("200 DH = %.1lf $ \n", conversion(200.0));

	printf("Appuyez sur n'importe quelle touche pour continuer...");
	getchar();
	return 0;
}