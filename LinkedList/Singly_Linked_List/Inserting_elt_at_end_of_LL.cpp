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

void InsertatTail(Node* &tail,int d)
  {
   //step 1 -> create node
   Node* newnode=new Node(d);

   //step 2 -> 
   tail->next=newnode;

   //step 3 -> head update
   tail=newnode;

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

  Node* b=new Node(10);
  Node* head=b;
  Node* tail=b;
 /*
  cout<<head->data <<endl;
  cout<<head->next <<endl;
  */

// Insertion at head
 InsertatTail(tail,5);
 InsertatTail(tail,11);
 InsertatTail(tail,14);
 InsertatTail(tail,21);
 InsertatTail(tail,35);

 //traversing LL
 traversingLL(head);

}
