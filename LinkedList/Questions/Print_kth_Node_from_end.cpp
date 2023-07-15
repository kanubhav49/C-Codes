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

// int lengthofLL(Node* head)
//     {
//         int count=0;
//         Node *tempo=head;
//         while(tempo->next!=nullptr)
//         {
//             count++;
//             tempo=tempo->next;
//         }
//         return count+1;
//     }
    
//     int getNthFromLast(Node *head, int n)
//     {
//         if(head==NULL)
//         {
//             return -1;
//         }
//         else if(n>lengthofLL(head))
//         {
//             return -1;
//         }
//         Node* fast=head;
//         Node* slow=head;
//         while(n>0)
//         {
//             fast=fast->next;
//             n--;
//         }
//         while(fast!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next;
//         }
//         return slow->data;
//     }

  //Recursive Approach

  int getNthFromLast(Node* head,int k)
  {
    if(head==NULL)
    {
      return 0;
    }
    int cnt=getNthFromLast(head->next,k)+1;
    if(cnt==k)
    {
       cout<<head->data<<endl;
    }
    return cnt;
  }

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
  getNthFromLast(head,3);
}
