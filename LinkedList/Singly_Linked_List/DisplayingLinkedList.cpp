#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int main()
{   //Here we are focussed on how to display LL not on how to create it.

    int A[]={3,5,7,10,15};
/*Analogy to
  int *p=new int A[];*/

    //for allocation in heap
    Node* head = new Node;

    Node* temp;
    Node* last;
     
    head->data = A[0];
    head->next = nullptr;

    last= head;

  // Create a linked list

  for(int i=1;i<sizeof(A)/sizeof(A[0]);i++)
  {
    //create a temporary node

    temp=new Node;
     
    // Populate temporary node

    temp->data = A[i];
    temp->next = nullptr;

    //last's next is pointing to temp

    last->next = temp;
    last = temp;

  }

// Displaying LL 
  
  Node* p= head;
  while(p!=nullptr)
  {
    cout<< p -> data <<" -> "<<flush ;
    p=p->next;
  }


}