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
    struct elle *te0;
    te0 = searchinputBST (tr);


    if (te0 != NULL) {
        printone (te0);
    }

    else {
        printf ("\n%s\n", DOES_NOT_EXIST);
    }
}




void DBMSdelete (struct tree * tr) {
    struct elle *te0;
    te0 = searchinputBST (tr);


    if (te0 != NULL){
        deleteinBST (tr, * (int *) te0 -> fields -> a [BST_KEY]);
    }

    else {
        printf("\n%s\n", DOES_NOT_EXIST);
    }

    sign --;

}




void DBMSprintall (struct tree* tr) {
    internalprintin (tr -> root);
}
