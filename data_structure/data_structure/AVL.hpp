//
//  AVL.hpp
//  data_structure
//
//  Created by ysp on 2018/8/14.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef AVL_hpp
#define AVL_hpp

#include <stdio.h>

#endif /* AVL_hpp */

struct AVLNode{
    int data;
    int bf;
    AVLNode *left;
    AVLNode *right;
    AVLNode():left(NULL),right(NULL),bf(0){};
};

class AVL{
private:
    AVLNode *root;
public:
    AVL(){
        root = new AVLNode();
    }
    
    void r_rotate(AVL *p);
    void l_rotate(AVL *p);
    void leftBalance(AVL *t);
    void rightBalance(AVL *t);
    bool insert(int data);
};
