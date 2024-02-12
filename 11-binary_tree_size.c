#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to root node of tree to measure size
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree){
    size_t sizeLeft = 0, sizeRight= 0;
    if(tree == NULL){
        return (0);
    }
    if(tree->left){
        sizeLeft = binary_tree_size(tree->left);
    }
    if(tree->right){
        sizeRight = binary_tree_size(tree->right);
    }
    return (sizeLeft + sizeRight +1);
}
