#include<iostream>
using namespace std;

/*
          1
        /  \
       2    3
      / \  / \
     4   5 6  7

*/
//Preorder Traversal
// 1 2 4 5 3 6 7

class node
{
    public:
    int data;
    node* right;
    node* left;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

//void InsertRight(node* &root,int val)
//{
//    node* n=new node(val);
//    if(root==NULL)
//    {
//        root=n;
//        return ;
//    }
//    node* temp=root;
//    while(temp->right!=NULL)
//    {
//        temp=temp->right;
//    }
//    temp->right=n;
//}
//
//void InsertLeft(node* &root,int val)
//{
//    node* n=new node(val);
//    if(root==NULL)
//    {
//        root=n;
//        return ;
//    }
//
//    node* temp=root;
//    while(temp->left!=NULL)
//    {
//        temp=temp->left;
//    }
//
//    temp->left=n;
//}

void PreOrder(node* root)
{
    if(root==NULL)
    return ;

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}


int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    PreOrder(root);
    //InsertLeft(root,1);
    //InsertLeft(root,2);
    //InsertLeft(root,3);
    //InsertRight(root,)

    return 0;
}