//
//  SqStack.hpp
//  data_structure
//
//  Created by ysp on 2018/5/28.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef SqStack_hpp
#define SqStack_hpp

#include <stdio.h>
const int MaxSize = 100;
class SqStack{
private:
    int data[MaxSize];
    int top;
public:
    SqStack(){
        this -> top = -1;
    }
    void CreateStack(int arr[], int length);
    bool StackEmpty();
    int GetTop();
    void Push(int data);
    void Pop();
    int StackLength();
    void ShowStack();
    
};



#endif /* SqStack_hpp */

