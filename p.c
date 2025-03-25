#include<stdio.h>
struct node 
{
    int data;
    struct node *next;
};
void main()
{
    struct node *head=0,*temp,*newnode;
    int choice;
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
   printf("inserted data\n");
   temp=head;
   while(temp!=0)
   { 
    printf("%d\n",temp->data);
    temp=temp->next;
   }



    
}