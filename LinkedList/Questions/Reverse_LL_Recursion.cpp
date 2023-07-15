#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* add;

    //constructor called
    node(int d)
    {
       data=d;
       add=NULL;
    }

};

void InsertatBeg(node* &head,int data)
{
   node* newnode=new node(data);
   newnode->add=head;
   head=newnode;
}

void InsertatEnd(node* &head,node* &tail,int data)
{
  node* newnode=new node(data);
  node* tempnode=head;
  while(tempnode->add!=NULL)
  {
    tempnode=tempnode->add;
  }
  tempnode->add=newnode;
  tail=newnode;
  
}


void InsertatanyPosition(node* &head,node* &tail,int position,int data)
{
    node* newnode=new node(data);
    node* prevnode=head;
    int k=position-2;

   if(position==1)
   {
    InsertatBeg(head,data);
   } 
   else
   {
      while(k--)
      {
        prevnode=prevnode->add;
      }
      newnode->add=prevnode->add;
      prevnode->add=newnode;

      if(prevnode->add==NULL)
      {
        InsertatEnd(head,tail,data);
        return;
      }
    
   }
}




void Reverse(node* &head,node* curr,node* prev)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }
    node* forward=curr->add;
    Reverse(head,forward,curr);
    curr->add=prev;
}

node* ReverseLLRec(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    Reverse(head,curr,prev);
    return head;
}

void PrintLL(node* &head)
{
    node* temp1node;
    temp1node=head;
    while(temp1node!=NULL)
    {
        cout<<temp1node->data<<endl;
        temp1node=temp1node->add;
    }
}


int main()
{
    // node* a=new node(7);
    // node* head=a;
    // node* tail=a;

    // InsertatEnd(head,tail,9);
    // InsertatEnd(head,tail,21);
    // InsertatEnd(head,tail,14);
    // InsertatEnd(head,tail,28);
    // InsertatEnd(head,tail,35);
    // InsertatEnd(head,tail,49);

    node* a=new node(7);
    node* head=a;
    node* tail=a;
    InsertatanyPosition(head,tail,1,14);
    InsertatanyPosition(head,tail,2,21);
    InsertatanyPosition(head,tail,4,28);
    InsertatanyPosition(head,tail,5,35);
    PrintLL(head);
    cout<<"LL REVERSED "<<endl;
    // head=ReverseLL(head);
    head=ReverseLLRec(head);
    PrintLL(head);

    // PrintLL(head);

    // cout<<"DELETION STARED"<<endl;

    // DeleteFromEnd(head);
    // DeleteFromEnd(head);
    // DeleteFromEnd(head);

    // PrintLL(head);

    // cout<<SearchEltinLL(head,211);
  
}
