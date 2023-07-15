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
    cout<<"Enter the data for root";
    int data;
    cin >> data;

    if(data==-1)
    {
        return ;
    }
    while(data!=-1)
    {
        root=buildBST(root,data);
        cout<<"Enter the next data";
        cin >>data;
    }

}

int main()
{
    node* root=NULL;
    BSTCreation(root);
}
