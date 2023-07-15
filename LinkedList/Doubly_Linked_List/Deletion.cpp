#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor called
    Node (int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }


};


void print(Node* head)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
        cout<<temp->data<<endl;
        temp=temp->next;
        }
    }

    void InsertAtHead(Node* &head,int d)
    {
        Node* newnode=new Node(d);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }

    void InsertAttail(Node* &head,Node* &tail,int d)
    {
        Node* newnode=new Node(d);
        Node* temp=head;
        
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        

    }


int main()
{
  Node* b=new Node(7);
  Node* head=b;
  Node* tail=b;

  /*
  basic implementation
  cout<<head->next<<endl;
  cout<<head->prev<<endl;
  */

 InsertAttail(head,tail,11);
 InsertAttail(head,tail,12);
 InsertAttail(head,tail,21);

 print(head);

}