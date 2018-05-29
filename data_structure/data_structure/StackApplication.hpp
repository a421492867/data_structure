//
//  StackApplication.hpp
//  data_structure
//
//  Created by ysp on 2018/5/29.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef StackApplication_hpp
#define StackApplication_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class StackApplication{
public:
    int compareOperatorPriority(char op1,char op2);
    string getSuffixExpression(string str);
    float calculate(string str);
    bool isDigit(char c);
    bool isOperator(char c);
};

#endif /* StackApplication_hpp */
