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
void print_stack (struct stack * s1, char * s2, char * s3);
void print_stack_latest (struct stack * s1, char * s2, char * s3);






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




void print_stack (struct stack * s1, char * s2, char * s3) {
    int i = 0;

    printf ("\n%s\n", s2);

    if (s1 -> lastin == -1) {
        printf ("\n%s\n", s3);
    }


    else {
        while (i <= s1->lastin) {
            printf("%s\n", (char *) (s1 -> a[i]));
            i++;
        }
    }
}


void print_stack_latest (struct stack * s1, char * s2, char * s3) {

    if (s1 -> lastin == -1) {
        printf ("\n%s\n", s3);
    }

    else {
        printf("\n%s%s\n", s2, (char *) (s1 -> a[s1->lastin]));
    }
}


void delete_stack (struct stack * dates) {
    dates -> lastin --;
}

