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
//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    if(head==NULL||head->next==NULL)
        {
            return 0;
        }
        bool ans= detectLoop(head);
        if(ans)
        {
            unordered_map<Node*,int> map;
            while(map[head]<2)
            {
                map[head]++;
                head=head->next;
            }
            int count=0;
            for(auto maps:map)
            {
                if(maps.second==2)
                {
                    count++;
                }
            }
            return count;
        }
        
        else {
            return 0;
        }
}

int main()
{
    cout<<"Approach to count nodes in loop"<<endl;
}
