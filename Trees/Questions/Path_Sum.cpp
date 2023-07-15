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

bool haspathsum(node* &root,int target)
{
 if(root==NULL)
 {
    return false; 
 }
 
 if(root->data==target && root->left==NULL&& root->right==NULL)
 {
    return true;
 }

 bool leftans=haspathsum(root->left,target-root->data);
 bool rightans=haspathsum(root->right,target-root->data);

 return leftans||rightans; 

}



int main()
{
  node* rootnode=NULL;
  rootnode =buildTree();

  int ans=haspathsum(rootnode,22);
  cout<<endl;
  cout<<ans<<endl;
}