//
//  BiThrTree.hpp
//  data_structure
//
//  Created by ysp on 2018/6/14.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef BiThrTree_hpp
#define BiThrTree_hpp

#include <stdio.h>

#endif /* BiThrTree_hpp */

struct BiThrNode{
    char ch;
    BiThrNode *leftChild;
    BiThrNode *rightChild;
    int LTag = 0;
    int Rtag = 0;
    BiThrNode():leftChild(NULL),rightChild(NULL){}
    BiThrNode(char c, BiThrNode *l = NULL, BiThrNode *r = NULL){
        ch = c;
        leftChild = l;
        rightChild = r;
        
    }
    
};

class BiThrTree{
private:
    BiThrNode *root;
public:
    BiThrTree(){
        root = new BiThrNode();
    }
    BiThrNode* getRoot();
    void input();
    void createTree(BiThrNode *&root);
    void InThreading(BiThrNode *root);
    void InOrderTraverse_Thr(BiThrNode *root);
};
