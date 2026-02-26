#include<iostream>
using namespace std;
class patient
{
struct Node{
    int data;
    Node* next;
};
Node* head;
bool isEmpty(){
    return head==NULL;
}
}
public:
patient queue()
{
    head=nullptr;
}
void enqueue(int id)
{
    Node* temp=new Node;
    temp->data=id;
    temp->next=NULL;
    if(isEmpty())
    {
        head=temp;
        return;
    }
    Node* temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
}