//
//  BTree.hpp
//  data_structure
//
//  Created by ysp on 2018/6/7.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef BTree_hpp
#define BTree_hpp

#include <stdio.h>
#endif /* BTree_hpp */

struct TreeNode{
    char ch;
    TreeNode *leftChild;
    TreeNode *rightChild;
    TreeNode():leftChild(NULL),rightChild(NULL){}
    TreeNode(char c, TreeNode *l = NULL, TreeNode *r = NULL){
        ch = c;
        leftChild = l;
        rightChild = r;
    }
};

class BTree{
private:
    TreeNode *root;
public:
    BTree(){
        root = new TreeNode();
    }
    TreeNode* getRoot();
    void createTree(TreeNode *&root);
    void input();
    void printTree(TreeNode *root);
    void output();
    int solveHeight(TreeNode *root);
    void parent(TreeNode *root,char c);
    int computerLeaf(TreeNode *root);
    void PreOderTraberse();
    void PreOderTraverse(TreeNode *root);
    void InOderTraverse(TreeNode *root);
    void PostOrderTraverse(TreeNode *root);
};

