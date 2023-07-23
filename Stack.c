#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
    int data;
    struct node *link;

}*start=NULL,*tmp,*top;
int n;

void main(){
    int ch;
    xy:
    printf("\n 1.Push\n 2.Pop \n 3.Display\n");
    printf("Enter your Choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;

        default:
        printf("\nEnter valid choice\n");
    }
    printf("\nEnter 1 for continue   :");
    scanf("%d",&n);
    if(n==1)
    goto xy;
}

void push(){
    top=start;
    tmp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter node data   :");
    scanf("%d",&tmp->data);
    tmp->link=NULL;
    if(top == NULL)
    {
        start=tmp;
    }

        tmp->link=start;
        start=tmp;

}

void pop()
{
    top=start;
    if (top == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\n Deleted item = %d",top->data);
        tmp=start;
        start=tmp->link;
        free(tmp);
    }
}

void display()
{
    tmp=start;
    if(top==NULL)
    {
        printf("\n Stack is empty");
    }
    else
    {
        while(tmp->link!=NULL)
        {
            printf("\n %d",tmp->data);
            tmp=tmp->link;
        }
        printf("\n%d",tmp->data);
    }
}

