/*
Date   : 14-2-2021
Aim    : census structure
Source : ansi c e10.12
*/
#include <stdio.h>
#include <stdlib.h>

struct Census
{
    char city[15];
    long int population;
    float literacy;
};

void readCities(struct Census c[], int n);
void printCity(struct Census[], int);
int compareName(const struct Census*, const struct Census*);
int comparePopulation(const struct Census*, const struct Census*);
int compareLiteracy(const struct Census*, const struct Census*);
void sort(struct Census[], int ,int (*compare)(struct Census*, struct Census*));

void main()
{
    struct Census c[5];
    int n = 5;
    readCities(c,n);
    
    printf("\nSorted by name alphabeticaly:\n");
    sort(c, n, compareName);
    printCity(c, n);
    
    printf("\nSorted by population:\n");
    sort(c, n, comparePopulation);
    printCity(c, n);
    
    printf("\nSorted by literacy level:\n");
    sort(c, n, compareLiteracy);
    printCity(c, n);
    
}

void readCities(struct Census c[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter %dth city's name, population and literacy level:\n",i+1);
        fflush(stdin);
        gets(c[i].city);
        fflush(stdin);
        scanf("%ld",&c[i].population);
        fflush(stdin);
        scanf("%f",&c[i].literacy);
    }
}

void printCity(struct Census c[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nCity: %s\n",c[i].city);
        printf("Population: %ld\n",c[i].population);
        printf("Literacy level: %.2f\n",c[i].literacy);
    }
}

int compareName(const struct Census *c1, const struct Census *c2)
{
    if (c1->city[0] > c2->city[0])
    {
        return 1;
    }
    return 0;
}

int comparePopulation(const struct Census *c1, const struct Census *c2)
{
    if (c1->population > c2->population)
    {
        return 1;
    }
    return 0;
}

int compareLiteracy(const struct Census *c1, const struct Census *c2)
{
    if (c1->literacy > c2->literacy)
    {
        return 1;
    }
    return 0;
}

void sort(struct Census c[], int n, int (*compare)(struct Census*, struct Census*))
{
    struct Census temp;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (compare(&c[j], &c[j+1]))
            {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
}