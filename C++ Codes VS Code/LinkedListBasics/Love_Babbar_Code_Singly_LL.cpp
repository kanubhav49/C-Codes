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
        data=d;
        next=NULL;

    }
};
   //inserion in beginning
    void InsertionAtHead(Node* &head,int d)
    {
        Node* node0=new Node(d);
        node0->next=head;
        head=node0;
    }

    //insertion at end
    void InsertionAtend(Node* &tail,int d)
    {
        Node* node_end=new Node(d);
        tail->next=node_end;
        tail=node_end;
    }

    //inserting at a give position

    void insertionAtPosition1(int d,int position,Node* &head,Node* &tail)
    {
        if(position==1)
        {
            InsertionAtHead(head,d);
            return;
        }

    
       Node* temp=head;
       int cnt=1;

       while(cnt<position-1)
       {
        temp=temp->next;
        cnt++;
       } 
           
       if(temp->next==NULL)
       {
        InsertionAtend(tail,d);
        return;
       }    

       Node* currentnode=new Node(d);
       currentnode->next=temp->next;
       temp->next=currentnode;     
    }

    //inserting at any give position

    
    

    //printing LL

    void PrintLL(Node* &head)
 {
       if(head == NULL)
        {
        cout << "List is empty "<< endl;
        return ;
        }
    Node* temp = head;

    while(temp != NULL) 
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
 }

int main()
{
    Node* node1=new Node(12);
    //cout<<node1->next<<endl;
    //cout<<node1->data<<endl;
    Node* head=node1;
    Node* tail=node1;
   InsertionAtHead(head,15);

   InsertionAtend(tail,10);
    
    insertionAtPosition1(21,3,head,tail);

    PrintLL(head);
}