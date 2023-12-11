//
// Created by ansarimn on 12/11/23.
//

#ifndef TREES_AND_GRAPHS_TEST1_H
#define TREES_AND_GRAPHS_TEST1_H

#endif //TREES_AND_GRAPHS_TEST1_H


#include "elle1.h"




void test_primitives () {
    char * s1;

    s1 = input_string ("Enter string:");

    printf ("\n%s\n", s1);
}




void test_stack_ADT () {
    struct stack_ADT * s1;
    s1 = init_stack ();
    int i = 0;


    while (i < 4) {
        void *user_input = (void *) input_string(INPUT_DATA);
        //void * user_input = "hellhell hellhellasdfasdf";
        //insert_in_stack(s1, user_input);
        insert_in_stack(s1, user_input);
        i ++;
    }
    /*
    insert_in_stack (s1, user_input);
    insert_in_stack (s1, user_input);
    insert_in_stack (s1, user_input);
     */

    i = 0;

    print_stack(s1, OUTPUT_DATA_SUCCESS, OUTPUT_DATA_FAILURE);
}




void test_elle0 () {
    struct elle * te0, * te1;
    int r = 0;

    te0 = init_elle (44);
    te1 = init_elle (88);

    printf ("\n0: %d; 1: %d;\n", te0 -> data, te1 -> data);

    //insert_as (te0, r, 128);
    make_child (te0, te1, r);
    printf ("\nparent: %d; child: %d;\n", te0 -> data, te0 -> link [r] -> data);
    printf ("\n%d\n", whichchild (te0, te0 -> link [r]));

}


void test_stack_elle () {
    struct stack_elle * s1, * s2;

    s1 = init_stack_elle ();
    s2 = init_stack_elle ();

    struct elle * te0, * te1, * te2, * te3;
    int r = 0;
    int x;

    te0 = init_elle (44);
    te1 = init_elle (88);
    te2 = init_elle (100);
    te3 = init_elle (128);


    insert_in_stack_elle (s1, te0);
    insert_in_stack_elle (s1, te1);
    insert_in_stack_elle (s1, te2);
    insert_in_stack_elle (s1, te3);


    printall (s1);



    printf ("\npos of %d: %d:\n", 128, searchinlinear (s1, 128


    ));

    x = ((struct elle *) (access_stack_elle (s1))) -> data;
    printf ("\n%d\n", x);
    x = ((struct elle *) (access_stack_elle (s1))) -> data;
    printf ("\n%d\n", x);
    x = ((struct elle *) (access_stack_elle (s1))) -> data;
    printf ("\n%d\n", x);
    x = ((struct elle *) (access_stack_elle (s1))) -> data;
    printf ("\n%d\n", x);

}