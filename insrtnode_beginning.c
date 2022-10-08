#include<stdio.h>
#include<stdlib.h>

//inserting node at beginning of the list

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void Insert(int x)//inserting node at beginning
{
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));//malloc returns a void pointer we need a pointer of type Node *
    temp->data=x;
    temp->next=head;
    head=temp;
    //when the list is empty head=NULL so the next value of temp variable will be set to NULL and head will point to temp;
    //when the list is not empty temp->next (new node 's next) will point to the current head and then the head will move to temp and thus the new node will be inserted at the beginning.
    

}
void Print()
{
    struct Node* temp1=head;
    printf("List is :");
    while(temp1 !=NULL)
    {
       printf("%d",temp1->data);
       temp1=temp1->next;
    }
    printf("\n");


}
int main()
{
    head=NULL;
    int n,i,x;
    printf("how many numbers do you want to add to the linked list?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number to be inserted : ");
        scanf("%d",&x);
        Insert(x);
        Print();

    }

}