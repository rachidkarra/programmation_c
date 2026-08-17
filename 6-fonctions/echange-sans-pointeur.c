/* Échange de deux entiers sans utiliser de pointeurs
les valeurs des entiers dans la fonction main ne sont pas modifiées */

#include <stdio.h>

void echange_sans_pointeur(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	printf("Dans la fonction echange_sans_pointeur a' = %d; b' = %d\n", a, b);
}

int main(void)
{
	int a = 14, b = 5;
	printf("\nEchange sans pointeur de a = %d; b = %d\n", a, b);
	echange_sans_pointeur(a, b);
	printf("Après l'échange sans pointeur de a = %d; b = %d\n", a, b);
	return 0;
}

/* Explication :
 La fonction crée des copies des valeurs des arguments.
 Les modifications faites sur les copies n'affectent pas les arguments d'origine.
 On dit que les arguments sont passés par valeur */