#include "binary_trees.h"


/**
 * binary_tree_nodes - func count nodes with at least 1 child in binary tree
 * @tree: pointer to root node of tree to count the nodes
 * Return: number of nodes with at least 1 child in tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree){

    size_t n=0;
    if (tree)
    {
        n += (tree->left || tree->right) ? 1 : 0;
		n += binary_tree_nodes(tree->left);
		n += binary_tree_nodes(tree->right);
    }
    return (n);
    

}