#include<stdio.h>
#include"header.h"
void toggle_bit(int value,int x)
{
    printf("Toggled value is %d\n",value ^ (1<<x));
}