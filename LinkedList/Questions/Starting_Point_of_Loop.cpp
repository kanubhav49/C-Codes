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

//Hashmap Approach 

int findFirstNode(Node* head)
    {
        if(head==NULL||head->next==NULL)
            return -1;
       unordered_map<Node*,int> map;
       while(head!=NULL)
       {
           if(map.count(head)>0)
           {
               return head->data;
           }
           else{
               map[head]=1;
               head=head->next;
           }
           
       }
       return -1;
    }

//Floyd's Cycle Detection Algo

//      ListNode* detectCycle(ListNode* head)
//  {
//         if (head == NULL || head->next == NULL)
//             return NULL;
    
//         ListNode *slow  = head;
//         ListNode *fast  = head;
//         ListNode *entry = head;

//         while (fast->next && fast->next->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if (slow == fast) 
//             {                                        // there is a cycle
//                 while(slow != entry) 
//                 {                                    // found the entry location
//                     slow  = slow->next;
//                     entry = entry->next;
//                 }
//                 return entry;
//             }
//         }
//         return NULL;      
//     }
    

    int main()
    {
        cout<<"2 Approaches for the Question" <<endl;
    }