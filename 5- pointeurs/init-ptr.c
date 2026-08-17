/*
   Initialisation et utilisation de pointeurs en C
*/
#include <stdio.h>

int main(void)
{
    int i = 6;
    printf("\nLa valeur de i est %d ; La valeur de l'adresse de i est %lu  \n", i, &i);
    int *ptr;
    ptr = &i;
    printf("La valeur du pointeur est %lu, et La valeur de l'adresse du pointeur est %lu \n", ptr, &ptr);
    printf("La valeur du *ptr est % d \n", *ptr); // Puisque ptr pointe sur i, *ptr vaut la valeur de i

    // Si on modifie i, *ptr change aussi et vice versa
    i = 8;
    printf("La nouvelle valeur du *ptr est % d \n", *ptr);
    *ptr = 5;
    printf("La nouvelle valeur du i est % d", i);
    return 0;
}