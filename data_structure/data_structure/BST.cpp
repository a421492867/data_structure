//
//  BST.cpp
//  data_structure
//
//  Created by ysp on 2018/8/9.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "BST.hpp"
#include <iostream>
using namespace std;
bool BST::insert(int key){
    return true;
}

bool BST::search(BSTNode *root, int key, BSTNode parent, BSTNode *node){
    if(!root){
        *node = parent;
        return false;
    }else if (key == root -> data){
        node = root;
        return true;
    }else if (key < root -> data){
        search(root -> left, key, *root, node);
    }else{
        search(root -> right, key, *root, node);
    }
    return false;

}

bool BST::deleteBST(int key){
    return true;
}
void BST::preOrder(BSTNode *root){
    if(this -> root == NULL){
        return;
    }
    cout << this -> root -> data << endl;
    preOrder(this -> root -> left);
    preOrder(this -> root -> right);
}

BSTNode* BST::getRoot(){
    return this -> root;
}
