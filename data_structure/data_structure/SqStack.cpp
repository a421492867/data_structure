//
//  SqStack.cpp
//  data_structure
//
//  Created by ysp on 2018/5/28.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "SqStack.hpp"
#include <iostream>
using namespace std;

void SqStack::CreateStack(int *arr, int length){
    for(int i = 0; i < length; i++){
        this -> top ++;
        this -> data[i] = arr[i];
    }
}

bool SqStack::StackEmpty(){
    if(this -> top == -1){
        return true;
    }
    return false;
}

int SqStack::GetTop(){
    if(top == -1){
        cout << "Stack is Null" << endl;
        return NULL;
    }
    return  this -> data[this -> top];
}

void SqStack::Push(int data){
//    this -> top ++;
//    this -> data[this -> top] = data;
    this -> data[++this -> top] = data;
}

void SqStack::Pop(){
//    this -> data[this -> top] = NULL;
//    this -> top --;
    this -> data[this -> top --] = NULL;
}

int SqStack::StackLength(){
    if(top == -1){
        cout << "Stack is Null" << endl;
        return NULL;
    }
    return this -> top + 1;
}

void SqStack::ShowStack(){
    for(int i = 0; i <= this -> top; i++){
        cout << this -> data[i] << "," ;
    }
    cout << endl;
    
}
