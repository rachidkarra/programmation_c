/* differences-ptr.c
   Différentes opérations sur les pointeurs */
#include <stdio.h>

int main(void)
{
    int i = 6;
    printf("\nLa valeur de i est %d ; La valeur de l'adresse de i est %lu  \n", i, &i);
    int *ptr0 = &i, *ptr1 = &i, *ptr2 = &i, *ptr3 = &i, *ptr4 = &i;

    // operation:0
    printf("La valeur du pointeur est %lu, et La valeur de l'adresse du pointeur est %lu \n", ptr0, &ptr0);
    ptr0++;
    printf("Op0: La valeur du pointeur est %lu, et La valeur de l'adresse du pointeur est %lu \n", ptr0, &ptr0);

    // operation:1
    (*ptr1)++; // le contenu de l'adresse sur laquelle pointe ptr est incrementé
    printf("Op1: La valeur de i est : %d, la valeur du ptr est : %lu \n", i, ptr1);

    // operation:2
    *(ptr2++); // c'est la valeur de l'adresse qui est incrémentée
    printf("Op2: La valeur de i est : %d, la valeur du ptr est : %lu \n", i, ptr2);

    // operation:3
    *ptr3++; // l'opération de postfix ++ est prioritaire que * de derefernce
             //  Ainsi ptr3 est incrémentée et non pas la valeur pointée
    printf("Op3: La valeur de i est : %d, la valeur du ptr est : %lu \n", i, ptr3);

    // operation: 4
    ++*ptr4; //  Equivalent a ++(*ptr)
             //  L'opération ++ suffix est prioritaire que * de derefernce, mais le suffix est de type association droite vers gauche
    printf("Op4: La valeur de i est : %d, la valeur du ptr est : %lu \n", i, ptr4);

    return 0;
}