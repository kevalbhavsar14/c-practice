/*
Date   : 13-3-2021

insert -> first, last, index
delete -> first, last, index
get -> first last index
set -> first last index
length
*/
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

IntArray* createArray(int size)
{
    IntArray *a;
    a = (IntArray*)malloc(sizeof(IntArray));
    a->arr = (int*)malloc(sizeof(int) * size);
    a->size = size;
    a->length = 0;
    return a;
}

void printArray(IntArray *a)
{
    int i;
    for (i = 0; i < a->length; i++)
    {
        printf("%d ",a->arr[i]);
    }
}

void insertFirst(IntArray *a, int element)
{
    int i;
    if (a->length == a->size)
    {
        printf("Error: Array is full\n");
        return;
    }
    for (i = 0; i < a->length; i++)
    {
        a->arr[a->length-i] = a->arr[a->length-i - 1];
    }
    a->arr[0] = element;
    a->length++;
}

void insertLast(IntArray *a, int element)
{
    if (a->length == a->size)
    {
        printf("Error: Array is full\n");
        return;
    }
    a->arr[a->length] = element;
    a->length++;
}

void insertIndex(IntArray *a, int element, int index)
{
    int i;
    if (a->length == a->size)
    {
        printf("Error: Array is full\n");
        return;
    }
    if (index > a->length)
    {
        printf("Error: Invalid index\n");
        return;
    }
    for (i = 0; i < a->length-index; i++)
    {
        a->arr[a->length-i] = a->arr[a->length-i - 1];
    }
    a->arr[index] = element;
    a->length++;
}

void deleteFirst(IntArray *a)
{
    int i;
    if (a->length == 0)
    {
        printf("Error: Array is empty\n");
        return;
    }
    for (i = 0; i < a->length-1; i++)
    {
        a->arr[i] = a->arr[i+1];
    }
    a->length--;
}

void deleteLast(IntArray *a)
{
    if (a->length == 0)
    {
        printf("Error: Array is empty\n");
        return;
    }
    a->length--;
}

void deleteIndex(IntArray *a, int index)
{
    int i;
    if (a->length == 0)
    {
        printf("Error: Array is empty\n");
        return;
    }
    if (index >= a->length)
    {
        printf("Error: Invalid index\n");
        return;
    }
    for (i = index; i < a->length-1; i++)
    {
        a->arr[i] = a->arr[i+1];
    }
    a->length--;
}

int getFirst(IntArray *a)
{
    if (a->length == 0)
    {
        printf("Error: Array is empty\n");
        return 0;
    }
    return a->arr[0];
}

int getLast(IntArray *a)
{
    if (a->length == 0)
    {
        printf("Error: Array is empty\n");
        return 0;
    }
    return a->arr[a->length-1];
}

int getIndex(IntArray *a, int index)
{
    if (a->length == 0)
    {
        printf("Error: Array is empty\n");
        return 0;
    }
    if (index >= a->length)
    {
        printf("Error: Invalid index\n");
        return 0;
    }
    return a->arr[index];
}

void setFirst(IntArray *a, int element)
{
    a->arr[0] = element;
}

void setLast(IntArray *a, int element)
{
    a->arr[a->length-1] = element;
}

void setIndex(IntArray *a, int element, int index)
{
    if (index >= a->length)
    {
        printf("Error: Invalid index\n");
        return;
    }
    a->arr[index] = element;
}

int length(IntArray *a)
{
    return a->length;
}

int search(IntArray *a, int element, int offset)
{
    int i;
    for (i = offset; i < a->length; i++)
    {
        if (a->arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int inArray(IntArray *a, int element)
{
    int count = 0, i;
    for (i = 0; i < a->length; i++)
    {
        if (a->arr[i] == element)
        {
            count++;
        }
    }
    return count;
}