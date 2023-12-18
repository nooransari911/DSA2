//
// Created by ansarimn on 12/11/23.
//

#ifndef DSA2_PRIMITIVES_H
#define DSA2_PRIMITIVES_H

#endif //DSA2_PRIMITIVES_H




#include "header0.h"


/*
 *
    struct timespec initial0, final0;
    struct timespec initial1, final1;

    timespec_get (&initial1, TIME_UTC);
    clock_gettime (CLOCK_PROCESS_CPUTIME_ID, &initial0);

    <user function goes here;>

    timespec_get(&final1, TIME_UTC);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &final0);

    print_time (&initial0, &final0, 0);
    print_time (&initial1, &final1, 1);
 */




/*
 *
No frees ::
==266322== HEAP SUMMARY:
==266322==     in use at exit: 31,880 bytes in 1,109 blocks
==266322==   total heap usage: 1,110 allocs, 1 frees, 32,904 bytes allocated
==266322==
==266322== LEAK SUMMARY:
==266322==    definitely lost: 2,716 bytes in 30 blocks
==266322==    indirectly lost: 29,164 bytes in 1,079 blocks

With frees ::
 ==268039== HEAP SUMMARY:
==268039==     in use at exit: 31,688 bytes in 1,106 blocks
==268039==   total heap usage: 1,110 allocs, 4 frees, 32,904 bytes allocated
==268039==
==268039== LEAK SUMMARY:
==268039==    definitely lost: 2,716 bytes in 30 blocks
==268039==    indirectly lost: 28,972 bytes in 1,076 blocks

 */










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


int input_int (char * s1) {
    //int * buffer = (int *) malloc (4);
    //memset (buffer, 0, 4);

    int i;
    printf ("\n%s\n", s1);
    scanf (" %d", &i);

    return i;
}




void stderror (char * s1) {
    printf ("\nError;\n");
    printf ("%s\n\n", s1);
}


char * psrand_str () {
    if (sign == 0) {
        return "asdf";
    }

    else if (sign == 1) {
        return "zxcv";
    }

    return "end";
}


int psrand_int () {
    if (sign == 0) {
        return 1111;
    }

    else if (sign == 1) {
        return 2222;
    }

    return 911;
}
