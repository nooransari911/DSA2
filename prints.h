//
// Created by ansarimn on 12/11/23.
//

#ifndef TREES_AND_GRAPHS_ELLE1_H
#define TREES_AND_GRAPHS_ELLE1_H

#endif //TREES_AND_GRAPHS_ELLE1_H


#include "stack_elle.h"

#define DATE 0
#define ID 1
#define BILL 2
#define NAME 3
#define SIGN 4




int sign = 0;




void print_time (struct timespec * initial, struct timespec * final, int op) {
    double diff;

    diff = (final -> tv_sec - initial -> tv_sec) + ((final -> tv_nsec - initial -> tv_nsec)
                                                    / 1000.0);


    if (op == 0) {
        printf ("\n\nPROCESS TIME IS: %lf us\n\n", diff);
    }

    else if (op == 1) {
        printf ("\n\nWALL TIME IS: %lf us\n\n", diff);
    }
}




void inputone (struct elle * one) {

    /*
     * Takes input from user
     */

    //char name[10];
    int * bill, * id, * sign2;
    char * name;

    name = (char *) (one -> fields -> a [NAME]);
    bill = (int *) (one -> fields -> a [BILL]);
    id = (int *) (one -> fields -> a [ID]);
    sign2 = (int *) (one -> fields -> a [SIGN]);


    printf ("\nPatient name: ");
    scanf (" %9[^\n]", name);
    printf ("Bill: ");
    scanf (" %d", bill);


    // converts name string into int;
    * id = convert (name);
    * sign2 = sign;
    sign ++ ;
}




void printone (struct elle* one) {
    printf ("\n");

    int * bill, * id, * sign2;
    char * name;

    sign2 = (int *) (one -> fields -> a [SIGN]);
    id = (int *) (one -> fields -> a [ID]);
    name = (char *) (one -> fields -> a [NAME]);
    bill = (int *) (one -> fields -> a [BILL]);

    if (one != NULL) {
        printf("Hospital name: I2IT");
        printf("\nWard no.: %d", * sign2);
        printf("\nRecord id: %d", * id);
        printf("\nPatient name: %s", name);
        printf("\nBill: %d", * bill);
        print_stack (one -> dates, OUTPUT_DATA_SUCCESS, OUTPUT_DATA_FAILURE);
    }

    else {
        printf ("Record not exist;");
    }

    printf ("\n");
}