#include "DBMS.h"




void DBMSinsert (struct tree* tr) {
    struct elle* new;

    new = inputelle ();
    if (tr -> root == NULL) {
        //inputone (ptrnew);
        tr -> root = new;
        return;
    }

    else {
    insertinBSTin (tr, new);
    }
}


void DBMSsearch (struct tree * tr) {
    char * i;
    int r;
    struct elle * te0;

    i = input_string ("Enter name: ");
    r = convert (i);

    te0 = searchinBST (tr, r);

    printone (te0);
}


void DBMSdel (struct tree * tr) {
    char * name;
    int id;
    struct elle* te0;

    name = input_string ("Enter name:");

    id = convert (name);

    if (tr != NULL) {
        te0 = searchinBST (tr, id);

        if (te0 != NULL){
            deleteinBST (tr, * (int *) te0 -> fields -> a [BST_KEY]);
        }
    }
}
