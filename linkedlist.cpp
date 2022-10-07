#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next; // next is a pointer variable which will contain the address of the next node of the linked list
};
int main()
{
    Node *a;
    a = NULL;
    Node *temp = new Node();
    temp->data = 2;
    temp->next = NULL;
    a = temp;
    // a is the head pointer which always points to the head node of the linked list
    cout << a->data << endl;
    cout << temp->data << endl;
    // temp is a pointer variable which always will point to a newly created node in this linked list
    temp = new Node();
    temp->data = 4;
    temp->next = NULL;
    Node *temp1 = a;//temp1 is a variable we are using to traverse the linked list
    //NOTE:WE DONT EVER EVER USE THE HEAD POINTER a FOR TRAVERSL !!NEVER LOSE THE HEAD,losing the head means losing the linked list 
    while (temp1->next != NULL)
    {

        temp1 = temp1->next;
    }
    temp1->next = temp;
    temp1=a;

    while (temp1->next != NULL)
    {
        cout << temp1->data << endl;
        temp1 = temp1->next;
        cout << temp1->data << endl;
    }
}