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

//要求数组必须有序
int Sq_Search::binary_search(int *a, int n, int key){
    int low, high, mid;
    low = 1;
    high = n;
    while(low <= high){
        mid = (low + high) / 2;
        if(key < a[mid]){
            high = mid - 1;
        }else if (key > a[mid]){
            low = mid + 1;
        }else{
            return mid;
        }
    }
    return 0;
}
