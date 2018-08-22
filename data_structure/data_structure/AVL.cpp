//
//  AVL.cpp
//  data_structure
//
//  Created by ysp on 2018/8/14.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#define LH +1   //左高
#define EH 0    //等高
#define RH -1   //右高
#include "AVL.hpp"
#include <iostream>
using namespace std;
void AVL::r_rotate(AVLNode *p){
    //p为当前最小不平衡树的根
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
    AVLNode *l, *lr;
    l = t -> left;
    switch (l -> bf) {
        case LH:
            t -> bf = l -> bf = EH;
            r_rotate(t);
            break;
        case RH:
            lr = l -> right;
            switch (lr -> bf) {
                case LH:
                    t -> bf = RH;
                    l -> bf = EH;
                    
                    break;
                case EH:
                    t -> bf = l -> bf = EH;
                    break;
                
                    
                case RH:
                    t -> bf = EH;
                    l -> bf = LH;
                    break;
            }
            lr -> bf = EH;
            l_rotate(t -> left);
            r_rotate(t);
    }
    
}

void AVL::rightBalance(AVLNode *t){
    AVLNode *r, *rl;
    r = t -> right;
    switch (r -> bf) {
        case RH:
            t -> bf = r -> bf = EH;
            l_rotate(t);
            break;
        case LH:
            rl = r -> left;
            switch (rl -> bf) {
                case RH:
                    t -> bf = LH;
                    r -> bf = EH;
                    break;
                case EH:
                    t -> bf = r -> bf = EH;
                    break;
                case LH:
                    t -> bf = EH;
                    r -> bf = RH;
                    break;
            }
            rl -> bf = EH;
            r_rotate(t -> right);
            l_rotate(t);
    }
}

bool AVL::insert(int data, int *taller){
    return true;
}
