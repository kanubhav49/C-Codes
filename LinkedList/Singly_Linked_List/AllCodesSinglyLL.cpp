#include <iostream>
using namespace std;

class Node
{
   public:
   int data;
   Node* next;
   
   //constructor called

Node(int d)
{
this->data=d;
this->next=NULL;
}

};


// inerting at beginning
void InsertAtBeginning(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

//inserting at end
void InsertAtEnd(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void InsertAtanyPosition(Node* &head,Node* &tail,int position,int d)
{
    if(position==1)
    {
        InsertAtBeginning(head,d);
    }
    else
    {
        Node* temp=new Node(d);
        Node* prev=head;
        int k=position-2;
        while(k--)
        {
            prev=prev->next;
        }
        temp->next=prev->next;
        prev->next=temp;
        
        if(temp->next==NULL)
       {
        InsertAtEnd(tail,d);
        return;
       } 
    }
}

//delete from beginning
void DeleteFromBeg(Node* &head)
{
    
     Node* temp=head;
    head=head->next;
}

void DeleteFromEnd(Node* &head)
{
    Node* prev=NULL;
    Node* temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
}

void DeleteFromanyPosition(Node* &head,int p,Node* &tail)
{
    if(p==1)
    {
    DeleteFromBeg(head);
    }
    else
    {
        Node* prev=head;
        int k=p-2;
        while(k--)
        {
            prev=prev->next;
        }
        prev->next=prev->next->next;
        
    
    if (prev->next == NULL) {
      tail = prev;
    }
    }  
}

void PrintLL(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
    cout<<temp->data<<endl;
    temp=temp->next;  
    }
}

int main()
{
    Node* b=new Node(7);
    Node* head=b;
    Node* tail=b;
    InsertAtanyPosition(head,tail,1,14);
    InsertAtanyPosition(head,tail,2,21);
    InsertAtanyPosition(head,tail,4,28);
    InsertAtanyPosition(head,tail,5,35);
    
    DeleteFromanyPosition(head,5,tail);
  

PrintLL(head);
}