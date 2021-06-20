/*
Date   : Date of creation
Aim    : Aim of the program
Source : Source of the program
*/
#include <stdio.h>
#include "library/linkedList.h"

void main()
{
    Node *start = 0;
    start = insertFirst(start, 4);
    printList(start);
    start = insertFirst(start, 2);
    printList(start);
    start = insertLast(start, 6);
    printList(start);
    start = insertIndex(start, 8, 3);
    printList(start);
    start = insertAscending(start, 9);
    printList(start);
    
    // start = deleteIndex(start, 2);
    // printList(start);
    // start = deleteLast(start);
    // printList(start);
    // start = deleteFirst(start);
    // printList(start);
    // start = insertLast(start, 2);
    // printList(start);
}