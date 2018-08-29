//
//  Sort.hpp
//  data_structure
//
//  Created by ysp on 2018/8/27.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef Sort_hpp
#define Sort_hpp

#include <stdio.h>

#endif /* Sort_hpp */
class Sort{
private:
    int array[10];
    int length;
public:
    Sort(int *arr){
        this -> length = 10;
        for(int i = 0; i < this -> length; i++){
            this -> array[i] = arr[i];
        }
    };
    
    void swap(int i, int j);
    void bubbleSort0();
    void bubbleSort();
    void bubbleSort1();
    
    void selectSort();
    
    void insertSort();
    
    void shellSort();
};
