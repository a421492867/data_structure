//
//  SqSearch.cpp
//  data_structure
//
//  Created by ysp on 2018/8/6.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "SqSearch.hpp"
#include <iostream>
using namespace std;
int Sq_Search::Sequential_Search(int *a, int n, int key){
    for(int i = 1; i < n ; i++){
        if(a[i] == key){
            return i;
        }
    }
    return 0;
}

int Sq_Search::Sequential_Search2(int *a, int n, int key){
    a[0] = key;
    int i = n;
    while(a[i] != key){
        i--;
    }
    return i;
}
