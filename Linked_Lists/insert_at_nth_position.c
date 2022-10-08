#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node *head;
void Insert(int data,int n)
{
    int i;
    //temp=newly created node
    //temp2=pointer to head
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    if(n==1)
    {
        temp->next=head;
        head=temp;
        return ; 
    }
    struct Node* temp2=head;
    for(i=0;i<n-2;i++)//for n=2 ,loop executes zero times,which means we are already at the required position.
    {
        temp2=temp2->next;
 
    }
    temp->next=temp2->next;
    temp2->next=temp;


}
void Print()
{
    struct Node* temp1=head;
    while(temp1!=NULL)
    {
        printf("%d",temp1->data);
        temp1=temp1->next;
        printf("\t");

    }
    

}

int main()
{
    head=NULL;
    
    Insert(2,1);//2
    Insert(3,2);//2 3
    Insert(4,1);//4 2 3
    Insert(5,2);//4 5 2 3
    Print();
    


}