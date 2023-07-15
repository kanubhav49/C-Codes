int lengthofLL(Node* head)
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
