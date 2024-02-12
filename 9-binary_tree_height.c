#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to root node of the tree to measure the height
 * Return: height of the tree
 */


size_t binary_tree_height(const binary_tree_t *tree){
    size_t hightLeft=0 , hightRight = 0;
    if (tree == NULL){
        return (0);
    }
    if (tree->left){
        hightLeft = 1 + binary_tree_height(tree->left);
    }
    if (tree->right){
        hightRight = 1 + binary_tree_height(tree->right);
    }

    if (hightLeft > hightRight){
        return (hightLeft);
    }
    else{
        return (hightRight);
}

}
