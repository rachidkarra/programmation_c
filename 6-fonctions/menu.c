
/* exemple du choix de menu en fonction
   A la place de int on peut utiliser uint8_t
   pour economiser de la memoire si on sait que
   la variable ne prendra que des petites valeurs.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t menu()
{
	uint8_t choix = 0; // unsigned 8-bit (0-255), besoin de #include <stdint.h>
	while (choix < 1 || choix > 4)
	{
		printf("Menu :\n");
		printf("1 : Poulet de dinde aux escargots rotis a la sauce bearnaise\n");
		printf("2 : Concombres sucres a la sauce de myrtilles enrobee de chocolat\n");
		printf("3 : Escalope de kangourou saignante et sa gelee aux fraises poivree\n");
		printf("4 : La surprise du Chef (j'en salive d'avance...)\n");
		printf("Votre choix ? ");
		scanf("%ld", &choix);
	}
	return choix;
}

int main(int argc, char *argv[])
{
	switch (menu())
	{
	case 1:
		printf("Vous avez pris le poulet\n");
		break;
	case 2:
		printf("Vous avez pris les concombres\n");
		break;
	case 3:
		printf("Vous avez pris l'escalope\n");
		break;
	case 4:
		printf("Vous avez pris la surprise du Chef. Un sacre aventurier !\n");
		break;
	default:
		printf("Choix invalide\n");
		break;
	}
	printf("Press Enter to continue...");
	getchar();

	return 0;
}
