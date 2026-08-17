/* calcul de la suite de Fibonacci (fn = fn-1 + fn-2) de manière itérative
 */
#include <stdio.h>

long fibonacci_iterative(int n)
{
	int i = 0;

	long fnm2 = 0; // fibonacci de n - 2
	long fnm1 = 1; // fibonacci de n - 1

	long fn; // fibonacci de n
	if (n <= 1)
	{
		fn = n;
	}
	else
	{
		for (i = 2; i <= n; i++)
		{
			fn = fnm1 + fnm2;
			fnm2 = fnm1;
			fnm1 = fn;
		}
	}
	return fn;
}

int main(void)
{
	int n;
	printf("Enterz un nombre entier: ");
	scanf("%d", &n);
	printf("Fibonacci de %d est % ld ", n, fibonacci_iterative(n));
	return 0;
}