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
        cout<<temp->data<<" ";
        temp=temp->next;
        }
        cout<<endl;
    }

    void InsertAtHead(Node* &head,int d)
    {
        if(head==NULL)
        {
            Node* temp=new Node(d);
            head=temp;
        }
        else
        {
        Node* newnode=new Node(d);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        }
    }



Node* reverseDLL(Node * head)
{
     if(head==NULL || head->next==NULL)
     {
        return head;
     }
    
    
    Node* pre = NULL;
    Node* curr = head;
   
    /* swap next and prev for all nodes of
    doubly linked list */
    while (curr != NULL)
    {
        pre = curr->prev;
        curr->prev = curr->next;
        curr->next = pre;          
        curr = curr->prev;
    }   
   return pre->prev;
}

int main()
{
    Node* b=new Node(7);
    Node* head=b;

    InsertAtHead(head,11);
    InsertAtHead(head,12);
    InsertAtHead(head,21);

    print(head);

    Node* temp = reverseDLL(head);

    print(temp);
}