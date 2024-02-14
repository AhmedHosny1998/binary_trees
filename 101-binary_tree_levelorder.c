#include "binary_trees.h"

/**
 * _binary_tree_height - helper func for binary_tree_height
 * @tree: input tree
 * Return: height of tree
 */


size_t _binary_tree_height(const binary_tree_t *tree){
    size_t left , right;
    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);
    return (MAX(left+right) + 1);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: input tree
 * Return: height of tree
 */
size_t _binary_tree_height(const binary_tree_t *tree){
    if(!tree){
        return(0);
    }
    return (binary_tree_height(tree) - 1);
}
/**
 * print_level - prints a given tree level recursively
 * @tree: pointer to root of tree
 * @func: function to be called on each node
 * @level: the tree depth level to print
 */
void print_level(const binary_tree_t *tree, void (*func)(int), size_t level){
    if(!level){
        func(tree->n);
    }
    else{
        print_level(tree->left,func,level - 1);
        print_level(tree->right,func,level - 1);
    }
}

/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * traversal
 * @tree: pointer to root of tree
 * @func: function to be called on each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int)){
    size_t high,i;
    if(!tree || !func){
        return; 
    }
    high = binary_tree_height(tree);
    for (i = 0; i <= high; i++){
        print_level(tree,func,i);
    }

}