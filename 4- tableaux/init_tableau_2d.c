/* Initialisation des tableaux multi-dimensionnels */

#include <stdio.h>

int main(void)
{
	// Déclaration et initialisation avec precision des valeurs de chaque ligne
	int temperatures1[3][4] = {{19, 37}, {1, 37, 45}, {7, 19, 25}};
	// Initialisation des valeurs , les valeurs remplissent le tableau ligne par ligne
	int temperatures2[3][4] = {19, 37, 1, 37, 45, 7, 19, 25};

	printf("La valeur de temperatures1[1][2] %d \n",
		   temperatures1[1][2]); //  45
	printf("La valeur de temperatures1[1][2] %d ",
		   temperatures2[1][2]); //  19

	return 0;
}

/*
temperatures1[3][4] as a matrix:
row\col  0  1  2  3
0       19 37  0  0
1        1 37 45  0
2	     7 19 25  0

temperatures2[3][4] as a matrix:
row\col  0  1  2  3
0       19 37  1 37
1       45  7 19 25
2	    0   0  0  0

*/