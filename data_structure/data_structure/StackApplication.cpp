//
//  StackApplication.cpp
//  data_structure
//
//  Created by ysp on 2018/5/29.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "StackApplication.hpp"
#include <stack>
#include <iostream>
#include <map>
using namespace std;

//9+(3-1)*3+10/2

string StackApplication::getSuffixExpression(string str){
    string result = "";
    stack<char> mark;
    for(int i = 0; i < str.length(); i++){
        char current = str[i];

        switch (current) {
            case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':
            case '8':case '9':case '.':
                result += current;
                break;
            case '+':case '-':case '*':case '/':
                result += ",";
                if( !mark.empty()){
                    char topMark = mark.top();
                    if(topMark != '('){
                        if(compareOperatorPriority(current, topMark) <= 0){
                            while(!mark.empty()){
                                
                                result += mark.top();
                                result += ",";
                                mark.pop();
                            }
                        }
                    }
                   
                }
                mark.push(current);
                break;
            case '(':
                mark.push(current);
                break;
            case ')':
                while(mark.top() != '('){
                    result += ",";
                    result += mark.top();
                    mark.pop();
                    break;
                }
                mark.pop();
                break;
            default:
                break;
        }
    }
    
    while (!mark.empty()) {
        result += ",";
        result += mark.top();
        mark.pop();
    }
    return result;
}

float StackApplication::calculate(string str){
    float result = 0;
    stack<float> numStack;
    string strNum;
    float temp1 = 0;
    float temp2 = 0;
    
    for(int i = 0; i < str.length(); i++){
        char current = str[i];
        switch (current) {
            case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':
            case '8':case '9':case '.':
                strNum.push_back(current);
                break;
            case ',':
                //做完一次加减乘除操作后紧接着是 ， 但此时strNum为""
                if(strNum != ""){
                    numStack.push(atof(strNum.c_str()));
                    strNum.clear();
                }
                break;
            case '+':
                temp1 = numStack.top();
                numStack.pop();
                temp2 = numStack.top();
                numStack.pop();
                numStack.push(temp2 + temp1);
                break;
            case '-':
                temp1 = numStack.top();
                numStack.pop();
                temp2 = numStack.top();
                numStack.pop();
                numStack.push(temp2 - temp1);
                break;
            case '*':
                temp1 = numStack.top();
                numStack.pop();
                temp2 = numStack.top();
                numStack.pop();
                numStack.push(temp2 * temp1);
                break;
            case '/':
                temp1 = numStack.top();
                numStack.pop();
                temp2 = numStack.top();
                numStack.pop();
                numStack.push(temp2 / temp1);
                break;
            default:
                break;
        }
    }
    result = numStack.top();
    return  result;
}

int StackApplication::compareOperatorPriority(char op1, char op2){
    map<char,int> priority;
    priority['+'] = 0;
    priority['-'] = 0;
    priority['*'] = 1;
    priority['/'] = 1;
    return priority[op1] - priority[op2];
//    switch(op1){
//        case '+': case '-':
//            return (op2 == '*' || op2 == '/'? -1:0);
//            break;
//        case '*': case '/':
//            return (op2 == '-' || op2 == '+'? 1:0);
//    }
//    return -1;
}

bool StackApplication::isDigit(char c){
    int a = c - '0';
    if(a >= 0 && a <= 9){
        return true;
    }else{
        return false;
    }
}

bool StackApplication::isOperator(char c){
    if( c == '+' || c == '-' || c == '*' || c == '/'){
        return true;
    }else{
        return false;
    }
}


