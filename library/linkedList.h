/*
Date: 22-3-2021

data structure: linked list
contains:
    Node data type for list
    functions:
        Craete
        Insert:
            First
            Last
        Delete:
            First
            Last
        Print
        Length
*/

#pragma once

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

Node* createNode(int);

Node* insertFirst(Node*, int);
Node* insertLast(Node*, int);
Node* insertIndex(Node*, int, int);
Node* insertAscending(Node*, int);

Node* deleteFirst(Node*);
Node* deleteLast(Node*);
Node* deleteIndex(Node*, int);

void printList(Node*);

int listLength(Node*);
