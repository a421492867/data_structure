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
    
    void r_rotate(AVLNode *p);
    void l_rotate(AVLNode *p);
    void leftBalance(AVLNode *t);
    void rightBalance(AVLNode *t);
    bool insertAVL(AVLNode *t, int data, bool taller);
    AVLNode* getroot();
};
