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

void removeLoop(Node* head)
    {
      Node *temp=head,*prev=NULL;
      unordered_map<Node*,bool>mp;
      while(temp!=NULL){
          if(mp[temp]==true){
              prev->next=NULL;
              break;
          }
          mp[temp]=true;
          prev=temp;
          temp=temp->next;
      }
    }

int main()
{
    cout<<"Unordered Map Approach for deleting loop/cycle in LL"<<endl;
}