#include <stdio.h>
#include <stdlib.h>
 
typedef struct stack
{
    int curr_size;
    int max_size;
    int* data;
} TABLE;
 
void initStack(TABLE* stack, int size);
int pop(TABLE* table);
void push(TABLE* table, int val);
int peek(TABLE* table);
void printStack(TABLE* table);
int isemptyy(TABLE* table);

