#include <iostream>
#include "include/alx_math.h"
using namespace std;

int main() {
    // 6 / 2 * (1 + 2)
    alx_ast tree;
    tree.type = '*';
    tree.left = new alx_ast;
    tree.left->type = 'n';
    tree.left->val = 3;
    tree.left->left = nullptr;
    tree.left->right = nullptr;
    tree.right = new alx_ast;
    tree.right->type = 'n';
    tree.right->val = 3;
    tree.right->left = nullptr;
    tree.right->right = nullptr;

    alx_ast_show_inorder(&tree);
    cout << endl;

    return 0;
}