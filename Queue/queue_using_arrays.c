#include<stdio.h>
int front=-1,rear=-1;

int a[10];

void Print()
{
    int i;
    for(i=front;i<rear+1;i++)
    {
        printf("%d \t",a[i]);

    }
    printf("\n");
}
int IsEmpty()
{
    if(front==-1 && rear==-1)
    {
        
        return 1;
    }
    else
    {
        
        return 0;
    }
}
void Enqueue(int x)
{
    if(rear==10-1)
    {
        printf("Queue is full \n");
    }
    else if(IsEmpty())
    
    {
        front=rear=0;
    }
    else
    {
        rear=rear+1;
    }
    a[rear]=x;
}
int Dequeue()
{
    if(IsEmpty())
    {
        printf("No element to delete \n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=front+1;

    }
}
int main()
{
    int y;
    IsEmpty();
    Enqueue(2);
    
    Enqueue(3);
    Enqueue(4);
    Print();
    Enqueue(5);
    Dequeue();
    Print();
    

}
