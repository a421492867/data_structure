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


