//
//  BiThrTree.cpp
//  data_structure
//
//  Created by ysp on 2018/6/14.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "BiThrTree.hpp"
#include <iostream>
using namespace std;

BiThrNode* BiThrTree::getRoot(){
    return this -> root;
}

void BiThrTree::input(){
    cout<<"请输入二叉树的结点"<<endl;
    createTree(root);
}

void BiThrTree::createTree(BiThrNode *&root){
    char c;
    cin >> c;
    if(c == '#'){
        root = NULL;
    }else{
        root = new BiThrNode(c);
        createTree(root -> leftChild);
        createTree(root -> rightChild);
    }
}
BiThrNode *pre;
void BiThrTree::InThreading(BiThrNode *root){
    if(root){
        
        InThreading(root -> leftChild);
        if(!root -> leftChild){
            //没有左孩子 LTag = 1
            root -> LTag = 1;
            root -> leftChild = pre;
        }
        if(pre != NULL && !pre -> rightChild){
            pre -> Rtag = 1;
            pre -> rightChild = root;
        }
        pre = root;
        InThreading(root -> rightChild);
    }
  
}




void BiThrTree::InOrderTraverse_Thr(BiThrNode *root){
    while (root) {
        while(root -> LTag == 0){
            root = root -> leftChild;
        }
        cout << root -> ch << endl;
        while (root -> Rtag == 1 && root -> rightChild) {
                root = root -> rightChild;
                cout << root -> ch << endl;
        }
        root = root -> rightChild;
    }
}
