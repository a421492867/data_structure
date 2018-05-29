//
//  SqQueue.hpp
//  data_structure
//
//  Created by ysp on 2018/5/28.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef SqQueue_hpp
#define SqQueue_hpp
const int SQ_MAX_SIZE = 5;

class SqQueue{
private:
    int data[SQ_MAX_SIZE];
    int front;
    int rear;
public:
    SqQueue(){
        this -> front = 0;
        this -> rear = 0;
    }
    void CreateQueue(int arr[], int length);
    bool QueueEmpty();
    int GetHead();
    void EnQueue(int data);
    void DeQueue();
    int QueueLength();
    void ShowQueue();
};

#include <stdio.h>

#endif /* SqQueue_hpp */
