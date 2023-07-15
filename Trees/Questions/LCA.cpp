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

node* LCA(node* &root,node* p,node* q)
{
  if(root==NULL)
  {
    return NULL;
  }

  if(root==p||root==q)
  {
    return root;
  }

  else{
    node* leftans = LCA(root->left,p,q);
    node* rightans = LCA(root->right,p,q);

    if(leftans!=NULL && rightans!=NULL)
    {
        return root;
    }

    else if(leftans==NULL)
    {
        return rightans;
    }

    else
    {
        return leftans;
    }

  }
}

int main()
{
  node* rootnode=NULL;
  rootnode =buildTree();
}