Script started on 2023-12-18 12:29:10+05:30 [TERM="xterm-256color" TTY="/dev/pts/2" COLUMNS="145" LINES="34"]
]0;ansarimn@fedora:~/Downloads/DSA2[?2004h[32mansarimn@fedora[0m:[32m~/Downloads/DSA2[0m$[0m [K[32mansarimn@fedora[0m:[32m~/Downloads/DSA2[0m$[0m ./build_dbms.sh
[?2004lrm -f -rf bin/* obj/* testing/obj/* DBMS/obj/*.o
gcc -g -march=native -I src -O2 -c DBMS/src/DBMS_basic.c -o DBMS/obj/DBMS_basic.o
gcc -g -march=native -I src -O2 -c DBMS/src/DBMS_dates.c -o DBMS/obj/DBMS_dates.o
gcc -g -march=native -I src -O2 -c DBMS/src/DBMS_menu_f.c -o DBMS/obj/DBMS_menu_f.o
gcc -g -march=native -I src -O2 -c DBMS/src/DBMS_menu_loop.c -o DBMS/obj/DBMS_menu_loop.o
gcc -g -march=native -I src -O2 -c DBMS/src/main.c -o DBMS/obj/main.o
gcc -g -march=native -I src -O2 -c src/BST0.c -o obj/BST0.o
gcc -g -march=native -I src -O2 -c src/elle0.c -o obj/elle0.o
gcc -g -march=native -I src -O2 -c src/primitives.c -o obj/primitives.o
gcc -g -march=native -I src -O2 -c src/prints2.c -o obj/prints2.o
gcc -g -march=native -I src -O2 -c src/prints.c -o obj/prints.o
gcc -g -march=native -I src -O2 -c src/stack_elle.c -o obj/stack_elle.o
gcc -g -march=native -I src -O2 -c src/stack_queue_ADT.c -o obj/stack_queue_ADT.o
gcc -g -march=native -I src -O2 -c src/test1.c -o obj/test1.o
gcc -g -march=native -I src -O2 -c src/test2.c -o obj/test2.o
gcc -g -march=native -I src -O2 -c src/traversals_iterative.c -o obj/traversals_iterative.o
gcc -g -march=native -I src -O2 -c src/traversals_recursive.c -o obj/traversals_recursive.o
gcc -g -march=native -I src  DBMS/obj/DBMS_basic.o  DBMS/obj/DBMS_dates.o  DBMS/obj/DBMS_menu_f.o  DBMS/obj/DBMS_menu_loop.o  DBMS/obj/main.o  obj/BST0.o  obj/elle0.o  obj/primitives.o  obj/prints2.o  obj/prints.o  obj/stack_elle.o  obj/stack_queue_ADT.o  obj/test1.o  obj/test2.o  obj/traversals_iterative.o  obj/traversals_recursive.o -o bin/dbms
414
459

1. Start operation
2. Exit
3. Add new record
4. Delete by name

5. Print all records
6. Search by medical history
7. Add appointment date
8. Delete latest appointment date
9. Get latest appointment date

1


1. Start operation
2. Exit
3. Add new record
4. Delete by name

5. Print all records
6. Search by medical history
7. Add appointment date
8. Delete latest appointment date
9. Get latest appointment date

3

Patient name:
asdf

Bill:
11


1. Start operation
2. Exit
3. Add new record
4. Delete by name

5. Print all records
6. Search by medical history
7. Add appointment date
8. Delete latest appointment date
9. Get latest appointment date

3

Patient name:
zxcv

Bill:
22


1. Start operation
2. Exit
3. Add new record
4. Delete by name

5. Print all records
6. Search by medical history
7. Add appointment date
8. Delete latest appointment date
9. Get latest appointment date

7

Enter name:
asdf

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 1

Enter date:
11

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 1

Enter date:
22

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 1

Enter date:
33

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 1

Enter date:
44

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 0

Operation has been cancelled; returning


1. Start operation
2. Exit
3. Add new record
4. Delete by name

5. Print all records
6. Search by medical history
7. Add appointment date
8. Delete latest appointment date
9. Get latest appointment date

7

Enter name:
zxcv

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 1

Enter date:
55

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 1

Enter date:
66

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 1

Enter date:
77

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 1

Enter date:
88

Do you want to add date?
Enter 1 to add date, enter 0 to cancel 0

Operation has been cancelled; returning


1. Start operation
2. Exit
3. Add new record
4. Delete by name

5. Print all records
6. Search by medical history
7. Add appointment date
8. Delete latest appointment date
9. Get latest appointment date

5

Hospital name: I2IT
Ward no.: 0
Record id: 414
Patient name: asdf
Bill: 11
Latest appointment date is: 
11
22
33
44


Hospital name: I2IT
Ward no.: 1
Record id: 459
Patient name: zxcv
Bill: 22
Latest appointment date is: 
55
66
77
88



1. Start operation
2. Exit
3. Add new record
4. Delete by name

5. Print all records
6. Search by medical history
7. Add appointment date
8. Delete latest appointment date
9. Get latest appointment date

9

Enter name:
asdf

Latest appointment date is: 44


1. Start operation
2. Exit
3. Add new record
4. Delete by name

5. Print all records
6. Search by medical history
7. Add appointment date
8. Delete latest appointment date
9. Get latest appointment date

9

Enter name:
zxcv

Latest appointment date is: 88


1. Start operation
2. Exit
3. Add new record
4. Delete by name

5. Print all records
6. Search by medical history
7. Add appointment date
8. Delete latest appointment date
9. Get latest appointment date

8

Enter name:
asdf

Do you want to delete date: 44?
Enter 1 to delete latest date, enter 0 to cancel 1

Do you want to delete date: 22?
Enter 1 to delete latest date, enter 0 to cancel 1
./build_dbms.sh: line 7: 208767 Segmentation fault      (core dumped) ./bin/dbms

]0;ansarimn@fedora:~/Downloads/DSA2[?2004h[32mansarimn@fedora[0m:[32m~/Downloads/DSA2[0m$[0m exit
[?2004lexit

Script done on 2023-12-18 12:30:39+05:30 [COMMAND_EXIT_CODE="0"]
