#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class treenode
{
    public:
    int data;
    treenode* right;
    treenode* left;

    treenode(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

//CREATING A TREE
treenode* BuildTree()
{
    cout<<"Enter the value of node : "<<endl;
    int data;
    cin >> data;

    if(data==-1)
   {
    return NULL;
   }

    treenode* newnode = new treenode(data);

    cout<<"Enter the value of left child : "<<endl;
    newnode->left = BuildTree();

    cout<<"Enter the value of right child : "<<endl;
    newnode->right = BuildTree();

    return newnode;
}

int height(treenode* &root)
{
  if(root==NULL)
  {
    return 0;
  }
  return max(height(root->left),height(root->right)) + 1;
}

//Minimum Depth of a BinaryTree

int MinDepth(treenode* root)
{
    //base case
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL||root->right==NULL)
    {
      return 1+MinDepth(root->left)+MinDepth(root->right);
    }
    else
    {
      return 1+min(MinDepth(root->left),MinDepth(root->right));
    }
    
}

int main()
{
    treenode* root;
    root=BuildTree();
    int ans=MinDepth(root);
    cout<<"Answer is : "<<ans<<endl;
}