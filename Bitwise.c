#include<stdio.h>
#include<string.h>
int checkpowerof2(int value);
void set_bit(int value,int x);
void clear_bit(int value,int x);
void toggle_bit(int value,int x);
void bit_set_or_not(int value,int x);
void msb_bit(int value,int x);
void lsb_bit(int value);
void last_n_bit(int value,int x);
void first_n_bit(int value,int t,int x);
int main()
{
    int choice,value,x,t;
    char option[10];
    do
    {
        printf("\n1.check power of 2\n2.set bit\n3.clear bit\n4.toggle bit\n5.check bit is set or not\n6.find msb\n7.find lsb\n8.find last n bits\n9.find first n bits\n");
        printf("Enter the choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the value \n");
                scanf("%d",&value);
                int r=checkpowerof2(value);
                {
                    if(r==1)
                        printf("It is a power of 2");
                    else
                        printf("Not a power of 2");
                }
                break;
            case 2:
                printf("Enter the value\n");
                scanf("%d",&value);
                printf("Enter the bit position\n");
                scanf("%d",&x);
                set_bit(value,x);
                break;
            case 3:
                printf("Enter the value\n");
                scanf("%d",&value);
                printf("Enter the bit position\n");
                scanf("%d",&x);
                clear_bit(value,x);
                break;
            case 4:
                printf("Enter the value\n");
                scanf("%d",&value);
                printf("Enter the bit position\n");
                scanf("%d",&x);
                toggle_bit(value,x);
                break;
            case 5:
                printf("Enter the value\n");
                scanf("%d",&value);
                printf("Enter the bit position\n");
                scanf("%d",&x);
                bit_set_or_not(value,x);
                break;
            case 6:
                printf("Enter the value\n");
                scanf("%d",&value);
                printf("Enter the bit length\n");
                scanf("%d",&x);
                msb_bit(value,x);
                break;
            case 7:
                printf("Enter the value\n");
                scanf("%d",&value);
                lsb_bit(value);
                break;
            case 8:
                printf("Enter the value\n");
                scanf("%d",&value);
                printf("Enter the n num of bits\n");
                scanf("%d",&x);
                last_n_bit(value,x);
                break;
            case 9:
                printf("Enter the value\n");
                scanf("%d",&value);
                printf("Enter the total no of bits\n");
                scanf("%d",&t);
                printf("Enter the n num of bits\n");
                scanf("%d",&x);
                first_n_bit(value,t,x);
                break;
            default:
                printf("Invalid");
                break;
        }
        printf("\nDo you want to continue?[Type Y/N] ");
        scanf("%s",option);
    }while(!strcmp(option,"Y"));
    return 0;
}
int checkpowerof2(int value)
{
    if(value>1)
    {
        if(!(value&(value-1)))
            return 1;
        else 
            return 0;
    }
    else
        return 0;
}
void set_bit(int value,int x)
{
    printf("%d",value | (1<<x));
}
void clear_bit(int value,int x)
{
    printf("%d",value & ~(1<<x));
}
void toggle_bit(int value,int x)
{
    printf("%d",value ^ (1<<x));
}
void bit_set_or_not(int value,int x)
{
    printf("%d",value & (1<<x));
}
void msb_bit(int value,int x)
{
    printf("%d",value & (1<<(x-1)));
}
void lsb_bit(int value)
{
    printf("%d",value & 1);
}
void last_n_bit(int value,int x)
{
    printf("%d",value & (1<<x)-1);
}
void first_n_bit(int value,int t,int x)
{
    printf("%d", (value&(!(1<<(t-x))-1))>>(t-x));
}

