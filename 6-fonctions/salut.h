/* Exemple d'utilisation des fonctions déclarées dans le fichier d'en-tête "salut.h"
 - #ifndef pour éviter les inclusions multiples
 */
#ifndef SALUT_H_
#define SALUT_H_

/**
 * @brief Effectue une opération d'affectation (assignation) avec la valeur entière donnée.
 *
 * @param x La valeur entière à affecter ou traiter.
 */
void fonction_affectation(int x);

/**
 * @brief Effectue une addition de deux entiers et affiche le résultat.
 *
 * @param a Le premier entier.
 * @param b Le deuxième entier.
 */
void fonction_addition(int a, int b);

/**
 * @brief Effectue une multiplication de deux entiers et retourne le résultat.
 *
 * @param a Le premier entier.
 * @param b Le deuxième entier.
 * @return Le produit des deux entiers.
 */
int fonction_multiplication(int a, int b)
{
    return a * b;
}

#endif