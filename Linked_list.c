#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *link;
};
void Insertatfront(struct node **h,int item);
void Insertatend(struct node **h,int item);
void Insertatposition(struct node **h,int item,int pos);
void deleteatfront(struct node **h);
void deleteatend(struct node **h);
void deleteatposition(struct node **h,int pos);
int search(struct node **h,int element);
void display(struct node *h);
int main()
{
    struct node *h=NULL;
    int choice,item,pos,element;
    char option[10];
    do
    {
        printf("\n1.Insert at front\n2.Insert at end\n3.Insert at given position\n4.Delete at front\n5.Delete at end\n6.Delete at given position\n7.Search given element\n8.Display\n");
        printf("Enter the choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the item to insert\n");
                scanf("%d",&item);
                Insertatfront(&h,item);
                break;
            case 2:
                printf("Enter the item to insert\n");
                scanf("%d",&item);
                Insertatend(&h,item);
                break;
            case 3:
                printf("Enter the item to insert\n");
                scanf("%d",&item);
                printf("Enter the position\n");
                scanf("%d",&pos);
                Insertatposition(&h,item,pos);
                break;
            case 4:
                deleteatfront(&h);
                break;
            case 5:
                deleteatend(&h);
                break;
            case 6:
                printf("Enter the position\n");
                scanf("%d",&pos);
                deleteatposition(&h,pos);
                break;
            case 7:
                printf("Enter the element to search\n");
                scanf("%d",&element);
                int r=search(&h,element);
                if(r==1)
                    printf("Element found\n");
                else
                    printf("Element not found\n");
                break;
            case 8:
                display(h);
                break;
            default:
                printf("Invalid");
                break;
        }
        display(h);
        printf("\nDo you want to continue?[Type Y/N] ");
        scanf("%s",option);
    }while(!strcmp(option,"Y"));
    return 0;
}
void Insertatfront(struct node **h,int item)
{
    struct node *nn;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=item;
    nn->link=NULL;
    if(*h==NULL)
        *h=nn;
    else
    {
        nn->link=*h;
        *h=nn;
    }
}
void Insertatend(struct node **h,int item)
{
    struct node *nn,*temp;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=item;
    nn->link=NULL;
    if(*h==NULL)
        *h=nn;
    else
    {
        temp=*h;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=nn;
    }
}
void Insertatposition(struct node **h,int item,int pos)
{
    struct node *nn,*temp;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=item;
    nn->link=NULL;
    int index=0;
    temp=*h;
    if(pos == 0)
    {
        nn->link=*h;
        *h = nn;
        return;
    }
    while(index!=(pos-1) && h!=NULL)
    {
        index++;
        temp=temp->link;
    }
    nn->link=temp->link;
    temp->link=nn;

}
void deleteatfront(struct node **h)
{
    struct node *del;
    if(*h==NULL) //underflow condition
        return;
    else
    {
        del=*h;
        *h=(*h)->link;
    }
    free(del);
}
void deleteatend(struct node **h)
{
    struct node *temp,*del;
    if(*h==NULL) //underflow condition
        return;
    else if((*h)->link==NULL) // only 1 node present
    {
        del=*h;
        *h=NULL;
    }
    else
    {
        temp=*h;                       
        while(temp->link->link!=NULL)
        {
            temp=temp->link;
        }
        del=temp->link;
        temp->link=NULL;
    }
    free(del);
}
void deleteatposition(struct node **h,int pos)
{
    struct node *temp,*del;
    temp=*h;
    if(pos==0)
    {
        *h=(*h)->link;
        temp->link=NULL;
        free(temp);
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->link;
        }
        del=temp->link;
        temp->link=temp->link->link;
        del->link=NULL;
        free(del);
    }
}
int search(struct node **h,int element)
{
    struct node *temp;
    if(*h==NULL)
        return 0;
    else
    {
        temp=*h;
        while(temp!=NULL)
        {
            if(temp->data==element)
            {
                return 1;
            }
            temp=temp->link;
        }
       return 0;
    }
}
void display(struct node *h)
{
    if(h==NULL)
        printf("Empty Linked List");
    else
    {
        while(h!=NULL)
        {
            printf("%d ",h->data);
            h=h->link;
        }
    }
    printf("\n");

}