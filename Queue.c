#include<stdio.h>
#include<stdlib.h>
void enque();
void deque();
void display();
struct node
{
    int data;
    struct node *link;

}*start,*front=NULL,*rear=NULL,*tmp;
int n;

int main(){
    int ch;
    xy:
    printf("\n 1.Push\n 2.Pop \n 3.Display\n");
    printf("Enter your Choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        enque();
        break;

        case 2:
        deque();
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
return 0;
}

void enque(){
    tmp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter node data");
    scanf("%d",&tmp->data);
    tmp->link=NULL;
    if(front == NULL)
    {

        start=tmp;
        front=tmp;
        rear=tmp;
    }
    else
    {
        rear->link=tmp;
        rear=tmp;
    }
}

void deque()
{

    if (front == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\n Deleted item = %d",front->data);
        tmp=front;
        start=front->link;
        front=front->link;
        free(tmp);
    }
}

void display()
{
    tmp=start;
    if(front == NULL)
    {
        printf("\n Queue is empty");
    }
    else{
        while(tmp->link!=NULL)
        {
            printf("\n %d",tmp->data);
            tmp=tmp->link;
        }
        printf("\n%d",tmp->data);
}
}
