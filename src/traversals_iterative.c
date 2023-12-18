//
// Created by ansarimn on 12/12/23.
//

#ifndef TREES_AND_GRAPHS_TRAVERSALS_ITERATIVE_H
#define TREES_AND_GRAPHS_TRAVERSALS_ITERATIVE_H

#endif //TREES_AND_GRAPHS_TRAVERSALS_ITERATIVE_H


#include "header0.h"



void BFS_iterative (struct tree* tree, struct  stack_elle * qu, struct  stack_elle * in) {

    struct elle* te0;
    int i;

    te0 = tree -> root;
    insert_master (qu, in, te0);

    while (qu -> size != 0) {
        te0 = access_queue_elle (qu);

        for (i = 0; i < 2; i ++) {
            if (te0 -> link [i] != NULL) {
                insert_master (qu, in, te0 -> link [i]);
            }
        }
    }

    reset_tree (in);

}





void DFS_pre_iterative (struct tree* tree, struct stack_elle * qu, struct stack_elle* in) {
    struct elle* te0;
    int i, flag0;
    flag0 = 0;

    te0 = tree -> root;

    insert_master (qu, in, te0);


    while (qu -> size != 0) {
        te0 = access_stack_elle (qu);

        for (i = 0; i < 2; i ++) {
            if (te0 -> link [i] != NULL && te0 -> link [i] -> mark == 0) {
                insert_master (qu, in, te0 -> link [i]);
                flag0 = 1;
                break;
            }
        }

        if (flag0 == 0) {
            if (te0 -> link [2] != NULL) {
                insert_in_stack_elle (qu, te0 -> link [2]);
            }
        }

        flag0 = 0;
    }

    reset_tree(in);

}




struct elle * inorderpredecessor (struct stack_elle * in, struct elle * what) {
    // returns the predecessor in
    // DFS inorder traversal
    // of given elle;
    // returns NULL if this does not exist;


    int i = 0;


    if (in -> arr [i] == what) {
        stderror ("Inorder predecessor is minimum in BST;");
        return NULL;
    }


    while (in -> arr [i + 1] != what) {
        i ++;
    }

    return (in -> arr [i]);
}




void Traversal_any (struct tree * tree, struct stack_elle * qu, struct stack_elle * in, int a) {
    // For easily accessing all traversal implementations;
    // 0. BFS
    // 1. DFS preorder, iterative
    // 2. DFS preorder, recursive
    // 3. DFS postorder, recursive
    // 4. DFS inorder, recursive


    qu = init_stack_elle ();
    in = init_stack_elle ();

    switch (a) {
        case 0:
            BFS_iterative (tree, qu, in);
            printf ("\n\nThe BFS iterative traversal is:");
            break;

        case 1:
            DFS_pre_iterative (tree, qu, in);
            printf ("\n\nThe DFS preorder iterative traversal is:");
            break;

        case 2:
            DFS_pre (tree -> root, in);
            printf ("\n\nThe DFS preorder recursive traversal is:");
            break;

        case 3:
            DFS_post (tree -> root, in);
            printf ("\n\nThe DFS postorder recursive traversal is:");
            break;

        case 4:
            DFS_in (tree -> root, in);
            printf ("\n\nThe DFS inorder recursive traversal is:");
            break;
    }

    printall (in);
}

void kill_tree (struct tree * tr) {
    struct stack_elle * in, * qu;
    in = init_stack_elle ();
    qu = init_stack_elle ();

    DFS_pre_iterative (tr, qu, in);


    int i = 0;

    while (i < in -> lastin) {
        free (in -> arr [i]);
        i ++;
    }
}
