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

int height(node* &root)
{
  if(root==NULL)
  {
    return 0;
  }
  return max(height(root->left),height(root->right)) + 1;
}

int diameter(node* &root)
{
  if(root==NULL)
  {
    return 0;
  }
    
    int option1=diameter(root->left);
    int option2=diameter(root->right);
    int option3=1+height(root->right)+height(root->left);
    return max(option1,max(option2,option3));
}
 
int diameteroftree(node* &root)
{
  if(root==NULL)
  {
    return 0;
  }

  return diameter(root)-1;
}

int main()
{
  node* rootnode=NULL;
  rootnode =buildTree();

  int ans = diameteroftree(rootnode);
  cout<<ans<<endl;
}