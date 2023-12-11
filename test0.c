//
// Created by ansarimn on 11/25/23.
//


#include "stack_queue_ADT.h"


int main () {
    /*
    long baseline = get_memory_usage (0);
    printf ("\nBase memory usage: %ld\n", baseline);

    baseline = get_memory_usage (baseline);
    printf ("\nBase memory usage: %ld\n", baseline);
    */




    struct stack_ADT * s1;
    s1 = init_stack ();


    //void * user_input = (void *) input_string (INPUT_DATA);
    void * user_input = "hellhell hellhellasdfasdf";
    //insert_in_stack(s1, user_input);
    insert_in_stack (s1, user_input);
    insert_in_stack (s1, user_input);
    insert_in_stack (s1, user_input);
    insert_in_stack (s1, user_input);


    print_stack (s1, OUTPUT_DATA_SUCCESS, OUTPUT_DATA_FAILURE);


}
