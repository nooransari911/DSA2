//
// Created by ansarimn on 12/11/23.
//

#ifndef DSA2_PRIMITIVES_H
#define DSA2_PRIMITIVES_H

#endif //DSA2_PRIMITIVES_H




#include "header0.h"











long mod (long a)  {
    if (a < 0) {
        return (- a);
    }

    else {
        return a;
    }
}


long get_memory_usage (long baseline) {
    struct rusage current;

    getrusage (RUSAGE_SELF, &current);

    return (mod (baseline - current.ru_maxrss));
}


int convert (char* str) {
    int i, id;
    i = 0;
    id = 0;

    while (str[i] != '\0') {
        id = id + str [i];
        i++;
    }

    return id;
}


char * input_string (char * s1) {
    char * buffer = (char *) malloc (20);
    memset (buffer, 0, ELEMENT_SIZE_BASIC);

    printf ("\n%s\n", s1);
    scanf (" %19[^\n]", buffer);

    return buffer;
}


int * input_int (char * s1) {
    int * buffer = (int *) malloc (4);
    memset (buffer, 0, 4);

    printf ("\n%s\n", s1);
    scanf (" %19[^\n]", buffer);

    return buffer;
}




void stderror (char * s1) {
    printf ("\nError;\n");
    printf ("%s\n\n", s1);
}