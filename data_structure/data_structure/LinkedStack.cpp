//
//  LinkedStack.cpp
//  data_structure
//
//  Created by ysp on 2018/5/28.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "LinkedStack.hpp"
#include <iostream>
using namespace std;
void LinkedStack::CreateStack(int *arr, int length){
    StackNode *p = this -> top;
    for(int i = 0; i < length; i++){
        StackNode *temp = new StackNode;
        temp -> data = arr[i];
        temp -> next = p -> next;
        p ->next = temp;
    }
    p -> data = length;
}

bool LinkedStack::StackEmpty(){
    if(this -> top -> data == 0){
        return true;
    }
    return false;
}

int LinkedStack::GetTop(){
    if(this -> top -> next ==NULL){
        cout << "Stack Empty" << endl;
        return NULL;
    }
    return this ->top ->next ->data;
}
void LinkedStack::Push(int data){
    this -> top -> data ++;
    StackNode * temp = new StackNode;
    temp -> data = data;
    temp -> next = this -> top ->next;
    this ->top -> next = temp;
}

void LinkedStack::Pop(){
    StackNode *p = this -> top -> next;
    this -> top -> next = p -> next;
    delete p;
    this -> top -> data --;
}

int LinkedStack::StackLength(){
    return this -> top -> data;
}

void LinkedStack::ShowStack(){
    StackNode *node = this -> top ->next;
    while (node) {
        cout << node -> data << ",";
        node = node -> next;
    }
    cout << endl;
}

