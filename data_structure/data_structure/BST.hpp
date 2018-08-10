//
//  BST.hpp
//  data_structure
//
//  Created by ysp on 2018/8/9.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef BST_hpp
#define BST_hpp

#include <stdio.h>

#endif /* BST_hpp */
struct BSTNode{
    int data;
    BSTNode *left;
    BSTNode *right;
    BSTNode():left(NULL),right(NULL){};
};

class BST{
private:
    BSTNode *root;
public:
    bool insert(int key);
    int search(int key);
    bool deleteBST(int key);
    
};
