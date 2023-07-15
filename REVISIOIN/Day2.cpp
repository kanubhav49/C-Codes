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

//TRAVERSING NODES :-
//1.PRE-ORDER -> NLR
//2.IN-ORDER -> LNR
//3.POST-ORDER -> LRN
//4.LEVEL-ORDER
//5.MANY OTHER WAYS ALSO

//PRE-ORDER TRAVERSAL
void preorder(treenode* rootnode)
{
  if(rootnode == NULL)
  {
    return;
  }
  else
  {
    cout<<rootnode->data<<endl;
    preorder(rootnode->left);
    preorder(rootnode->right);
  }
}

//SIMILARLY FOR 2. AND 3.

//LEVEL-ORDER

vector<vector<int>> levelorder(treenode* rootnode)
{
  vector<vector<int>> ans;
  if(rootnode==NULL)
  {
    return ans;
  }
  queue<treenode*> q;
  q.push(rootnode);

  while(!q.empty())
  {
    int size = q.size();
    vector<int> level;
    for(int i=0;i<size;i++)
    {
      treenode* NODE = q.front();
      q.pop();
      if(NODE->left!=NULL)
      {
        q.push(NODE->left);
      }
      if(NODE->right!=NULL)
      {
        q.push(NODE->right);
      }
      level.push_back(NODE->data);
    }
    ans.push_back(level);
    
  }
return ans;
}

//HEIGHT OF A TREE
//can be done using 2 ways -> level order traversal
//                         -> recursive approach

//Recursive approach

int height(treenode* &rootnode)
{
  if(rootnode==NULL)
  {
    return 0;
  }
  return 1+max(height(rootnode->left),height(rootnode->right));
}

bool solve(treenode* a,treenode* b)
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

bool SymmetricTree(treenode* root)
{
   if(root==NULL)
   {
    return true;
   }
   return solve(root->left,root->right);
}

//DIAMETER OF A TREE

int diameter(treenode* &root)
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
 
int diameteroftree(treenode* &root)
{
  if(root==NULL)
  {
    return 0;
  }

  return diameter(root)-1;
}


 
int main()
{
  //POST-ORDER PRE-OREDR IN-ORDER

  //  treenode* rootnode;
  //  rootnode=BuildTree();
  //  preorder(rootnode);

  //LEVEL ORDER

  // treenode* root;
  // root=BuildTree();
  // vector<vector<int>> answer = levelorder(root);
  //   for(int j=0;j<answer.size();j++)
  //   {
  //     for(auto it = answer[j].begin();it != answer[j].end(); it++)
  //     {
  //       cout << *it <<" ";
  //     }
  //     cout << endl;
  //   }

  //HEIGHT OF A TREE

  // treenode* rootnode;
  // rootnode=BuildTree();
  // int ans=height(rootnode);
  // cout<< "Height of input tree is : "<<ans<<endl;

  //SYMMETRIC OR NOT 

  // treenode* root1;
  // root1=BuildTree();
  // bool ans1 = height(root1);

  //SIMILARLY FOR DIAMETER OF TREE

  //BALANCED OR NOT

  

}