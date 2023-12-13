//
// Created by ansarimn on 12/12/23.
//

#ifndef TREES_AND_GRAPHS_HEADER0_H
#define TREES_AND_GRAPHS_HEADER0_H

#endif //TREES_AND_GRAPHS_HEADER0_H


static int sign = 0;


// Created by ansarimn on 12/11/23.
//




#include "malloc.h"
#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/resource.h>








#define STACK_SIZE 10
#define ELEMENT_SIZE_LARGE (4 * STACK_SIZE)
#define ELEMENT_SIZE_BASIC (2 * STACK_SIZE)
#define INPUT_DATA "Enter appointment date: "
#define OUTPUT_DATA_SUCCESS "Latest appointment date is: "
#define OUTPUT_DATA_FAILURE "No dates have been added;"
#define LINKS 4
#define DATE 0
#define ID 1
#define BILL 2
#define NAME 3
#define SIGN 4
#define BST_KEY 1









/*
 *
    struct timespec initial0, final0;
    struct timespec initial1, final1;

    timespec_get (&initial1, TIME_UTC);
    clock_gettime (CLOCK_PROCESS_CPUTIME_ID, &initial0);


    timespec_get(&final1, TIME_UTC);
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &final0);

    print_time (&initial0, &final0, 0);
    print_time (&initial1, &final1, 1);
 */



typedef struct stack_ADT {
    void * a [STACK_SIZE];
    int firstin;
    int lastin;
    int size;
} stack_ADT;


typedef struct elle {
    struct stack_ADT * fields;
    struct stack_ADT * dates;
    int data, BF, mark;

    struct elle * link [LINKS];
} elle;


typedef struct tree {
    struct elle * root;
} tree;



typedef struct stack_elle {
    struct elle * arr [STACK_SIZE];
    int firstin;
    int lastin;
    int size;
} stack_elle;




//primitives
long mod (long a);
long get_memory_usage (long baseline);
int convert (char* str);
char * input_string (char * s1);
int * input_int (char * s1);
void stderror (char * s1);




//stack_ADT
stack_ADT * init_stack ();
void insert_in_stack (struct stack_ADT * s1, void * s);
void insert_in_stack_random (struct stack_ADT * s1, void * s, int i);
void * access_stack (struct stack_ADT * s1);
void * access_queue (struct stack_ADT * s1);
void * access_stack_random (struct stack_ADT * s1, int i);
void print_stack (struct stack_ADT * s1, char * s2, char * s3);
void print_stack_latest (struct stack_ADT * s1, char * s2, char * s3);
void delete_stack_lastin (struct stack_ADT * s1);





//elle0
struct elle * init_elle (int data);
struct tree * init_tree ();
void update_BF_insert (struct elle * parent, int r);
void update_BF_delete (struct elle * parent, int r);
void kill (struct elle * parent, int j);
void make_child (struct elle * parent, struct
        elle * child, int r);
void insert_as (struct elle * parent, int r,
                int a);
int whichchild (struct elle * root, struct elle
* child);
struct tree * generate_tree();




//stack_elle

struct stack_elle * init_stack_elle ();
void insert_in_stack_elle (struct stack_elle *
s1, struct elle* s);
void insert_in_stack_random_elle (struct
                                          stack_elle * s1, struct elle * s, int i);
void insert_master (struct stack_elle * qu,
                    struct stack_elle * in, struct elle * a);
void * access_stack_elle (struct stack_elle * s1);
void * access_queue_elle (struct stack_elle * s1);
void * access_stack_random_elle (struct
                                         stack_elle * s1, int i);
void printall (struct stack_elle * in);
int searchinlinear (struct stack_elle * in, int
key);
void reset_tree (struct stack_elle * in);




//prints
void print_time (struct timespec * initial, struct timespec * final, int op);
void pseudoinput (struct elle * one, int s1);
void inputone (struct elle * one);
void printone (struct elle* one);



//prints2
void printin (struct tree * tree);
void printpre (struct tree * tree);
void printpost (struct tree * tree);




//test1
void test_primitives ();
void test_stack_ADT ();
void test_elle0 ();
void test_stack_elle ();
void test_void ();
void test_prints ();
void test_prints2 ();




//traversals_recursive
void DFS_pre (struct elle * root, struct stack_elle * in);
void DFS_post (struct elle * root, struct stack_elle * in);
void DFS_in (struct elle * root, struct stack_elle * in);





//traversals_iterative
void BFS_iterative (struct tree* tree, struct  stack_elle * qu, struct  stack_elle * in);
void DFS_pre_iterative (struct tree* tree, struct stack_elle * qu, struct stack_elle* in);
struct elle * inorderpredecessor (struct stack_elle * in, struct elle * what);
void Traversal_any (struct tree * tree, struct stack_elle * qu, struct stack_elle * in, int a);
void kill_tree (struct tree * tr);





//BST0
struct elle * searchinBST (struct tree* tree, int key);
void insertinBST (struct tree * tree, int s1);
void deleteinBST (struct tree * tree, int key);


//test2
void test_BST0 ();