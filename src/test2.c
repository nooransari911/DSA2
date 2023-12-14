//
// Created by ansarimn on 12/12/23.
//

#ifndef TREES_AND_GRAPHS_TEST2_H
#define TREES_AND_GRAPHS_TEST2_H

#endif //TREES_AND_GRAPHS_TEST2_H


#include "header0.h"


void test_BST0 () {
    int i = 0;
    struct tree * tr = init_tree ();

    insertinBST (tr, 3);
    insertinBST (tr, 0);
    insertinBST (tr, 1);
    insertinBST (tr, 2);

    printin (tr);
    printpost (tr);


    while (i < 4) {
        printf ("\n\nIteration: %d", i);
        printf ("\ninitial:");
        printpost (tr);

        deleteinBST (tr, i);
        printf ("\nfinal:");
        printpost (tr);
        insertinBST (tr, i);
        i ++;
    }

    //kill_tree (tr);

}
