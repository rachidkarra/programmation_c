/* argc: nombre d'arguments
   argv: tableau des arguments
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		exit(EXIT_FAILURE);
	}
	printf("\nLe nombre d'arguments est: %d\n", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("La liste des arguments %d : %s\n", i, argv[i]);
	}
	exit(EXIT_SUCCESS);
}
/* usage:
 compile: gcc -o exemple-main exemple-main.c
 run:  ./exemple-main.exe arg1 arg2 arg3  (./exemple - main pour linux)
 */
