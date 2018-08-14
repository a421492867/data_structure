//
//  AVL.cpp
//  data_structure
//
//  Created by ysp on 2018/8/14.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "AVL.hpp"
#include <iostream>
using namespace std;
void AVL::r_rotate(AVLNode *p){
    AVLNode *l = new AVLNode();
    l = p -> left;
    p -> left = l -> right;
    l -> right = p;
    p = l;
}

void AVL::l_rotate(AVLNode *p){
    AVLNode *r = new AVLNode;
    r = p -> right;
    p -> right = r -> left;
    r -> left = p;
    p = r;
}

void AVL::leftBalance(AVLNode *t){
    
}

void AVL::rightBalance(AVLNode *t){
    
}

bool AVL::insert(int data){
    
    return true;
}
