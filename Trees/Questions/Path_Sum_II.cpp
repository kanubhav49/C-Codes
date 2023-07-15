#include <iostream>
using namespace std;

// int count=0; "count" cant  be used globally

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



int counter = 0;

void solve(node* root,int target,long long int sum)
{
  if(root==NULL)
  {
    return;
  }

  if(target==sum)
  {
   counter++;
  }

  if(root->left!=NULL)
  {
    solve(root->left,target,sum+root->left->data);
  }

  if(root->right!=NULL)
  {
    solve(root->right,target,sum+root->right->data);
  }
}

int pathSum(node* &root,int targetsum)
{
  if(root==NULL)
  {
    return 0;
  }

  solve(root,targetsum,root->data);

  pathSum(root->left,targetsum);
  pathSum(root->right,targetsum);
  return counter;
}

int main()
{
  node* rootnode=NULL;
  rootnode =buildTree();
} 