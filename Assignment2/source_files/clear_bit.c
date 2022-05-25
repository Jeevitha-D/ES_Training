#include<stdio.h>
#include"header.h"
void clear_bit(int value,int x)
{
    printf("Value after clear is %d\n",value & ~(1<<x));
}