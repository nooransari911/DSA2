//
// Created by ansarimn on 12/4/23.
//

#ifndef TREES_AND_GRAPHS_DBMS_DATES_H
#define TREES_AND_GRAPHS_DBMS_DATES_H

#endif //TREES_AND_GRAPHS_DBMS_DATES_H
#include "primitives.h"



typedef struct stack {
    void * a [STACK_SIZE];
    int firstin;
    int lastin;
} stack;




stack * init_stack ();
void insert_in_stack (struct stack * s1, void * s);
void * access_stack (struct stack * s1);
void * access_queue (struct stack * s1);





stack * init_stack () {
    struct stack * te0;
    int i = 0;

    te0 = (stack *) malloc (sizeof (struct stack));
    while (i < STACK_SIZE) {
        te0 -> a[i] = malloc (ELEMENT_SIZE_BASIC);
        memset (te0 -> a [i], 0, ELEMENT_SIZE_BASIC);
        i++;
    }
    te0 -> lastin = -1;
    te0 -> firstin = 0;

    return te0;
}


void insert_in_stack (struct stack * s1, void * s) {
    int te;

    s1 -> lastin ++;

    void * s2 = (s1 -> a [(s1 -> lastin)]);
    memcpy (s2, s, (ELEMENT_SIZE_BASIC - 1));

}


void * access_stack (struct stack * s1) {
    void * s2 = (s1 -> a [(s1 -> lastin)]);
    void * s3;

    s3 = malloc (ELEMENT_SIZE_BASIC);
    memset (s3, 0, ELEMENT_SIZE_BASIC);


    memcpy (s3, s2, ELEMENT_SIZE_BASIC);
    memset (s2, 0, ELEMENT_SIZE_BASIC);
    s1 -> lastin --;
    return s3;
}


void * access_queue (struct stack * s1) {
    void * s2 = (s1 -> a [(s1 -> firstin)]);
    void * s3;

    s3 = malloc (ELEMENT_SIZE_BASIC);
    memset (s3, 0, ELEMENT_SIZE_BASIC);


    memcpy (s3, s2, ELEMENT_SIZE_BASIC);
    memset (s2, 0, ELEMENT_SIZE_BASIC);
    s1 -> firstin ++;
    return s3;
}




/*
void print_stack (struct stack * dates) {
    int i = 0;

    printf ("\nAppointment dates are: \n");

    if (dates -> lastin == -1) {
        printf ("No dates have been added");
    }


    else {
        while (i <= dates->lastin) {
            printf("%s\n", &(dates->a[i][10]));
            i++;
        }
    }
}


void print_stack_latest (struct stack * dates) {
    if (dates -> lastin == -1) {
        printf ("No dates have been added");

    }

    else {
        printf("\nLatest date is: %s\n", &(dates->a[dates->lastin][10]));
    }
}


void delete_stack (struct stack * dates) {
    dates -> lastin --;
}

*/