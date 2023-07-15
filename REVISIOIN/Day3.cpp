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

//BALANCED OR NOT -> 3 Ways
//                1.->Brute  force (definition based)
//                2.->By altering height waala code
//                3.->pair waala method

//1.Brute Force

bool BalancedOrNot()
{
    
}