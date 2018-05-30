//
//  HStringIndex.cpp
//  data_structure
//
//  Created by ysp on 2018/5/30.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "HStringIndex.hpp"
#include <iostream>
using namespace std;

void HStringIndex::GetIndex(string s, string t){
    int i = 0, j = 0;
    if(s.length() < t.length()){
        cout << "source string's length < target string's length, ERROR!" << endl;
        return;
    }
    while (i < s.length() && j < t.length()) {
        if(s[i] == t[j]){
            i++;
            j++;
        }else{
            i = i - j + 1;
            j = 0;
        }
    }
    if(j == t.length()){
        cout << "index is : " << i - j + 1 << endl;
    }else{
        cout << "No substring" << endl;
    }
    
    
}
