//
// Created by ansarimn on 11/25/23.
//


#include "DBMS_dates.h"


int main () {
    /*
    long baseline = get_memory_usage (0);
    printf ("\nBase memory usage: %ld\n", baseline);

    baseline = get_memory_usage (baseline);
    printf ("\nBase memory usage: %ld\n", baseline);
    */




    struct stack * te0;
    te0 = init_stack ();


    //void * user_input = (void *) input_string ("name");
    void * user_input = "hellhell hellhellasdfasdf";
    insert_in_stack(te0, user_input);


    printf ("\ninserted string : %s\n", (access_stack(te0)));


}
