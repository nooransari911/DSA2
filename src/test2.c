//
// Created by ansarimn on 12/12/23.
//

#ifndef TREES_AND_GRAPHS_TEST2_H
#define TREES_AND_GRAPHS_TEST2_H

#endif //TREES_AND_GRAPHS_TEST2_H


#include "header0.h"


void test_BST0 () {
    struct tree * tr = init_tree ();

    insertinBST (tr, 0);
    insertinBST (tr, 2);
    insertinBST (tr, 1);
    insertinBST (tr, 3);

    printin (tr);
    printpost (tr);
}