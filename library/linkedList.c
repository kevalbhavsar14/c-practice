/*
Date: 22-3-2021

data structure: linked list
    Function definations
*/

#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

Node* createNode(int value)
{
    Node *node = (Node*)malloc(sizeof(Node));
    node->value = value;
    node->next = 0;
    return node;
}

Node* insertFirst(Node *node, int value)
{
    Node *temp = createNode(value);
    temp->next = node;
    node = temp;
    return node;
}

Node* insertLast(Node *node, int value)
{
    Node *temp = node;
    if(temp == 0)
    {
        node = createNode(value);
        return node;
    }
    while(temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = createNode(value);
    return node;
}

Node* insertIndex(Node *node, int value, int index)
{
    if(index == 0)
    {
        node = insertFirst(node, value);
        return node;
    }
    Node *temp = node;
    Node *temp2 = createNode(value);
    int i;
    for(i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    temp2->next = temp->next;
    temp->next = temp2;
    return node;
}

Node* insertAscending(Node *node, int value)
{
    if(value < node->value)
    {
        return insertFirst(node, value);
    }
    Node *temp = node;
    Node *temp2 = createNode(value);
    while(temp->next && value > temp->next->value)
    {
        temp = temp->next;
    }
    temp2->next = temp->next;
    temp->next = temp2;
    return node;
}

Node* deleteFirst(Node *node)
{
    Node* temp = node;
    node = node->next;
    free(temp);
    return node;
}

Node* deleteLast(Node *node)
{
    Node *temp = node;
    if(temp->next == 0)
    {
        free(temp);
        return 0;
    }
    while(temp->next->next != 0)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = 0;
    return node;
}

Node* deleteIndex(Node *node, int index)
{
    if(index == 0)
    {
        node = deleteFirst(node);
        return node;
    }
    Node *temp = node, *temp2;
    int i;
    for(i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
    return node;
}

void printList(Node *node)
{
    Node *temp = node;
    while(temp != 0)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int listLength(Node *node)
{
    int len;
    Node *temp = node;
    while(temp != 0)
    {
        temp = temp->next;
        len++;
    }
    return len;
}