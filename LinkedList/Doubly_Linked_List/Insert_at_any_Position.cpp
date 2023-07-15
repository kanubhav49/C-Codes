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

    void InsertAtHead(Node* &head,Node* tail,int d)
    {
        if(head==NULL)
        {
            Node* temp=new Node(d);
            head=temp;
            tail=temp;
        }
        else
        {
        Node* newnode=new Node(d);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        }
    }

    void InsertAttail(Node* &head,Node* &tail,int d)
    {
         if(tail==NULL)
        {
            Node* temp=new Node(d);
            head=temp;
            tail=temp;
        }

        else{
             Node* newnode=new Node(d);
        Node* temp=head;
        
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;

        }
      
        
    }

    void InsertAtPosition(Node* &head,Node* &tail,int d,int position)
    {
        Node* newnode=new Node(d);
        Node* prev=head;
        if (position==1)
        {
            InsertAtHead(head,tail,d);
            return;
        }

        

            int t=position-2;
            while(t--)
            {
                prev=prev->next;
               
            }

        if(prev->next==NULL)
          {
          InsertAttail(head,tail,d);
          return;
          }

            newnode->next=prev->next;
            prev->next->prev=newnode;
            prev->next=newnode;
            newnode->prev=prev;

         
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

 InsertAtPosition(head,tail,35,1);
 InsertAtPosition(head,tail,39,3);
 InsertAtPosition(head,tail,42,7);

 print(head);



}