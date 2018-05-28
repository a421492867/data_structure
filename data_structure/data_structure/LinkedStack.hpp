//
//  LinkedStack.hpp
//  data_structure
//
//  Created by ysp on 2018/5/28.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef LinkedStack_hpp
#define LinkedStack_hpp

#include <stdio.h>
struct StackNode{
    int data;
    StackNode *next;
};

class LinkedStack{
private:
    //top 数据域存放栈的长度
    StackNode *top;
public:
    LinkedStack(){
        top = new StackNode;
        top -> next = NULL;
        top -> data = 0;
    }
    void CreateStack(int arr[], int length);
    bool StackEmpty();
    int GetTop();
    void Push(int data);
    void Pop();
    int StackLength();
    void ShowStack();
};

#endif /* LinkedStack_hpp */
