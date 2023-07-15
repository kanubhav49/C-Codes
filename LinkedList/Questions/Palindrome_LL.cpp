#include <iostream>
using namespace std;



  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow= slow->next;
        }

    

    if(slow== NULL)
    {
        cout << "List is Empty" << endl;
        return false;
    }

    ListNode* curr = slow;
    ListNode* prev = NULL;

    while(curr != NULL) {
        //to keep track of list ahead of curr
        ListNode* forward = curr -> next;
        //change curr link and connect it to prev node
        curr->next = prev;

        //aage badho
        prev = curr;
        curr = forward;
    }

    ListNode* temp1=head;
    ListNode* temp2=prev;

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->val!=temp2->val)
        {
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;

    }
     return true; 
}

};

int main()
{
    cout<<"Code for palindrome linked list is written above"<<endl;
}
