//
//  KMP.cpp
//  data_structure
//
//  Created by ysp on 2018/5/31.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "KMP.hpp"
#include <iostream>
using namespace std;

void KMP::ComputePrefix(string s, int next[]){
    int n = s.length();
    int q,k;
    next[0] = 0;
    for(k=0,q=1;q<n;q++){
        while(k>0 && s[k]!=s[q])
            k = next[k];
        if(s[k]==s[q])
            k++;
        next[q] = k;
    }
}

void KMP::KMPMatcher(string s, string t){
    int n = s.length() ;
    int m = t.length();
    int next[t.length()];
    ComputePrefix(t, next);
    
    for(int i=0,q=0;i<n;i++) {
        while(q>0 && t[q]!=s[i])
            q = next[q];
        if(t[q]==s[i])
            q++;
        if(q==m)
        {
            cout<<"Pattern occurs with shift "<<i-m+1<<endl;
            q=0;
        }
    }
}
