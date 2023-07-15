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

//Basic Approach
Node* Sort012(Node *head) {
        
        if(head==NULL)
        {
            return head;
        }
        
        int count0=0;
        int count1=0;
        int count2=0;
        
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                count0++;
            }
            else if(temp->data==1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
            temp=temp->next;
        }
        Node* curr=head;
        for(int i=0;i<count0;i++)
        {
            curr->data=0;
            curr=curr->next;
        }
        for(int j=0;j<count1;j++)
        {
            curr->data=1;
            curr=curr->next;
        }
        for(int k=0;k<count2;k++)
        {
            curr->data=2;
            curr=curr->next;
        }
        return head;
    }

    //By Changing Links
    Node* Sort0_1_2(Node* head)
    {
        //Algo

        //1 Create 3 dummyLL for each 0 1 2
        //2 Create lists
        //3 Attach them together and return head

        if(head==NULL)
        {
            return head;
        }
        Node* temp=head;
        Node* list0=new Node(-1);
        Node* dummy0=list0;
        int count0=0;
        Node* list1=new Node(-1);
        Node* dummy1=list1;
        int count1=0;
        Node* list2=new Node(-1);
        Node* dummy2=list2;
        int count2=0;

        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                dummy0->next=temp;
                dummy0=temp;
                count0++;
                temp=temp->next;
            }
            else if(temp->data==1)
            {
                dummy1->next=temp;
                dummy1=temp;
                count1++;
                temp=temp->next;
            }
            else
            {
                dummy2->next=temp;
                dummy2=temp;
                count2++;
                temp=temp->next;
            }
        }
        if(list1->next!=NULL)
        {
            dummy0->next=list1->next;
        }
        else{
            dummy0->next=list2->next;
        }
        dummy1->next=list2->next;
        dummy2->next=NULL;

        Node* ans=list0->next;
        return ans;
    }

    int main()
    {
    Node* a=new Node(7);
    Node* head=a;
    

    InsertatBeg(head,0);
    InsertatBeg(head,1);
    InsertatBeg(head,2);
    InsertatBeg(head,1);
    InsertatBeg(head,2);
    InsertatBeg(head,0);

    Sort012(head);
    print(head);
    cout<<endl;
    Sort0_1_2(head);
    print(head);
}