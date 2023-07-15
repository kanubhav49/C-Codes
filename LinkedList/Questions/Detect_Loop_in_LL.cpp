#include <iostream>
#include <unordered_map>
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

//Floyd's Cycle Detection Algo
 bool hasCycle(Node *head) 
 {
      if(head==NULL||head->next==NULL)
      {
          return false;
      }
      Node* fast=head;
      Node* slow=head;

      while(fast->next && fast->next->next)
      {
          fast=fast->next->next;
          slow=slow->next;
          if(fast==slow)
          {
              return true;
          }
      }
      return false;
}

//Hashmap using Approach

bool detectLoop(Node* head)
    {
        if(head==NULL)
            return false;
       unordered_map<Node*,int> map;
       while(head!=NULL)
       {
           if(map.count(head)>0)
           {
               return true;
           }
           else{
               map[head]=1;
               head=head->next;
           }
           
       }
       return false;
       
    }

    int main()
    {
        cout<<"2 Approaches for Detect cycle/loop in LL"<<endl;
    }