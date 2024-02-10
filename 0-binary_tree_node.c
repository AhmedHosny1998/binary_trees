#include "binary_trees.h"


/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to parent node
 * @value: value to put in the new node
 *
 * Return: pointer to new node or NULL on failure
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){

    binary_tree_t *newnode;
    newnode = malloc(sizeof(binary_tree_t));
    if(newnode == NULL){
        return (NULL);
    }
    newnode->n=value;
    newnode->parent=parent;
    newnode->left=NULL;
    newnode->right=NULL;

    return (newnode);
}

int main(){

    binary_tree_t *root = NULL;
    int value = 10;

    // Create a new node with value 10 and no parent
    root = binary_tree_node(NULL, value);

    if(root != NULL) {
        printf("Node created with value: %d\n", root->n);
    } else {
        printf("Failed to create node\n");
    }



    return 0;

}