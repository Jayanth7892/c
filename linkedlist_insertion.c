#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
void main()
{
    struct node *head=0,*temp,*newnode,*newnode1;
    int choice,pos,i=1;
    while (choice)
    {
    newnode=(struct node *)malloc(sizeof(struct node));
    
    printf("enter data to insert linkedlist");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
   temp= head=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
   
printf("do you want to continue(0,1)");
scanf("%d",&choice);


   }

   printf("enter position to insert");
   scanf("%d",&pos);

   newnode1=(struct node*)malloc(sizeof(struct node));
   printf("enter data to insert in that position");
   scanf("%d",&newnode1->data);
   temp=head;
   while(i<pos-1)
   {
    temp=temp->next;
    i=i+1;
    }
    newnode1->next=temp->next;
    temp->next=newnode1;

   printf("inserted data\n");
   temp=head;
   while(temp!=0)
   { 
    printf("%d\n",temp->data);
    temp=temp->next;
   }

   
   

    
}