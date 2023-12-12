//
// Created by ansarimn on 12/12/23.
//

#ifndef TREES_AND_GRAPHS_TRAVERSALS_RECURSIVE_H
#define TREES_AND_GRAPHS_TRAVERSALS_RECURSIVE_H

#endif //TREES_AND_GRAPHS_TRAVERSALS_RECURSIVE_H


#include "test1.h"




//remember to reset in after use;




void DFS_pre (struct elle * root, struct stack_elle * in) {
    if (root != NULL) {
        insert_in_stack_elle (in, root);
        DFS_pre(root->link[0], in);
        DFS_pre(root->link[1], in);
    }
}


void DFS_post (struct elle * root, struct stack_elle * in) {
    if (root != NULL) {
        DFS_post(root->link[0], in);
        DFS_post(root->link[1], in);
        insert_in_stack_elle (in, root);
    }
}


void DFS_in (struct elle * root, struct stack_elle * in) {
    if (root != NULL) {
        DFS_in(root->link[0], in);
        insert_in_stack_elle (in, root);
        DFS_in(root->link[1], in);
    }
}