#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to root node of tree to count the leaves
 * Return: number of leaves in tree
 */


size_t binary_tree_leaves(const binary_tree_t *tree){
    size_t leavesLeft = 0, leavesRight = 0;
    if (tree == NULL){
        return (0);
    }

    if (tree->left){
        leavesLeft = binary_tree_leaves(tree->left);
    }
    if (tree->right)
    {
        leavesRight = binary_tree_leaves(tree->right);
    }
    if (tree->left == NULL && tree->right == NULL)
    {
        return (1);
    }
    return (leavesLeft + leavesRight);

}