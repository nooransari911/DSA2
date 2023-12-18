#include "DBMS.h"


void DBMSlatestdate (struct tree * tr) {
    struct elle *te0;
    te0 = searchinputBST (tr);
    struct stack_ADT * s1 = te0 -> dates;

    if (te0 != NULL) {
        //print_stack_latest_int (te0 -> dates, OUTPUT_DATA_SUCCESS, OUTPUT_DATA_FAILURE);
        if (s1 -> lastin == -1) {
            printf ("\n%s\n", OUTPUT_DATA_FAILURE);
        }

        else {
            printf("\n%s%s\n", OUTPUT_DATA_SUCCESS, (char *) (s1 -> a [s1 -> lastin]));
        }
    }

    else {
        printf ("\n%s\n", DOES_NOT_EXIST);
    }
}


void DBMSinsertdate (struct tree * tr) {
    int i = 0;
    char * s1;
    struct elle *te0;
    te0 = searchinputBST (tr);


    if (te0 == NULL)
    {
        return;
    }


    while (true) {
        printf("\nDo you want to add date?\n");
        printf("Enter 1 to add date, enter 0 to cancel ");
        scanf(" %d", &i);



        if (i == 1) {
            s1 = input_string ("Enter date:");
            insert_in_stack (te0 -> dates, (void *) (s1));
        }

        else if (i == 0) {
            printf("\nOperation has been cancelled; returning\n");
            return;
        }

        else {
            printf("enter valid option");
        }
    }

}


void DBMSdeletedate (struct tree * tr) {
    int i = 0;
    struct elle * te0;

    te0 = searchinputBST (tr);


    if (te0 == NULL) {
        return;
    }


    while (true) {
        //printf("\nDo you want to delete date: %s?\n", (char *) (access_stack_safe (te0 -> dates)));
        printf("Lastin: %d?\n", (te0 -> dates -> lastin));
        printf("Enter 1 to delete latest date, enter 0 to cancel ");
        scanf("%d", &i);

        if (i == 1) {
            //delete_stack_lastin (te0 -> dates);
            //te0 -> dates -> lastin --;
            //te0 -> dates -> size --;
            access_stack (te0 -> dates);
        }

        else if (i == 0) {
            printf("\nOperation has been cancelled; returning\n");
            return;
        }

        else {
            printf("enter valid option");
        }
    }
}
