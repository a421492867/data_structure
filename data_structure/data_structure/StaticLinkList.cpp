//
//  StaticLinkList.cpp
//  data_structure
//
//  Created by ysp on 2018/5/23.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "StaticLinkList.hpp"
#include <iostream>
using namespace std;
void StaticLinkList:: CreateList(int *arr, int length){
    for(int i = 1; i <= length; i++){
        this -> data[i].data = arr[i - 1];
    }
    this -> data[length].cur = 0;
    this -> data[0].cur = length + 1;
    this -> data[MAX_SIZE - 1].data = length;
}

void StaticLinkList::ListInsert(int loc, int data){
    int k = MAX_SIZE - 1;
    //length + 1
    this -> data[k].data ++;
    //空闲的位置
    int unusedSpace = this -> data[0].cur;
    //改变0号位的cur到下一个空闲位置
    this -> data[0].cur = this -> data[unusedSpace].cur;
    this -> data[unusedSpace].data = data;
    for(int i = 1; i < loc; i++){
        k = this ->data[k].cur;
    }
    this -> data[unusedSpace].cur = this -> data[k].cur;
    this -> data[k].cur = unusedSpace;
    
    
    
}

void StaticLinkList::ListDelete(int loc){
    int k = MAX_SIZE - 1;
    for(int i = 1; i < loc; i++){
        k = this -> data[k].cur;
    }
    int space = this -> data[k].cur;
    this -> data[k].cur = this -> data[space].cur;
    data[space].data = NULL;
    this -> data[MAX_SIZE - 1].data --;
    this -> data[0].cur = space;
    
}

int StaticLinkList::ListLength(){
    int length = this -> data[MAX_SIZE - 1].data;
    return length;
}

void StaticLinkList::ShowList(){
    int k = this -> data[MAX_SIZE - 1].cur;
    for(int i = 1; i <= this -> data[MAX_SIZE - 1].data; i++){
        cout << this -> data[k].data << ",";
        k = this -> data[k].cur;
    }
    cout << endl;
}

