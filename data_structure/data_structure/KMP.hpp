//
//  KMP.hpp
//  data_structure
//
//  Created by ysp on 2018/5/31.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef KMP_hpp
#define KMP_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
class KMP{
public:
    KMP(){
        
    };
    void ComputePrefix(string s,int next[]);
    void KMPMatcher(string text,string pattern);
};

#endif /* KMP_hpp */
