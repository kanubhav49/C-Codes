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

void InsertatBeg(Node* &head,int data)
{
   Node* newnode=new Node(data);
   newnode->next=head;
   head=newnode;
}

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

Node* Merge2SortedLL(Node* list1,Node* list2)
{
    if(list1==NULL&&list2==NULL)
        {
            return NULL;
        }
        else if(list1==NULL)
        {
            return list2;
        }
        else if(list2==NULL)
        {
            return list1;
        }
        else
        {
            Node* dummyLL=new Node(-1);
            Node* ans=dummyLL;
            Node* temp1=list1;
            Node* temp2=list2;
            while(temp1!=NULL&&temp2!=NULL)
            {
                if(temp1->data<=temp2->data)
                {
                    ans->next=temp1;
                    ans=temp1;
                    temp1=temp1->next;
                }
                else
                {
                    ans->next=temp2;
                    ans=temp2;
                    temp2=temp2->next;
                }
            }
            while(temp2!=NULL)
            {
                ans->next=temp2;
                ans=temp2;
                temp2=temp2->next;
            }
            while(temp1!=NULL)
            {
                ans->next=temp1;
                ans=temp1;
                temp1=temp1->next;
            }
            Node* head=dummyLL->next;
            dummyLL->next=NULL;
            return head;
        }
}

int main()
{
    Node* a=new Node(7);
    Node* head=a;
    InsertatBeg(head,5);
    InsertatBeg(head,3);
    InsertatBeg(head,1);
    
    Node* b=new Node(10);
    Node* head2=b;
    InsertatBeg(head2,9);
    InsertatBeg(head2,8);
    InsertatBeg(head2,6);
    InsertatBeg(head2,4);
    

    Node* ans=Merge2SortedLL(head,head2);
    print(ans);

}