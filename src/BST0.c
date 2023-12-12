//
// Created by ansarimn on 12/12/23.
//

#ifndef TREES_AND_GRAPHS_BST0_H
#define TREES_AND_GRAPHS_BST0_H

#endif //TREES_AND_GRAPHS_BST0_H

#include "header0.h"







struct elle * searchinBST (struct tree* tree, int key) {
    /*
     * Searches for a value in BST;
     *
     */

    struct elle* root;
    int * te0;
    root = tree -> root;


    while (root != NULL) {
        te0 = (int *) (root -> fields -> a [BST_KEY]);


        if (key == * te0){
            return root;
        }
        else if (key < * te0) {
            root = root->link[0];
        }
        else if (key > * te0){
            root = root->link[1];
        }
    }


    // Value not found, so returns NULL;
    return NULL;
}




void insertinBST (struct tree * tree, int s1) {
    /* Inserts a value into BST;
     *
     */


    int * int1, * key;
    struct elle * root, * te0;
    struct elle * ptrnew;

    if (tree -> root == NULL) {
        ptrnew = init_elle (SIGN);
        pseudoinput (ptrnew, s1);
        tree -> root = ptrnew;
        return;
    }

    else {

    }

    root = tree -> root;
    te0 = root;

    //inputone (ptrnew);
    ptrnew = init_elle (SIGN);
    pseudoinput (ptrnew, s1);
    key = (int *) (ptrnew -> fields -> a [BST_KEY]);



    while (root != NULL) {
        int1 = (int *) (root -> fields -> a [BST_KEY]);

        te0 = root;

        if (* key == * int1) {
            printf("Cannot insert %d, already in BST;", key);
            return;
        }

        else if (* key < * int1) {
            root -> BF ++;
            root = root -> link[0];
        }

        else if (* key > * int1) {
            root -> BF --;
            root = root -> link[1];

        }
    }


    int1 = (int *) (te0 -> fields -> a [BST_KEY]);

    if (* int1 > * key) {
        te0 -> link [0] = ptrnew;
        ptrnew -> link [2] = te0;
    }

    else {
        te0 -> link [1] = ptrnew;
        ptrnew -> link [2] = te0;
    }


}


