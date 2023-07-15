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

pair<int,bool> solve(node* root)
{
    if(root==NULL)
    {
        return make_pair(0,true);
    }

    if(root->left==NULL && root->right == NULL)
    {
        return make_pair(root->data,true);
    }

    pair<int,bool> leftans=solve(root->left);
    pair<int,bool> rightans=solve(root->right);

    if(leftans.second && rightans.second&&(root->data==leftans.first+rightans.first))
    {
        return make_pair(2*root->data,true);
    }
    else{
        return make_pair(leftans.first+rightans.first,false);
    }
}

int main()
{
  node* rootnode=NULL;
  rootnode =buildTree();
}