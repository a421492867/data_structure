//
//  LinkedQueue.cpp
//  data_structure
//
//  Created by ysp on 2018/5/29.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "LinkedQueue.hpp"
#include <iostream>
using namespace std;

void LinkedQueue::CreateQueue(int *arr, int length){
    for(int i = 0; i < length; i++){
        QueueNode *temp = new QueueNode;
        temp -> data = arr[i];
        temp -> next = NULL;
        this -> rear -> next = temp;
        this -> rear = temp;
    }
    this -> front -> data = length;
}
void LinkedQueue::EnQueue(int data){
    this -> front -> data++;
    QueueNode *temp = new QueueNode;
    temp -> data = data;
    temp -> next = NULL;
    this -> rear -> next = temp;
    this -> rear = temp;
}

void LinkedQueue::DeQueue(){
    if(this -> front == this -> rear){
        cout << "Queue is NULL" << endl;
        return;
    }
    this -> front -> next = this -> front -> next -> next;
    this -> front -> data --;
    if(this -> rear == this -> front -> next){
        this -> rear = this -> front;
    }
    delete this -> front -> next;
}

int LinkedQueue::QueueLength(){
    return this -> front -> data;
}

void LinkedQueue::ShowQueue(){
    QueueNode *head = this -> front -> next;
    while (head) {
        cout << head -> data << "," ;
        head = head -> next;
    }
    cout << endl;
}
