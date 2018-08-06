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
int F[100];
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
int Sq_Search::insert_search(int *a, int n, int key){
    int low, high, mid;
    low = 1;
    high = n;
    while(low <= high){
        mid = low + (high - low) * (key - a[low])/(a[high] - a[low]);
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


int Sq_Search::Fibonacci_Search(int *a,int n,int key){
    F[0]=0;
    F[1]=1;
    for(int i = 2;i < 100;i++)
    {
        F[i] = F[i-1] + F[i-2];
    }
    int low,high,mid,i,k=0;
    low=1;    /* 定义最低下标为记录首位 */
    high=n;    /* 定义最高下标为记录末位 */
    while(n>F[k]-1){
        k++;
    }
    for (i=n;i<F[k]-1;i++){
        a[i]=a[n];
    }
    while(low<=high)
    {
        mid=low+F[k-1]-1;
        if (key<a[mid])
        {
            high=mid-1;
            k=k-1;
        }
        else if (key>a[mid])
        {
            low=mid+1;
            k=k-2;
        }
        else
        {
            if (mid<=n)
                return mid;        /* 若相等则说明mid即为查找到的位置 */
            else
                return n;
        }
        
    }
    return 0;
}
