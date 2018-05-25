//
//  ArrayList.hpp
//  data_structure
//
//  Created by ysp on 2018/5/15.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef ArrayList_hpp
#define ArrayList_hpp
const int MAXSIZE = 1000;
typedef int ElementType;
#include <stdio.h>
class ArrayList{
private:
    ElementType data[MAXSIZE];
    int length;
public:
    void InitList();
    bool ListEmpty();
    void ClearList();
    int GetElem(int i);
    int LocateElem(int e);
    int ListInsert(int i, int data);
    int ListDelete(int i);
    int ListLength();
    void showList();
};

#endif /* ArrayList_hpp */
