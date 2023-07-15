#include <iostream>
using namespace std;

class node{
public:
int data;
node* left;
node* right;

node(int d)
{
  data = d;
  left=NULL;
  right=NULL;
}

};

node* buildTree()
{
   cout<<"Enter the value of data"<<endl;
   int data;
   cin>>data;

    if(data==-1)
   {
    return NULL;
   }

   node* newnode=new node(data);

   cout<< "Enter the data for left child "<<endl;
   newnode->left=buildTree();

   cout<< "Enter the data for right child "<<endl;
   newnode->right=buildTree();
   return newnode;
   
}

bool solve(node* a,node* b)
{
    if(a==NULL&&b==NULL)
    {
        return true;
    }

    else if(a!=NULL&&b==NULL)
    {
        return false;
    }

    else if(b!=NULL&&a==NULL)
    {
      return false;
    }

    else 
    {
        if((a->data)==(b->data))
        {
            return true;
        }
        else
        {
           return false;
        }
        
    }

    return solve(a->left,b->right)&&solve(a->right,b->left);
}

bool SymmetricTree(node* root)
{
   if(root==NULL)
   {
    return true;
   }
   return solve(root->left,root->right);
}

int main()
{
  node* rootnode=NULL;
  rootnode =buildTree();

  int ans = SymmetricTree(rootnode);
  cout<<ans<<endl;
  
}