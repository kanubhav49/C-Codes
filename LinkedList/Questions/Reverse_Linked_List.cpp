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

  Node* reverse(Node* &head) {

    if(head == NULL)
    {
        cout << "List is Empty" << endl;
        return head;
    }

    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL) {
        //to keep track of list ahead of curr
        Node* forward = curr -> next;
        //change curr link and connect it to prev node
        curr->next = prev;

        //aage badho
        prev = curr;
        curr = forward;
    }

    return prev;
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

 InsertAtHead(head,11);
 InsertAtHead(head,12);
 InsertAtHead(head,21);


 head=reverse(head);

 print(head);



}