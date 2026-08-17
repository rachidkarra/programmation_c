// Le OU fort et faible
// || signifie "OU" faible, seulement la premiere condition est evaluee
// | signifie "OU" fort , meme si la premiere condition est vraie, la deuxieme condition est toujours evaluee

#include <stdio.h>

////
int main()
{
    int n = 3, p = 6;

    if (n == 3 || p++ != 7)
    {
        printf("n est egal a %d; p est egal a %d \n", n, p);
    }
    return 0;
}
