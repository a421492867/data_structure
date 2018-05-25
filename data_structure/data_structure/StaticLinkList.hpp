//
//  StaticLinkList.hpp
//  data_structure
//
//  Created by ysp on 2018/5/23.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef StaticLinkList_hpp
#define StaticLinkList_hpp
#include <stdio.h>
#include <iostream>
const int MAX_SIZE = 1000;
struct StaticNode{
    int data;
    int cur;
};

class StaticLinkList{
private:
    StaticNode data[MAX_SIZE];
public:
    StaticLinkList(){
        for(int i = 0; i < MAX_SIZE - 1; i++){
            this -> data[i].cur = i + 1;
        }
        this -> data[MAX_SIZE - 1].cur = 1;
    };
    void CreateList(int arr[], int length);
    void ListInsert(int loc, int data);
    void ListDelete(int loc);
    int ListLength();
    void ShowList();
    
    
};


#endif /* StaticLinkList_hpp */
