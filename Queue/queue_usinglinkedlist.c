#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
struct Node *front = NULL;
struct Node *rear = NULL;
void Insert(int data, int n)
{
    int i;
    // temp=newly created node
    // temp2=pointer to head
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (n == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    struct Node *temp2 = head;
    for (i = 0; i < n - 2; i++) // for n=2 ,loop executes zero times,which means we are already at the required position.
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}
void Print()
{
    struct Node *temp1 = front;
    while (temp1 != NULL)
    {
        printf("%d", temp1->data);
        temp1 = temp1->next;
        printf("\t");
    }
}
void Enqueue(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (front == NULL &&rear == NULL)
    {
        front = rear = temp;
        return;
    }
    else//here we dont have to check whtether size of array is full ! because if dynamic memory allocation by linked lists
    {
        rear->next = temp;
        rear = temp;
    }
}
int Dequeue()
{
    if(front==NULL && rear== NULL)
    {
        printf("empty queue cannot be dequeued");
        return;
    }
    else if(front==rear)
    {
        front=rear=NULL;//last element to be dequeued

    }
    else
    {
        front=front->next;
    }
}
int main()
{
    head = NULL;

    Enqueue(2);
    printf("%d \n",front);
    printf("%d\n",rear);
    Print();
    printf("___________ \n");
    Enqueue(5);
    printf("%d \n",front);
    printf("%d \n",rear);
    Print();
    printf("___________ \n");
    Enqueue(7);
    printf("%d \n",front);
    printf("%d \n",rear);
    Print();
    printf("___________ \n");
    
    Dequeue();
    Print();
    printf("\n %d",front);//pointing to address of 5 
}