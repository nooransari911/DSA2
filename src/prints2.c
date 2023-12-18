//
// Created by ansarimn on 12/12/23.
//

#ifndef TREES_AND_GRAPHS_PRINTS2_H
#define TREES_AND_GRAPHS_PRINTS2_H

#endif //TREES_AND_GRAPHS_PRINTS2_H



#include "header0.h"


void internalprintin (struct elle * root) {
    if (root != NULL) {
        internalprintin(root->link[0]);
        //printf("%d\t", * ((int *) (root -> fields -> a [BST_KEY])));
        printone (root);
        internalprintin(root->link[1]);
    }
}


void internalprintpre (struct elle * root) {
    if (root != NULL) {
        //printf("%d\t", * ((int *) (root -> fields -> a [BST_KEY])));
        printone (root);
        internalprintpre(root->link[0]);
        internalprintpre(root->link[1]);
    }
}


void internalprintpost (struct elle * root) {
    if (root != NULL) {
        internalprintpost(root->link[0]);
        internalprintpost(root->link[1]);
        //printf("%d\t", * ((int *) (root -> fields -> a [BST_KEY])));
        printone (root);
    }
}




void printin (struct tree * tree) {
    printf ("\n\nThe inorder traversal is:\n");
    internalprintin (tree->root);
}


void printpre (struct tree * tree) {
    printf ("\n\nThe preorder traversal is:\n");
    internalprintpre(tree->root);
}


void printpost (struct tree * tree) {
    printf ("\n\nThe postorder traversal is:\n");
    internalprintpost(tree->root);
}
