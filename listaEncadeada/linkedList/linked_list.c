#include "linked_list.h"

typedef struct _node
{
    int val;
    struct _node *next;
} Node;

typedef struct _head
{
    Node *next;
} Head;

Head *create_head()
{
    Head *h = (Head *)malloc(sizeof(Head));
    h->next = NULL;
    return (h);
}
 Node *create_list(int val)
 {
    Node *node = (Node *)malloc(sizeof(Node));
    node->val = 10;
    node->next = NULL;
    return (node);
 }

