//
//  ChainList.hpp
//  data_structure
//
//  Created by ysp on 2018/5/16.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef ChainList_hpp
#define ChainList_hpp

#include <stdio.h>
#include <iostream>
struct Node{
    int data;
    Node *next;
};

class ChainList{
private:
    Node *head;
public:
    ChainList(){
        head = new Node;
        head -> data = 0;
        head -> next = NULL;
    }
    bool ListEmpty();
    void ClearList();
    int GetElem(int i);
    int LocateElem(int e);
    int ListInsert(int i, int data);
    int ListDelete(int i);
    int ListLength();
    void InsertListHead(int arr[], int length);
    void InsertListTail(int arr[], int length);
    void showList();
    
};

#endif /* ChainList_hpp */
