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

// FIRST METHOD TIME COMPLEXITY -> O(N2)

// bool balancedornot(node* &root)
// {
//   if(root==NULL)
//   {
//     return true;
//   }

//   bool leftans=balancedornot(root->left);
//   bool rightans=balancedornot(root->right);

//   bool diff=abs(height(root->left)-height(root->right)) <=1;
  
//   if(diff&&leftans&&rightans)
//   {
//     return true;
//   }

//   return false;

// }

//SECOND METHOD - BY ALTERING CODE OF HEIGHT A LITTLE BIT

    // bool isBalanced(TreeNode* root) {
    //     return dfsHeight (root) != -1;
    // }

    // int dfsHeight (TreeNode *root) {

    //     if (root == NULL) return 0;
        
    //     int leftHeight = dfsHeight (root -> left);

    //     if (leftHeight == -1) 
    //         return -1;
        
    //     int rightHeight = dfsHeight (root -> right);

    //     if (rightHeight == -1) 
    //         return -1;
        
    //     if (abs(leftHeight - rightHeight) > 1)  
    //         return -1;

    //     return max (leftHeight, rightHeight) + 1;
    // }

// THIRD METHOD -> PAIR WAALA -> O(N)

pair<int,bool> balancedornot(node* &root)
{
  if(root==NULL)
  {
    return make_pair(0,true);
  }

  pair<int,bool> leftans=balancedornot(root->left);
  pair<int,bool> rightans=balancedornot(root->right);

  int leftheight=leftans.first;
  int rightheight=rightans.first;
  bool diff=abs(leftheight-rightheight)<=1;
  
  bool leftbalanced=leftans.second;
  bool rightbalanced=rightans.second;

  if(leftbalanced&&rightbalanced&&diff)
  {
    return make_pair(max(leftheight,rightheight)+1,true );
  }

  else
  
  {
    return make_pair(max(leftheight,rightheight)+1,false);
  }

}

bool isbalanced(node* &root)
{ 
  pair<int,bool> ans=balancedornot(root);
  return ans.second; 
}

int main()
{
  node* rootnode=NULL;
  rootnode =buildTree();

  int ans = isbalanced(rootnode);
  cout<<endl;
  cout<< ans<<endl; 

}