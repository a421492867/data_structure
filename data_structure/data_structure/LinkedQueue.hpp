//
//  LinkedQueue.hpp
//  data_structure
//
//  Created by ysp on 2018/5/29.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef LinkedQueue_hpp
#define LinkedQueue_hpp

#include <stdio.h>
struct QueueNode{
    int data;
    QueueNode *next;
};

class LinkedQueue{
private:
    QueueNode *front;
    QueueNode *rear;
public:
    LinkedQueue(){
        //front作为头结点，数据域存放长度
        front = new QueueNode;
        front -> data = 0;
        front -> next = NULL;
        rear = new QueueNode;
        rear = front;
    }
    
    void CreateQueue(int arr[], int length);
    void EnQueue(int data);
    void DeQueue();
    int QueueLength();
    void ShowQueue();
};

#endif /* LinkedQueue_hpp */
