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
    BSTNode *p = NULL, *q;
    q = this -> root;
    if(!search(key, p)){
        BSTNode *r = new BSTNode();
        r -> data = key;
        if(q == NULL){
            this -> root = r;
            return true;
        }
        if(p && key < p -> data){
            p -> left = r;
            return true;
        }else if (p && key > p -> data){
            p -> right = r;
            return true;
        }
    }
    return false;
}

bool BST::search(int key, BSTNode *&p){
    BSTNode *q = NULL;
    q = this -> root;
    while(q){
        //当前结点
        //p为插入操作提供方便
        p = q;
        if(q -> data == key){
            return true;
        }else if (q -> data > key){
            q = q -> left;
        }else{
            q = q -> right;
        }
    }
    return false;

}

bool BST::deleteBST(int key){
    BSTNode *f,*p,*q,*s;
    p = this -> root;
    f = NULL;
    while(p && p -> data != key){
        f = p;
        if(p -> data > key){
            p = p -> left;
        }else{
            p = p -> right;
        }
    }
    if(!p){
        return false;
    }
    if(!p -> left){
        if(!f){
            this -> root = p -> right;
        }else if (f -> left == p){
            f -> left = p -> right;
        }else{
            f -> right = p -> right;
        }
        delete p;
    }else if(!p -> right){
        if(!f){
            this -> root = p -> left;
        }else if(f -> left == p){
            f -> left = p -> left;
        }else{
            f -> right = p -> left;
        }
    }
    else{
        q = p;
        s = p -> left;
        //s最终为直接前驱结点
        while(s -> right){
            q = s;
            s = s -> right;
        }
        if(q == p){
            //p == q 则说明while没有走，说明s就是直接前驱，直接删掉s结点，并将s的左子树全部给到p
            q -> left = s -> left;
        }else{
            q -> right = s -> left;
        }
        p -> data = s -> data;
        delete s;
    }
    return true;
}
