//
//  ChainList.cpp
//  data_structure
//
//  Created by ysp on 2018/5/16.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "ChainList.hpp"
#include <iostream>
using namespace std;


bool ChainList::ListEmpty(){
    if(this ->head ->data == 0){
        return 1;
    }
    return 0;
}

void ChainList::ClearList(){
    this -> head -> data = 0;
    this -> head -> next = NULL;
}

int ChainList::GetElem(int i){
//    if(i > this -> head -> data || i < 1){
//        return 0;
//    }
//    int num = 1;
//    Node *p = this -> head -> next;
//    while(num != i){
//        num++;
//        p = p->next;
//    }
//
//    return p -> data;
    Node *p = this -> head ->next;
    int num = 1;
    while(p && num < i){
        p = p -> next;
        ++num;
    }
    if(!p || num > i){
        return NULL;
    }
    return p -> data;
}

int ChainList::LocateElem(int e){
    Node *p = this -> head -> next;
    int loc = 1;
    while (p && p -> data != e) {
        p = p -> next;
        ++loc;
    }
    if(!p || loc > this -> head -> data){
        return 0;
    }
    
    return loc;
}

int ChainList::ListInsert(int i, int data){
    int j = 1;
    Node *p = this -> head;
    while (p && j < i) {
        p = p -> next;
        j++;
    }
    if (!p || j > i){
        return 0;
    }
    Node *temp = new Node;
    temp -> data = data;
    temp -> next = p -> next;
    p -> next = temp;
    this -> head -> data ++;
    return 1;
}

int ChainList::ListDelete(int i){
    int j = 1;
    Node *p = this -> head;
    while (p && j < i) {
        p = p -> next;
        j++;
    }
    if(!p || j > i){
        return 0;
    }
//    Node *q = p -> next;
//    p -> next = q -> next;
    p -> next = p -> next -> next;
    this -> head -> data --;
    return 1;
}

int ChainList::ListLength(){
    return this -> head -> data;
}

void ChainList::InsertListHead(int *arr, int length){
//    cout << arr << endl;
//    cout << sizeof(arr)  << endl;
//    cout << sizeof(arr)[0]  << endl;
//    cout << arr[0] << endl;
//    cout << arr[1] << endl;
//    cout << arr[2] << endl;
//    cout << " func length : " << sizeof(arr) / sizeof(arr)[0] << endl;
//
//
//    int length = sizeof(arr) / sizeof(arr)[0];
    
//    int length1  = end(arr)
    
//    cout << " func length1 : " << length1 << endl;

//    cout << "func length : " << length << endl;
    for(int i = 0; i < length; i++){
        
        Node *temp = new Node;
        temp -> data = arr[i];
        temp -> next = this -> head -> next;
        this -> head -> next = temp;
    }
}

void ChainList::InsertListTail(int *arr, int length){
    Node *tail = this -> head;
//    int length = sizeof(arr) / sizeof(arr)[0];
    for(int i = 0; i < length; i++){
        Node *p = new Node;
        p -> data = arr[i];
        tail ->next = p;
        p -> next = NULL;
        tail = p;
    }
}

void ChainList::showList(){
    Node *p = this -> head -> next;
    while (p != NULL) {
        cout << p -> data << ",";
        p = p -> next;
    }
    cout << endl;
}

