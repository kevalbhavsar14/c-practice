/*
array custom data structure
functions header

insert -> first, last, index
delete -> first, last, index
get -> first last index
set -> first last index
length
*/
typedef struct
{
    int *arr;
    int size;
    int length;
} IntArray;

IntArray* createArray(int size);

void printArray(IntArray*);

void insertFirst(IntArray*, int);
void insertLast(IntArray*, int);
void insertIndex(IntArray*, int, int);

void deleteFirst(IntArray*);
void deleteLast(IntArray*);
void deleteIndex(IntArray*, int);

int getFirst(IntArray*);
int getLast(IntArray*);
int getIndex(IntArray*, int);

void setFirst(IntArray*, int);
void setLast(IntArray*, int);
void setIndex(IntArray*, int, int);

int length(IntArray*);

int search(IntArray*, int, int);

int inArray(IntArray*, int);