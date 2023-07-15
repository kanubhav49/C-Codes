// SINGLY LINKED LIST

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

bool SearchEltinLL(node* &head,int key)
{
   node* temp=head;
   while(temp!=NULL)
   {
    if(temp->data==key)
    {
        cout<<temp->data<<endl;
      return true;
    }
    temp=temp->add;
   }
   return false;
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

//REVERSE A LL


node* ReverseLL(node* &head)
{

    if(head == NULL)
    {
        cout << "List is Empty" << endl;
        return head;
    }

  node* curr=head;
  
  node* prev=NULL;

  while(curr!=NULL)
  {
    node* forward=curr->add;
    curr->add=prev;
    prev=curr;
    curr=forward;
  }

  return prev;

}

//REVERSE A LL USING RECURSION

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


void DeletefromBeg(node* &head)
{
    node* tempnode=head;
    head=head->add;
}

void DeleteFromEnd(node* &head)
{
    node* prev=NULL;
    node* temp=head;
    while(temp->add!=NULL)
    {
        prev=temp;
        temp=temp->add;
    }
    prev->add=NULL;
}

void MiddleofLL(node* head)
{


  node* temp=head;
  int count=0;
  while(temp!=NULL)
  {
    count++;
    temp=temp->add;
  }

  if(count==1)
   {
    cout<<head->data;
   }

  else
  {
    node* middle=head;
    int k=(count/2);
    while(k--)
    {
      middle=middle->add;
    }
    cout<<middle->data;
  }
 

}

void DeletefromanyPosition(node* &head,node* &tail,int position)
{
 if(position==1)
 {
    DeletefromBeg(head);
 }
 
 else{
    
        node* prev=head;
        int k=position-2;
        while(k--)
        {
            prev=prev->add;
        }
        prev->add=prev->add->add;
        
    
    if (prev->add == NULL) {
      tail = prev;
    }
 }

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
    InsertatanyPosition(head,tail,6,49);

    // PrintLL(head);
    // cout<<"LL REVERSED "<<endl;
    // head=ReverseLL(head);
    // head=ReverseLLRec(head);
    // PrintLL(head);

    MiddleofLL(head);

    // PrintLL(head);

    // cout<<"DELETION STARED"<<endl;

    // DeleteFromEnd(head);
    // DeleteFromEnd(head);
    // DeleteFromEnd(head);

    // PrintLL(head);

    // cout<<SearchEltinLL(head,211);
  
}

// DOUBLY LINKED LIST

// #include <iostream>
// using namespace std;

// class Node
// {
//   public:
//     int data;
//     Node* next;
//     Node* prev;

//   //constructor called
//   Node(int data)
//   { 
//     this->data=data;
//     next=NULL;
//     prev=NULL;
//   }

// };

// void InsertatBeg(Node* &head,int data)
// {
//     Node* newnode=new Node(data);
//     head->prev=newnode;
//     newnode->next=head;
//     head=newnode;
// }

// Node* ReverseaDoublyLL(Node* &tail,Node* &head)
// {
  
// }

// void InsertatEnd(Node* &head,Node* &tail,int data)
// {
//   Node* newnode=new Node(data);
//   Node* tempnode = head;
//   while(tempnode->next!=NULL)
//   { 
//     tempnode=tempnode->next;
//   }
//   tempnode->next=newnode;
//   newnode->prev=tempnode;
//   tempnode=newnode;
//   tail=newnode;
// }

// void InsertatanyPosition(Node* &head,Node* &tail,int pos,int data)
// {
//    if(pos==1)
//    {
//       InsertatBeg(head,data);
//    }
//    else{
//     Node* temp=head;
//     Node* newnode=new Node(data);
//     int k=pos-2;
//     while(k--)
//     {
//       temp=temp->next;
//     }
     
//     newnode->next=temp->next;
//     newnode->prev=temp;
//     temp->next=newnode;

//     if(temp->next==NULL)
//     {
//         InsertatEnd(head,tail,data);
//         return;
//     }
//    }
// }

// Reversing our double linked list
// void reverse(node*&head)
// {
//     node*temp = NULL;
//     node*curr = head;
   
//     /* swap next and prev for all nodes of
//     doubly linked list */
//     while (curr != NULL)
//     {
//         temp = curr->prev;
//         curr->prev = curr->next;
//         curr->next = temp;          
//         curr = curr->prev;
//     }
 
   
//     //Edge case if our linked list is empty Or list with only one node
//     if(temp != NULL )
//         head = temp->prev;
// }

// void PrintLL(Node* &head)
// {
//    Node* temp=head;
//    while(temp!=NULL)
//    {
//     cout<<temp->data<<endl;
//     temp=temp->next;
//    }
// }

// int main()
// {
//     Node* a=new Node(7);
//     Node* head=a;
//     Node* tail=a;
 
//     InsertatanyPosition(head,tail,1,14);
//     InsertatanyPosition(head,tail,2,21);
//     InsertatanyPosition(head,tail,4,28);
//     InsertatanyPosition(head,tail,5,35);

//     PrintLL(head);
    
    

// }


