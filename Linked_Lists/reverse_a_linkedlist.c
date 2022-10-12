#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void Insert(int data, int n)
{
    int i;
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
    for (i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}
void Delete(int n) // deletes node at nth posiion

{
    int i;
    struct Node *temp2 = head;
    if (n == 1)
    {
        head = temp2->next;
        free(temp2);
        return;
    }
    for (i = 0; i < n - 2; i++)
    {

        temp2 = temp2->next; // at end of this function temp2 shall point to n-1th node
    }
    struct Node *temp1;
    temp1 = temp2->next; // temp1 points to nth node
    temp2->next = temp1->next;
    free(temp1);
}
// void Delete2(int n)
// {
//     struct Node* temp2=head;
//     int i;
//     if(n==1)
//     {
//         head=temp2->next;
//         free(temp2);
//         return;
//     }
//     for(i=0;i<n-2;i++)
//     {
//         temp2=temp2->next;
//     }
//     struct Node* temp1;
//     temp1=temp2->next;
//     temp2->next=temp1->next;
//     free(temp1);
// }
void Reverse()
{
    struct Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void Print()
{
    struct Node *temp1 = head;
    while (temp1 != NULL)
    {
        printf("%d", temp1->data);
        temp1 = temp1->next;
        printf("\t");
    }
    printf("\n \t");
}
int main()
{
    head = NULL;
    int n;

    Insert(6, 1);
    Insert(5, 2);
    Insert(2, 1);
    Insert(4, 2); // 2465
    Print();
    // printf("enter a position :");
    // scanf("%d",&n);
    // Delete(n);
    Delete(1);
    Print();
    Reverse();
    Print();
}