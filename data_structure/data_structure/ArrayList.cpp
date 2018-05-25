//
//  ArrayList.cpp
//  data_structure
//
//  Created by ysp on 2018/5/15.
//  Copyright © 2018年 Lord、y. All rights reserved.
//  默认数据不为0
//

#include "ArrayList.hpp"
#include <iostream>
using namespace std;

void ArrayList :: InitList(){
    this->length = 0;
}

bool ArrayList::ListEmpty(){
    if(this->length == 0){
        return true;
    }else{
        return false;
    }
}

void ArrayList::ClearList(){
    for(int i = 0; i < this -> length; i++){
        this -> data[i] = 0;
    }
    this->length = 0;
}

int ArrayList::GetElem(int i){
    if(i > this->length - 1){
        cout << "out of index" << endl;
        return NULL;
    }
    
    return this->data[i - 1];
}

int ArrayList::LocateElem(int e){
    for(int i = 0; i < this->length; i++){
        if(this->data[i] == e){
            return i + 1;
        }
    }
    return 0;
}

int ArrayList::ListInsert(int i, int data){
    if(this->length == MAXSIZE){
        cout << "the list is full" << endl;
        return 0;
    }
    if(i < 1 || i > MAXSIZE){
        cout << "invalid loction" <<endl;
        return 0;
    }
    this->length++;
    for(int j = this->length - 1; j > i - 1; j--){
        this->data[j] = this->data[j - 1];
    }
    this->data[i - 1] = data;
    return 1;
}

int ArrayList::ListDelete(int i){
    if(i < 1 || i > MAXSIZE){
        return 0;
    }
    for(int j = i - 1; j < this->length - 1; j++){
        this->data[j] = this->data[j + 1];
    }
    int e = this->data[i - 1];
    this->length --;
    return e;
    
}

int ArrayList::ListLength(){
    return this->length;
}

void ArrayList::showList(){
    for(int i = 0; i < this->length; i++){
        cout << this->data[i] << endl;
    }
}

