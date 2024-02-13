#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: pointer to root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 if it's not, or if the tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree){
    int leftHight,rightHight;
    if (tree == NULL)
    {
        return (0);
    }

    leftHight = binary_tree_height(tree->left);
    rightHight = binary_tree_height(tree->right);
    if (leftHight == rightHight){
        if(tree->left == NULL && tree->right == NULL)
        {
            return (1);
        }
        else if (tree->left && tree->right)
        {
            return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
        }
        return (0);
    }
}


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree){
    size_t leftHight , rightHight;
    if (tree == NULL)
    {
        return (0);
    }

    leftHight = binary_tree_height(tree->left);
    rightHight = binary_tree_height(tree->right);

    return ((leftHight > rightHight ? leftHight : rightHight)+1);
    
}