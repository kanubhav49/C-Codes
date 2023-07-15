#include <iostream>
#include <vector>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        left=NULL;
        right=NULL;
    }
};

//building BST
node* buildBST(node* &root,int data)
{
    if(root==NULL)
    {
        node* temp=new node(data);
        return temp;
    }
    if(data>root->data)
    {
        root->right=buildBST(root->right,data);
    }
    if(data<root->data)
    {
        root->left=buildBST(root->left,data);
    }
    return root;
}


//Creating BST
void BSTCreation(node* &root)
{
    cout<<"Enter the data for root"<<" ";
    int data;
    cin >> data;

    if(data==-1)
    {
        return;
    }
    while(data!=-1)
    {
        root=buildBST(root,data);
        cout<<"Enter the next data"<<" ";
        cin >>data;
    }

}

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


//3 Methods to Do this Question

//M-1 -> range check krna

bool CheckBST(node* &root,long long int min,long long int max)
{
    //base case
    if(root==NULL)
    {
        return true;
    }
    if(root->data>min && root->data<max)
    {
        bool left=CheckBST(root->left,min,root->data);
        bool right=CheckBST(root->right,root->data,max);
        return right&&left;
    }
    return false;
}

//M-2 -> Inorder Travesal krke array mei store krana and then checking whether the array is sorted or not

// vector<int> nodes;
//     void inorder(TreeNode* root) 
//     {
//         if (root->left) inorder(root->left);
//         nodes.push_back(root->val);
//         if (root->right) inorder(root->right);
//     }
//     bool isValidBST(TreeNode* root) {
//         inorder(root);
//         for (int i = 0; i < nodes.size() - 1; i++) {
//             if (nodes[i] >= nodes[i+1]) return false;
//         }
//         return true;
//     }


//M-3 -> Inorder Traversal krna but without storing in array rather comparing with previous element

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


bool CheckBST(node* &root)
{
    if(root==NULL)
    {
        return true;
    }
    long long int ans = -2147483648;
    

}

int main()
{
    //Method - 1

    // node* root=NULL;
    // BSTCreation(root);
    // node* root=buildTree();
    // long long int max = 2147483647;
    // long long int min = -2147483648;
    // int ans1 = CheckBST(root,min,max);
    // int ans2 = CheckBST(root,min,max);
    // cout<<endl;
    // cout<<ans1<<endl;
    // cout<<ans2<<endl;

    //Method - 2

    node* root=NULL;
    BSTCreation(root);
    int ans1=CheckBST(root);
    cout<<ans1;
    
}