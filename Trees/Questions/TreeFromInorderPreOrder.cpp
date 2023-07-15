#include <iostream>
#include <queue>
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
  preorder(root->left); 
  cout<<root->data<<endl;
  preorder(root->right);

}

void postorder(node* &root)
{
  if(root==NULL)
  {
    return;
  }
  preorder(root->left);
  preorder(root->right);
  cout<<root->data<<endl;
}

void lvlOrderTraversal (node* root) 
{

    queue<node*> q;
    q.push(root);
    //change no. 1
    q.push(NULL);

    while(!q.empty()) {
        //tu nikal
        node* front = q.front();
        q.pop();
        if(front == NULL) {
            cout << endl;
            //catch here
            if(!q.empty())//still elements are present
                q.push(NULL);
        }
        else{
            cout << front->data << " ";

            //bache chor jaio
            if(front->left != NULL)
                q.push(front->left);
            if(front->right != NULL)
                q.push(front->right);
        }
    }
}

int position(vector<int> in, int key, int s, int e) {
    for(int i=s; i<=e; i++) 
    {
        if(in[i] == key)
            return i;
    }
    return -1;
}
node* buildFromInorderPreorder(vector<int> in, vector<int> preorder, 
                int &preOrderIndex, int inStart, int inEnd) {
    
    //Base case
    if(preOrderIndex == preorder.size() || inStart > inEnd) {
        return NULL;
    }

    int element = preorder[preOrderIndex++];
    node* root = new node(element);

    //search element in inorder array
    int pos = position(in, element, inStart, inEnd);
    root -> left = buildFromInorderPreorder(in, preorder, preOrderIndex, inStart, pos-1);
    root -> right = buildFromInorderPreorder(in, preorder, preOrderIndex, pos+1, inEnd);
    return root;
}

int main()
{
  vector<int> inorder = {3,1,4,0,5,2};
  vector<int> preorder = {0,1,3,4,2,5};
  int index = 0;
  node* root = buildFromInorderPreorder(inorder,preorder,index,0,5);
  lvlOrderTraversal(root);
}