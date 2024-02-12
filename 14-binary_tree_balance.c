#include "binary_trees.h"

/**
 * binary_tree_balance - This measure the balance factor of a binary tree
 * @tree: This is a pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0, else return balance factor
 */

int binary_tree_balance(const binary_tree_t *tree){
    int bleft , bright;

    if (tree == NULL)
    {
        return (0);
    }

    bleft = binary_tree_balance(tree->left);
    bright = binary_tree_balance(tree->right);

    return (bleft - bright);
}