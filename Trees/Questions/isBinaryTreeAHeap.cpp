#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node
{
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

int countnode(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ans=1+countnode(root->left)+countnode(root->right);
    return ans;
}

bool isMaxOrder(node* root)
{
    //leaf node
    if(root->left==NULL&&root->right==NULL)
    {
        return true;
    }
    //right part null
    if(root->right==NULL)
    {
        return root->left->data<root->data;
    }
    else
    {
        return root->data>root->right->data&&root->data>root->left->data&&isMaxOrder(root->left)&&isMaxOrder(root->right);
    }

}

bool isCompleteBinaryTree(node* root,int i,int totalcount)
{
    if(root==NULL)
    {
        return true;
    }
    if(i>totalcount)
    {
        return false;
    }
    else
    {
        bool left=isCompleteBinaryTree(root->left,2*i+1,totalcount);
        bool right = isCompleteBinaryTree(root->right,2*i+2,totalcount);
        return right&&left;
    }
}

bool isHeap(node* root)
{
    int index=0;
    int totalCount=countnode(root);
    if(isCompleteBinaryTree(root,index,totalCount)&&isMaxOrder(root))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    node* rootnode=NULL;
  rootnode =buildTree();

  bool ans = isHeap(rootnode);
  cout<<endl;
  cout<< ans<<endl; 
}
