#ifndef LINKED_LIST_H
#define LINKED_LIST_H

 #include <stdlib.h>
 #include <stdio.h>

 typedef struct _node Node;
 typedef struct _head Head;
 Head *create_head();
 Node *create_list(int val);

#endif