# All files

#### <`primitives.c`>
The most basic file. It has functions for ::
- taking input from user as string;
- taking input from user as int;
- throwing error;
- mod of a long;




#### <`stack_queue_ADT.c`>
This implements stack as ADT. `void *` of size 
20 is one element in stack; there can be at 
most 10 such elements in stack simultaneously.

Functions ::
- Initialize stack;
- Insert in stack at `lastin`;
- Insert in stack at any position;
- Access stack as stack;
- Access stack as queue;
- Access stack at random position;
- Print `lastin`;
- Print all;
- Delete `lastin`;




#### <`elle0.c`>
This implements elements in a dynamic 
list/tree. Elements have 2 `stack_ADT`. These 
can be used to store various data. `data` 
field is the primary field for any element.

`BF` is the balance factor of element;
`mark` is how many times element has been 
accessed/visited;
`fields`, `dates` can be used to store various 
information; each of these can have upto 10 
elements of size (20 bytes) simultaneously;


Functions ::
- Initialize a new element with `data`;
- Initialize a new tree;
- Update `BF` of any element;
- Make an element a child of another element;
- Make a `data` as a new child of any element;
- Returns which `link` links parent to child;
- Generate a tree;




#### <`stack_elle.c`>
Implements stack for `elle` elements.

Functions ::
- Initializes stack;
- Inserts `elle` in stack at `lastin`;
- Inserts `elle` at any position;
- Inserts `elle` into 2 given stacks;
- Access stack as stack;
- Access stack as queue;
- Access stack at random position;
- Print all;
- Search stack for a given `int`;
- Reset `mark` of a tree from a given stack of 
  all 
  `elle` in tree;




#### <`prints.c`>
Print functions.

Functions ::
- Print PROCESS and WALL time;
- Take input from user into one `elle`; 
- Print one `elle`;




#### <`prints2.c`>
Prints trees.

Functions ::
Print trees in ::
- Postorder;
- Preorder;
- Inorder;




#### <`test1.c`>
Functions to test functions in all files.

Functions to test following files ::
- `primitives.h`,
- `stack_ADT`,
- `elle0.h`,
- `stack_elle.h`,
- `prints.h`,
- `prints2.h`.




#### <`traversals_recursive.c`>
Recursive implementations of DFS preorder, postorder, inorder. Stores the result in provided `stack_elle`.




#### <`traversals_iterative.c`>
Iterative implementations of BFS, DFS preorder. Stores the result in provided `stack_elle`.

Functions ::
- Iterative implementations of BFS, DFS,
- Inorder predecessor of a given elle in a tree,
- Function to call any traversal function,



#### <`BST0.c`>
Functions for using BST.

Functions ::
- Search for a given value in BST,
- Insert a given `elle` in BST,
- Delete a given `elle` in BST,




#### <`test2.c`>
Tests following files ::
- `BST0.c`,