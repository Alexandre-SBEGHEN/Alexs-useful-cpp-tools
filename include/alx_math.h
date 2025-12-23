#include <iostream>
using namespace std;
#ifndef ALX_MATH_H
#define ALX_MATH_H
/**
 * @file alx_math.h
 * @brief HEADER - Fonctions et outils mathématiques
 * 
 * @author Alexandre SBEGHEN
 * @date 23/12/2025
 */

/* Struct d'un arbre binaire AST */
struct alx_ast {
    alx_ast* left;
    char type;
    int val;
    alx_ast* right;
};

/**
 * @brief Affiche le contenu d'un arbre AST en parcours infixe.
 * 
 * Effectue un parcours de manière récursive.
 * 
 * @param tree L'adresse de l'arbre à parcourir.
 */
void alx_ast_show_inorder(alx_ast* tree);

#endif