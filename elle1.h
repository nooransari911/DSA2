//
// Created by ansarimn on 12/11/23.
//

#ifndef TREES_AND_GRAPHS_ELLE1_H
#define TREES_AND_GRAPHS_ELLE1_H

#endif //TREES_AND_GRAPHS_ELLE1_H


#include "elle0.h"

#define DATE 0
#define ID 1
#define PHONE 2
#define NAME 3





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




void printone (struct elle* one) {
    printf ("\n");

    if (one != NULL) {
        printf("Hospital name: I2IT");
        printf("\nWard no.: %d", (one -> fields [DATE]));
        printf("\nRecord id: %d", one -> fields [ID]);
        printf("\nPatient name: %s", one -> fields [NAME]);
        printf("\nBill: %d", one ->fields [PHONE]);
        print_stack (one -> dates, OUTPUT_DATA_SUCCESS, OUTPUT_DATA_FAILURE);
    }

    else {
        printf ("Record not exist;");
    }

    printf ("\n");
}