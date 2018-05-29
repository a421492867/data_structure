//
//  SqQueue.cpp
//  data_structure
//
//  Created by ysp on 2018/5/28.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "SqQueue.hpp"
#include <iostream>
using namespace std;

void SqQueue::CreateQueue(int *arr, int length){
    for(int i = 0; i < length; i++){
//        this -> rear ++;
        this ->data[this -> rear++] = arr[i];
    }
}

bool SqQueue::QueueEmpty(){
    if(this -> front == this -> rear){
        return true;
    }
    return false;
}

int SqQueue::GetHead(){
    return this -> data[this -> front];
}

void SqQueue::EnQueue(int data){
    if((this ->rear + 1) % SQ_MAX_SIZE == this -> front){
        cout << "Queue is full!" << endl;
        return;
    }
    this -> data[this -> rear] = data;
    this -> rear = (this -> rear + 1) % SQ_MAX_SIZE;
}

void SqQueue::DeQueue(){
    if(QueueEmpty()){
        cout << "Queue is null" << endl;
        return;
    }
    this -> data[this -> front] = NULL;
    this -> front = (this -> front + 1) % SQ_MAX_SIZE;
}

int SqQueue::QueueLength(){
    return (this -> rear - this -> front + SQ_MAX_SIZE) % SQ_MAX_SIZE;
}

void SqQueue::ShowQueue(){
    if(this -> rear < this -> front){
        for(int i = this -> front; i < SQ_MAX_SIZE; i++){
            cout << this -> data[i] << ",";
        }
        for(int i = 0; i < this -> rear; i++){
            cout << this -> data[i] << ",";
        }
    }
    else if(this -> rear > this -> front){
        for(int i = this -> front; i< this -> rear; i++){
            cout << this -> data[i] << ",";
        }
    }
    else{
        cout << "queue is null";
    }
    cout << endl;
}
