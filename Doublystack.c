#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void tra();
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*top=NULL,*tmp,*ptr,*ptr1;
void main(){
    int ch , i ,n;
    xy:
    printf("\n1.push\n2.pop\n3.tra\nEnter choice : ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            tra();
            break;
        default:
            printf("\nEnter valid choice!");
    }
    printf("\nEnter 1 to continue");
    scanf("%d",&i);
    if(i==1)
    goto xy;
}
void tra(){
    ptr1=top;
    if(top==NULL){
        printf("\n list empty");
    }
    else{
        printf("\n start to end");
        while(ptr1->next!=NULL){
            printf("%d",ptr1->data);
            ptr1=ptr1->next;
        }
        printf("%d",ptr1->data);
    }
}
void push(){
    tmp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node value : ");
    scanf("%d",tmp->data);
    tmp->prev=NULL;
    tmp->next=NULL;
    if(top==NULL){
        top=tmp;
        ptr=tmp;
    }
    else{
        tmp->next=top;
        ptr->prev=tmp;
        top=tmp;
        ptr=tmp;
    }
}
void pop(){
    if(top==NULL){
        printf("\n Deletion not Possible");
    }
    else{
        tmp=top;
        top=tmp->next;
        tmp->next->prev=NULL;
        printf("\nDeleted node = %d",tmp->data);
        free(tmp);
    }
}
