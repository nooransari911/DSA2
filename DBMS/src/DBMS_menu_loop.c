#include "DBMS.h"


void DBMSmenu () {
    int op = 0, signature = 0, i = 0;
    char name [10];
    struct tree* tree;
    struct elle* te0;






    tree = init_tree();
    te0 = (struct elle*) malloc (sizeof (struct elle));


    for (;;)
    {

        printf("\n\n1. Start operation\n");
        printf("2. Exit\n");
        printf("3. Add new record\n");
        printf("4. Delete by name\n\n");
        printf("5. Print all records\n");
        printf("6. Search by medical history\n");
        printf("7. Add appointment date\n");
        printf("8. Delete latest appointment date\n");
        printf("9. Get latest appointment date\n\n");


        scanf(" %d[^\n]", &op);

        switch (op) {
            case 1:
                break;

            case 2:
                exit (0);

            case 3:
                DBMSinsert (tree);
                break;

            case 4:
                DBMSdelete (tree);
                break;

            case 5:
                DBMSprintall (tree);
                break;

            case 6:
                DBMSsearch (tree);
                break;

            case 7:
                DBMSinsertdate (tree);
                break;

            case 8:
                DBMSdeletedate (tree);
                break;

            case 9:
                DBMSlatestdate (tree);
                break;
        }
    }
}
