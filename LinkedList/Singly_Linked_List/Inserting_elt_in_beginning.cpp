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

int main()
{

  
  Node* head=new Node(7);
 /*
  cout<<head->data <<endl;
  cout<<head->next <<endl;
  */

// Insertion at head
 InsertatHead(head,5);
 InsertatHead(head,11);
 InsertatHead(head,14);
 InsertatHead(head,21);
 InsertatHead(head,35);

 //traversing LL
 traversingLL(head);

}