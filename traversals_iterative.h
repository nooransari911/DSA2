//
// Created by ansarimn on 12/12/23.
//

#ifndef TREES_AND_GRAPHS_TRAVERSALS_ITERATIVE_H
#define TREES_AND_GRAPHS_TRAVERSALS_ITERATIVE_H

#endif //TREES_AND_GRAPHS_TRAVERSALS_ITERATIVE_H


#include "traversals_recursive.h"



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
            insert_in_stack_elle (qu, te0 -> link [2]);
        }

        flag0 = 0;
    }

    reset_tree(in);

}




struct elle * inorderpredecessor (struct tree * tree, struct elle * what) {
    // returns the predecessor in
    // DFS inorder traversal
    // of given elle;
    // returns NULL if this does not exist;


    struct stack_elle * qu, * in;
    int i = 0;

    qu = init_stack_elle();
    in = init_stack_elle();

    DFS_in (tree -> root, in);

    if (in -> arr [i] == what) {
        return NULL;
    }


    while (in -> arr [i + 1] != what) {
        i ++;
    }

    return (in -> arr [i]);
}
