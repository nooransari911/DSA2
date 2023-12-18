//
// Created by ansarimn on 12/12/23.
//

#ifndef TREES_AND_GRAPHS_BST0_H
#define TREES_AND_GRAPHS_BST0_H

#endif //TREES_AND_GRAPHS_BST0_H

#include "header0.h"







struct elle * searchinBST (struct tree* tree, int key) {
    /* WARNING !!!!
     * Make sure ptrnew, tr is not NULL;
     */
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
    printf ("\n%s\n", DOES_NOT_EXIST);
    return NULL;
}


struct elle * searchinputBST (struct tree * tr) {
    struct elle* te0;
    int i = 0;
    char * s1;

    s1 = input_string ("Enter name:");
    i = convert (s1);
    te0 = searchinBST (tr, i);


    return te0;
}




void insertinBSTin (struct tree * tr, struct elle * ptrnew) {
    /* WARNING !!!!
     * Make sure ptrnew, tr is not NULL;
     */


    int * int1, * key;
    struct elle * root, * te0;


    root = tr -> root;
    te0 = root;

    //ptrnew = init_elle (sign);
    //pseudoinput (ptrnew, s1);
    //inputone (ptrnew);
    //ptrnew = inputelle ();
    key = (int *) (ptrnew -> fields -> a [BST_KEY]);



    while (root != NULL) {
        int1 = (int *) (root -> fields -> a [BST_KEY]);

        te0 = root;

        if (* key == * int1) {
            printf("Cannot insert %d, already in BST;", * key);
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
        update_BF_insert (te0, 0);
    }

    else {
        te0 -> link [1] = ptrnew;
        ptrnew -> link [2] = te0;
        update_BF_insert (te0, 1);
    }
}




void insertinBST (struct tree * tree, int s1) {
    /* Inserts a value into BST;
     *
     */


    int * int1, * key;
    struct elle * root, * te0;
    struct elle * ptrnew;


    ptrnew = init_elle (SIGN);
    pseudoinput (ptrnew, s1);

    if (tree -> root == NULL) {
        //inputone (ptrnew);
        tree -> root = ptrnew;
        return;
    }

    else {

    }


    insertinBSTin (tree, ptrnew);

}


void deleteinBSTinternal (struct stack_elle * in, int i) {

    int j = 0;
    struct elle * parent, * current, * prev;

    current = in -> arr [i];

    if (i == 0) {
        printf ("smallest element;");
    }
    else {
        prev = in -> arr[i - 1];
    }


    if (current -> link [0] == NULL
        &&
        current -> link [1] == NULL) {
        //to be deleted is leaf;
        //simply kill this elle;
        parent = current -> link [2];
        j = whichchild (parent, current);
        kill(parent, j);
    }


    else if (current -> link [0] != NULL
             &&
             current -> link [1] != NULL) {
        //to be deleted has two child;
        //replace BST_KEY in to be deleted
        //with inorder predecessor;
        //inorder predecessor is now to be deleted;
        //it is guaranteed to be leaf and can be simply killed;
        current -> fields -> a [BST_KEY] = prev -> fields -> a [BST_KEY];
        current = prev;
        parent = current -> link [2];
        j = whichchild (parent, current);
        kill(parent, j);
    }

    else if (current -> link [0] != NULL) {
        parent = current -> link [2];
        j = whichchild (parent, current);
        parent -> link [j] = current -> link [0];
    }

    else if (current -> link [1] != NULL){
        parent = current -> link [2];
        j = whichchild (parent, current);
        parent -> link [j] = current -> link [1];
    }


    update_BF_delete (parent, j);
}




void deleteinBST (struct tree * tree, int key) {
    struct stack_elle * in;
    struct elle* root = tree -> root;
    int i;

    in = init_stack_elle();


    if (root == NULL) {
        stderror ("Tree does not exist;");
        return;
    }

    if (key == * ((int *) (root -> fields -> a [BST_KEY]))) {
        if (root->link[0] == NULL
            &&
            root->link[1] == NULL) {
            //Both child of root are NULL;
            root = NULL;
            tree -> root = NULL;
            //free (root);
        }

        else if (root->link[0] == NULL
                   &&
                   root->link[1] != NULL) {
            //[1] right child of root is not NULL;
            tree->root = tree->root->link[1];
            kill (root->link[1], 2);
            //kill (root, 1);
            //free (root);
        }

        else if (root->link[0] != NULL
                 &&
                 root->link[1] == NULL) {
            //[0] left child of root is not NULL;
            tree->root = tree->root->link[0];
            kill (root->link[0], 2);
            //kill (root, 0);
            //free (root);
        }

        else {
            //both child of root are not NULL;
            DFS_in (tree -> root, in);

            i = searchinlinear (in, key);
            printf ("\n\nElement found at: %d\n", i);

            deleteinBSTinternal(in, i);
        }
    }

    else {
        //To be deleted is not root;
        DFS_in (tree -> root, in);

        i = searchinlinear (in, key);
        printf ("\n\nElement found at: %d\n", i);

        deleteinBSTinternal(in, i);
    }
}
