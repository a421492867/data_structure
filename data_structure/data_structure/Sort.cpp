//
//  Sort.cpp
//  data_structure
//
//  Created by ysp on 2018/8/27.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "Sort.hpp"
#include <iostream>
using namespace std;

void Sort::swap(int i, int j){
    int temp = this -> array[i];
    this -> array[i] = this -> array[j];
    this -> array[j] = temp;
}

void Sort::bubbleSort0(){
    for(int i = 0; i < this -> length; i++){
        for(int j = i + 1; j < this -> length; j++){
            if(this -> array[i] > this -> array[j]){
                swap(i, j);
            }
        }
    }
    
    cout << "冒泡0 : " ;
    for(int i = 0; i < this -> length; i++){
        cout << this -> array[i] << ",";
    }
    cout << endl;
}

void Sort::bubbleSort(){
    for(int i = 0; i < this -> length; i++){
        for(int j = this -> length - 1; j > i; j--){
            if(this -> array[j - 1] > this -> array[j]){
                swap(j - 1, j);
            }
        }
    }
    
    cout << "冒泡 : " ;
    for(int i = 0; i < this -> length; i++){
        cout << this -> array[i] << ",";
    }
    cout << endl;
}

void Sort::bubbleSort1(){
   
    bool flag = true;
    for(int i = 0; i < this -> length && flag; i++){
        flag = false;
        for(int j = this -> length - 1; j > i; j--){
            if(this -> array[j - 1] > this -> array[j]){
                swap(j - 1, j);
                flag = true;
            }
        }
    }
    
    cout << "冒泡1 : " ;
    for(int i = 0; i < this -> length; i++){
        cout << this -> array[i] << ",";
    }
    cout << endl;
}

void Sort::selectSort(){
    int i, j, min;
    for(i = 0; i < this -> length; i++){
        min = i;
        for(j = i + 1; j < this -> length; j++){
            if(this -> array[min] > this -> array[j]){
                min = j;
            }
        }
        if(i != min){
            swap(i, min);
        }
    }
    
    cout << "选择 : " ;
    for(int i = 0; i < this -> length; i++){
        cout << this -> array[i] << ",";
    }
    cout << endl;
}

void Sort::insertSort(){
//    for(int i = 0; i < this -> length; i++){
//        for(int j = i; j > 0; j--){
//            if(this -> array[j - 1] > this -> array[j]){
//                swap(j - 1, j);
//            }
//        }
//    }
    for(int j = 1; j < this -> length; j++){
        int key = this -> array[j]; //待排序的第一个元素
        int i = j - 1;  //已排序的元素最后一个索引
        while (i >= 0 && key < this -> array[i]) {
            //从后向前逐个比较已排序的数组，若比他小，后者用前者代替
            //数组向后移动
            this -> array[i + 1] = this -> array[i];
            i --;
        }
        //在合适的位置插入
        this ->array[i + 1] = key;
    }
    cout << "插入 : " ;
    for(int i = 0; i < this -> length; i++){
        cout << this -> array[i] << ",";
    }
    cout << endl;
}

void Sort::shellSort(){
    int i, j, step, temp;
    step = this -> length;
    while(step > 1){
        step = step / 3 + 1;
        for(i = step; i < this -> length; i++){
            if(this -> array[i] < this -> array[i - step]){
                temp = this -> array[i];
                for(j = i - step; j >= 0 && temp < this -> array[j]; j -= step){
                    this -> array[j + step] = this -> array[j];
                }
                this -> array[j + step] = temp;
            }
        }
    }
    
    
    cout << "希尔 : " ;
    for(int i = 0; i < this -> length; i++){
        cout << this -> array[i] << ",";
    }
    cout << endl;
}

void Sort::heapSort(){
    
    for (int i = length/2 - 1; i >= 0; --i) {
        heapAdjust(length, i);
    }
    
    for (int i = length-1; i >= 0; --i) {
        swap(0, i);
        heapAdjust(i, 0);
    }
    
    cout << "堆 : " ;
    for(int i = 0; i < this -> length; i++){
        cout << this -> array[i] << ",";
    }
    cout << endl;

}

void Sort::heapAdjust(int length, int k){
    int tmp = this -> array[k];
    int i=2 * k + 1;
    while (i < length) {
        if (i+1 < length && this -> array[i] > this -> array[i+1])
            ++i;
        if (tmp < this -> array[i])
            break;
        this -> array[k] = this -> array[i];
        k = i;
        i = 2 * k + 1;
    }
    this -> array[k] = tmp;

}

void Sort::mergeSort(){
    MSort(this -> array, 0, this -> length - 1);
    cout << "归并 : " ;
    for(int i = 0; i < this -> length; i++){
        cout << this -> array[i] << ",";
    }
    cout << endl;
}
void Sort::MSort(int *arr, int left, int right){
    if(left < right){
        int center = (left + right) / 2;
        MSort(arr, left, center);
        MSort(arr, center + 1, right);
        Merge(arr, left, center, right, right - left + 1);
    }
}
void Sort::Merge(int *arr, int left, int center, int right, int n){
    int *t = new int[n];
    int i = left;
    int j = center + 1;
    int k = 0;
    while (i<=center && j<=right){
            if (arr[i] <= arr[j])
                t[k++] = arr[i++];
            else
                t[k++] = arr[j++];
    }

    if (i == center+1){
        while (j <= right){
            t[k++] = arr[j++];
            }
        }else{
            while (i <= center){
                t[k++] = arr[i++];
            }
        }
    
    for (i=left,k=0; i<=right; i++,k++){
        arr[i] = t[k];
        }
}
