#include<stdio.h>
#include"header.h"
int main()
{
    int value,x;
    printf("Enter the value\n");
    scanf("%d",&value);
    printf("Enter the bit position\n");
    scanf("%d",&x);
    find_lsb(value);
    toggle_bit(value,x);
    set_bit(value,x);
    clear_bit(value,x);
    return 0;
}