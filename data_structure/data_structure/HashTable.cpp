//
//  HashTable.cpp
//  data_structure
//
//  Created by ysp on 2018/8/27.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "HashTable.hpp"

#include <iostream>
using namespace std;

int HashTable::hash(int key){
    return key % this -> count;
}

void HashTable::insertHash(int key){
    int addr = hash(key);
    while(this -> elem[addr] != NULLKEY){
        addr = (addr + 1) % this -> count;
    }
    this -> elem[addr] = key;
}

bool HashTable::search(int key){
    int addr = hash(key);
    while(this -> elem[addr] != key){
        addr = (addr + 1) % this -> count;
        if(this -> elem[addr] == NULLKEY || addr == hash(key)){//若循环回到了原点
            return false;
        }
    }
    return true;
}

void HashTable::print(){
    for(int i = 0; i < this -> count; i++){
        cout << this -> elem[i] << ",";
    }
    cout << endl;
}

