/**
 * @file alx_math.cpp
 * @brief Fonctions et outils mathématiques
 * 
 * @author Alexandre SBEGHEN
 * @date 23/12/2025
 * @version 0.1
 */
#include <iostream>
#include "../include/alx_math.h"
using namespace std;

/* Corps de la fonction `alx_ast_show_inorder` pour parcourir un AST de manière infixe */
void alx_ast_show_inorder(alx_ast* tree) {
    if (tree != nullptr) {
        alx_ast_show_inorder(tree->left);
        if (tree->type == 'n')
            cout << tree->val << ' ';
        else
            cout << tree->type << ' ';
        alx_ast_show_inorder(tree->right);
    }
}