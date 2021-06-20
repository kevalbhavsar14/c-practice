/*
Date   : Date of creation
Aim    : Aim of the program
Source : Source of the program
*/
#include <stdio.h>
#include "library/array.h"

void main()
{
    IntArray *a;
    a = createArray(5);
    insertFirst(a, 1);
    insertFirst(a, 2);
    insertFirst(a, 3);
    insertLast(a, 2);
    insertIndex(a, 5, 2);
    printArray(a);
    printf("\n");
    deleteIndex(a, 2);
    setFirst(a, 7);
    setLast(a, 8);
    setIndex(a, 4, 4);
    insertLast(a, 2);
    printArray(a);
    printf("\nFirst element:  %d", getFirst(a));
    printf("\nLast element:   %d" ,getLast(a));
    printf("\nindex 2 elemnt: %d", getIndex(a, 2));
    printf("\nArray length:   %d", length(a));
    printf("\nIndex of 1:     %d", search(a, 5, 0));
    printf("\nNumber of 2:    %d", inArray(a, 2));
}