//
// Created by AKASH KHANRA on 2019-02-13.
//

#include <iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
};

node* newNode(int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->left=newnode->right=NULL;

}


int main()
{




}