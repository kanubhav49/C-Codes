#include <iostream>
using namespace std;

class Node{
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

void InsertatHead(Node* &head,int d)
  {
   //step 1 -> create node
   Node* temp=new Node(d);

   //step 2 -> set next pointer to head node
   temp->next=head; 

   //step 3 -> head update
   head=temp;

  }

  void traversingLL(Node* head)
  {
    Node* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<endl;
      temp=temp->next;
    }
    cout<<endl;
  }
  
  void InsertatTail(Node* &tail,int d)
  {
   //step 1 -> create node
   Node* temp=new Node(d);

   //step 2 -> 
   tail->next=temp;

   //step 3 -> head update
   tail=temp;

  }

  void InsertionatanyPosition(Node* head,int pos,Node*tail,int d)
  {
    if(pos==1)
    {
        InsertatHead(head,d);
    }
    else{

        Node* newnode=new Node(d);
        //prev pehle node pe hi khda h
        Node* prev=head;
        int t=pos-2;
        while(t--)
        {
            prev=prev->next;
        }
        newnode->next=prev->next;
        prev->next=newnode;

        if(newnode->next==NULL)
       {
        InsertatTail(tail,d);
        return;
       } 

    }

  }

int main()
{

  Node* b=new Node(7);
  Node* head=b;
  Node* tail=b;
 /*
  cout<<head->data <<endl;
  cout<<head->next <<endl;
  */

 InsertatHead(head,5);
 InsertatHead(head,11);
 InsertatHead(head,14);
 InsertatHead(head,21);
 InsertatHead(head,35);

//inserting at any position
InsertionatanyPosition(head,3,tail,28);

 //traversing LL
 traversingLL(head);

}