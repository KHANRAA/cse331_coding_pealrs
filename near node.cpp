//
// Created by AKASH KHANRA on 2019-02-13.
//
#include <iostram>
using namespace std;

#include <queue>
struct node{
    int data;
    node *left,*right;
};

node* newNode(int data){
    node *newnode=new node;
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;

};


void printancestors(node *root,int val;int k)
{
    queue<node *> q;
    q.push(root);
    a[root->data]=-1;
    while(!q.empty())
    {
        node *curr=q.front();
        q.pop();
        if(curr->left)
    {
            a[curr->left->data]=curr->data;
            q.push(curr->left);
    }
        if(curr->right)
    {
        a[curr->right->data]=curr->data;
        q.push(curr->right);
    }
        int ent=0;
        while(!=-1)
    {
            val=a(val);
            if(++cnt==k)
                break;
    }
        cout<<val;
    }
}



int main() {
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printancestors(root,2)

return 0;
}