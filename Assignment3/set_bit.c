#include<stdio.h>
#include"header.h"
void set_bit(int value,int x)
{
    printf("value after set is %d\n",value | (1<<x));
}