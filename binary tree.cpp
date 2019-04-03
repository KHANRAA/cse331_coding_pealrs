//
// Created by AKASH KHANRA on 2019-01-30.
///////// to be add via photoes
#include <iostream>
#include <queue>
using namespace std;

struct node{
    int data;
    node *left,*right;
};

 node *newNode(int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

void inorder(node *root)
{
     if(root==NULL)
         return;
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
}
/*

void insertion(node *root, int data)
{

     queue<node*>q;
     q.push(root);
     while(!q.empty())
     {
         node *curr=q.front();
         q.pop();
         if(curr->left==NULL)
         {
             curr->left=newNode(data);
             break;
         }else
             q.push(curr->left);
        // if(curr)
     }



}

*/
void preorder(node *node)
{
     if(node==NULL)
         return;
     cout<<node->data<<endl;
     preorder(node->left);
     preorder(node->right);
}
/*
void postorder(node *node)
{
     if(node==NULL)
         return;
         postorder(node->left);
         postorder(node->right;
         cout<<node->data<<" ";

}
*/
void  delNode(node *node,int key) {
    int m = key;
    if (node == NULL)
        return;
    else if (node->data == key) {

        node->data = node->right->data;
    } else {
        delNode(node->left, m);
        delNode(node->right, m);
    }
}





int main()
{

     node *root=newNode(1);
     root->left=newNode(2);
     root->right=newNode(3);
     root->left->left=newNode(4);
     root->left->right=newNode(5);
     preorder(root);
     cout<<"after test"<<endl;
     int key;
     cin>>key;
     delNode(root,key);
     preorder(root);

     /*
      *
    while(1)
    {
        cout<<"1:Insert\n2:Deletion\n3:Search\n";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"-------Inserting DATA------"<<endl;
                cout<<"     1:Left ---> 2:Right"<<endl;
                int ch1;
                cin>>ch1;
                if(ch1==1)
                {
                    int a;
                    a=new *node;
                    cin>>a.
                    node.


                    break;
                }
                else if(ch==2)
                {

                    break;
                }
                else
                break;
            case 2:
                cout<<"-------DELETION------"<<endl;
                break;


            case 3:
                cout<<"-------_traverse--------"<<endl;
                view;
        }
    }
*/
    return  0;
}