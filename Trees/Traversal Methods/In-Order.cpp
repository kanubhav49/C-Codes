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

void preorder(node* &root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<endl;
  preorder(root->left);
  preorder(root->right);

}

void inorder(node* &root)
{
  if(root==NULL)
  {
    return;
  }
  inorder(root->left); 
  cout<<root->data<<endl;
  inorder(root->right);

}

int main()
{
  node* rootnode=NULL;
  rootnode =buildTree();
  cout<<endl;

  inorder(rootnode);

}