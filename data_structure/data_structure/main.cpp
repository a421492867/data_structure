//
//  main.cpp
//  data_structure
//
//  Created by ysp on 2018/5/15.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include <iostream>
#include "ArrayList.hpp"
#include "ChainList.hpp"
#include "StaticLinkList.hpp"
using namespace std;
void testArrayList();
void testChainList();
void testStaticList();
int main(int argc, const char * argv[]) {
    // insert code here...
    //testArrayList();
//    testChainList();
    testStaticList();
    
}

void testArrayList(){
    ArrayList al;
    al.InitList();
    al.ListInsert(1, 5);
    al.ListInsert(2, 10);
    al.ListInsert(3, 14);
    al.ListInsert(4, 16);
    al.ListInsert(5, 2);
    al.ListInsert(6, 18);
    al.ListInsert(7, 20);
    //if(al.GetElem(3) != NULL)
    int ele = al.GetElem(3);
    cout << "the third element is : " << ele << " the list length is " << al.ListLength() << endl;
    al.ListInsert(3, 18);
    
    int newEle = al.GetElem(3);
    cout << "Now the third element is : " << newEle << " Now the list length is " << al.ListLength() << endl;
    al.ListDelete(3);
    cout << "And Now the third element is : " << al.GetElem(3) << " And Now the list length is " << al.ListLength() << endl;
    
    int loc = al.LocateElem(20);
    cout << "20 is the " << loc << " num" << endl;
    al.showList();
    al.ClearList();
}

void testChainList(){
    ChainList cl;
    cl.ListInsert(1, 20);
    cl.ListInsert(2, 11);
    cl.ListInsert(3, 25);
    cl.ListInsert(4, 34);
    cl.ListInsert(5, 28);
    cl.ListInsert(6, 14);
    cl.ListInsert(7, 19);
    int ele = cl.GetElem(5);
    cout << "5 is : " << ele << endl;
    
    int loc = cl.LocateElem(11);
    cout << "11 is in the postion :" << loc << endl;
    cl.ListInsert(1, 16);
    cl.showList();
    cout << "len : " << cl.ListLength() << endl;
    cl.ListDelete(4);
    cout << "len : " << cl.ListLength() << endl;
    cl.showList();
    
    int arr[] = {3,5,6};
    ChainList testInsertHead;
    int length = end(arr) - begin(arr);
    
//
//    cout << sizeof(arr) << endl;
//    cout << arr << endl;
//
//    cout << sizeof(arr)[0] << endl;
    
    testInsertHead.InsertListHead(arr, length);
    testInsertHead.showList();
    
    ChainList testInsertTail;
    testInsertTail.InsertListTail(arr, length);
    testInsertTail.showList();
}

void testStaticList(){
    StaticLinkList sll;
    int arr[] = {2,3,4,5,6};
    int length = end(arr) - begin(arr);
    sll.CreateList(arr, length);
    sll.ShowList();
    sll.ListDelete(3);
    sll.ShowList();
    sll.ListInsert(2, 10);
    sll.ShowList();
    
}
