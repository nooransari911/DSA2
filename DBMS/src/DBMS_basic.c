#include "DBMS.h"


struct elle* inputelle () {

    /*
    Takes input from user
    */

    char * name;
    int bill;
    struct elle* te0;



    name = input_string ("Patient name:");
    bill = input_int ("Bill:");


    te0 = init_elle(sign);
    te0 -> fields -> a [NAME] = (void *) name;
    * (int *) te0 -> fields -> a [BILL] = bill;
    * (int *) te0 -> fields -> a [SIGN] = sign;

    // converts name string into int;
    * (int *) te0 -> fields -> a [ID] = convert (name);

    sign ++;
    return te0;
}






void test0 () {
    struct elle * te0, * te1;

    te0 = inputelle ();
    te1 = inputelle ();

    printone (te0);
    printone (te1);
}


void test1 () {
    struct elle * te0, * te1;
    struct tree * tr;
    tr = init_tree ();


    DBMSinsert (tr);
    DBMSinsert (tr);
    DBMSprintall (tr);

    //DBMSsearch (tr);
    //DBMSdelete (tr);

    printf ("\n%s%s\n", "Inserting dates into ", "asdf");
    DBMSinsertdate (tr);
    DBMSlatestdate (tr);
    printf ("\n%s%s\n", "Inserting dates into ", "zxcv");
    DBMSinsertdate (tr);
    DBMSlatestdate (tr);
    printf ("\n%s\n", "All entries added:");
    DBMSprintall (tr);
}
