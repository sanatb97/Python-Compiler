#include "symbol_table_op.h"

void initStack(TABLE* table, int size)
{
	table->max_size = size;
	table->curr_size = 0;
	table->data = (int*)malloc(sizeof(int));
}

int pop(TABLE* table)
{
	if (table->curr_size > 0)
   {
       table->curr_size-=1;
       return table->data[table->curr_size];
   }
}

void push(TABLE* table, int val)
{
	if (table->curr_size >= table->max_size / 2)
    {
        table->max_size = table->max_size * 2;
        table->data = realloc(table->data, table->max_size);
    }
 
    table->data[table->curr_size] = val;
    table->curr_size++;
}

int peek(TABLE* table)
{
	if (table->curr_size<1)
		return -1;
	return table->data[table->curr_size - 1];
}

void printStack(TABLE* table)
{
    int i;
    for (i = 0; i < table->curr_size; i++)
    {
        printf("%d: %d\n", i, table->data[i]);
    }
}

int isemptyy(TABLE* table){
if (table->curr_size==0)
	return 1;
else
	return 0;
}
