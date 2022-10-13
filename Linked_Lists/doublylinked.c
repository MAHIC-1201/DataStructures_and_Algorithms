#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head;
void InsertatHead(int data)
{
    struct Node* temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    head->prev=temp;
    temp->next=head;
    head=temp;


}
void Print()
{
    struct Node *temp1=head;
    while(temp1!=NULL)
    {
        printf("%d \t",temp1->data);
        temp1=temp1->next;
    }
    
    

}
void ReversePrint()
{
    struct Node* temp1=head;
    if(temp1==NULL) return;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    printf("REVERSE");
    while(temp1!=NULL)
    {
        printf("%d \t",temp1->data);
        temp1=temp1->prev;
    }
}
int main()
{
    head=NULL;
    InsertatHead(2);
    InsertatHead(4);
    InsertatHead(6);
    Print();
    ReversePrint();
}