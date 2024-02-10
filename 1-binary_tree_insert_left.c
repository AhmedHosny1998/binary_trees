#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: pointer to the node to insert left-child in
 * @value: value to store in new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
    binary_tree_t *newnode = NULL , *temp=NULL;
    if(!parent){
        return(NULL);
        newnode = binary_tree_node(parent,value);

    }
    if (!newnode){
        return (NULL);
    }
    if(parent->left){
        temp = parent->left;
        parent->left = newnode;
        newnode->left=temp;
        temp->parent = newnode;


    }
    else{
        parent->left=newnode;
    }
    return (newnode);
}