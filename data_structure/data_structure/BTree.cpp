//
//  BTree.cpp
//  data_structure
//
//  Created by ysp on 2018/6/7.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "BTree.hpp"
#include <iostream>
using namespace std;

void BTree::createTree(TreeNode *&root){
    char c;
    cin >> c;
    if(c == '#'){
        root = NULL;
    }else{
        root = new TreeNode(c);
        createTree(root -> leftChild);
        createTree(root -> rightChild);
    }
}

void BTree::input(){
    cout<<"请输入二叉树的结点"<<endl;
    createTree(root);
}

void BTree::printTree(TreeNode *root){
    if(root != NULL){
        cout << root -> ch << " ";
    }
    if(root->leftChild!=NULL||root->rightChild!=NULL)
    {
        cout<<"(";
        if(root->leftChild!=NULL)
        {
            printTree(root->leftChild);
        }
        cout<<",";
        if(root->rightChild!=NULL)
        {
            printTree(root->rightChild);
        }
        cout<<")";
    }
}

int BTree::solveHeight(TreeNode *root){
    if(root == NULL){
        return 0;
    }else{
        int u = solveHeight(root -> leftChild);
        int v = solveHeight(root -> rightChild);
        return u > v? u + 1 : v + 1;
    }
}

int BTree::computerLeaf(TreeNode *root){
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        if(root->leftChild==NULL&&root->rightChild==NULL)
        {
            return 1;
        }
        else
        {
            return computerLeaf(root->leftChild)+computerLeaf(root->rightChild);
        }
    }
}

void BTree::parent(TreeNode *root,char c)
{
    if(root)
    {
        if((root->leftChild!=NULL&&root->leftChild->ch==c)||(root->rightChild!=NULL&&root->rightChild->ch==c))
        {
            cout<<root->ch;
        }
        parent(root->leftChild,c);
        parent(root->rightChild,c);
    }
}

void BTree::output()//输出二叉树的各种信息
{
    cout<<"递归输出二叉树"<<endl;
    printTree(root);
    cout<<endl;
    cout<<"输出树的高度"<<endl;
    cout<<solveHeight(root)<<endl;
    cout<<"请输入元素，求出该元素的双亲"<<endl;
    char c;
    cin>>c;
    parent(root,c);
    cout<<endl;
    cout<<"输出二叉树的叶子数"<<endl;
    cout<<computerLeaf(root)<<endl;
    
}



