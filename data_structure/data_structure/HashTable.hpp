//
//  HashTable.hpp
//  data_structure
//
//  Created by ysp on 2018/8/27.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <stdio.h>

#endif /* HashTable_hpp */
const int HASH_SIZE = 12;
const int NULLKEY = -32768;
class HashTable{
private:
    int *elem;
    int count;
public:
    HashTable(){
        this -> count = HASH_SIZE;
        for(int i = 0; i < this -> count; i++){
            this -> elem[i] = NULLKEY;
        }
    }
    int hash(int key);
    void insertHash(int key);
    bool search(int key);
    
    void print();
    
};
