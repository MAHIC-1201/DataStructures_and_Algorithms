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
    if((rear+1)%10==front)
    {
        printf(" Circular  Queue is full \n");
    }
    else if(IsEmpty())
    
    {
        front=rear=0;
    }
    else
    {
        rear=(rear+1)%10;
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
        front=(front+1)%10;

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
    Enqueue(4);
    Enqueue(7);
    Enqueue(9);
    Enqueue(12);
    Enqueue(13);
    Enqueue(15);
    
    Print();
    
    Dequeue();
    
    Print();
    printf("%d",front);
    Enqueue(16);
    Print();
    printf("%d",rear);


}
