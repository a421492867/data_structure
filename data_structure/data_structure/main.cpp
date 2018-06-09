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
#include "SqStack.hpp"
#include "LinkedStack.hpp"
#include "SqQueue.hpp"
#include "LinkedQueue.hpp"
#include "StackApplication.hpp"
#include "HStringIndex.hpp"
#include "KMP.hpp"
#include "BTree.hpp"
using namespace std;
void testArrayList();
void testChainList();
void testStaticList();
void testSqStack();
void testLinkedStack();
void testSqQueue();
void testLinkedQueue();
void testStackApp();
void testHStringIndex();
void testKMP();
void testBTree();
int main(int argc, const char * argv[]) {
    // insert code here...
    //testArrayList();
//    testChainList();
    //testStaticList();
    //testSqStack();
    //testLinkedStack();
//    testSqQueue();
//    testLinkedQueue();
    //testStackApp();
    //testHStringIndex();
    testBTree();
    
    
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

void testSqStack(){
    SqStack stack;
    int arr[] = {2,3,4,5,6};
    int length = end(arr) - begin(arr);
    stack.CreateStack(arr, length);
    stack.ShowStack();
    int top = stack.GetTop();
    cout << "top is " << top << endl;
    stack.Push(10);
    int newTop = stack.GetTop();
    cout << "new top is " << newTop << endl;
    stack.ShowStack();
    stack.Pop();
    stack.ShowStack();
}
void testLinkedStack(){
    LinkedStack stack;
    int arr[] = {2,3,4,5,6};
    int length = end(arr) - begin(arr);
    stack.CreateStack(arr, length);
    stack.ShowStack();
    int top = stack.GetTop();
    cout << "top is " << top << endl;
    stack.Push(10);
    int newTop = stack.GetTop();
    cout << "new top is " << newTop << endl;
    stack.ShowStack();
    stack.Pop();
    stack.ShowStack();
}

void testSqQueue(){
    SqQueue sq;
    int arr[] = {2,4,5};
    int length = end(arr) - begin(arr);
    sq.CreateQueue(arr, length);
    sq.ShowQueue();
    cout << sq.GetHead() << endl;
    sq.EnQueue(10);
    sq.ShowQueue();
    sq.DeQueue();
    sq.ShowQueue();
    cout << sq.QueueLength() << endl;
}

void testLinkedQueue(){
    LinkedQueue lq;
    lq.DeQueue();
    int arr[] = {2,4,5};
    int length = end(arr) - begin(arr);
    lq.CreateQueue(arr, length);
    lq.ShowQueue();
    lq.EnQueue(90);
    lq.ShowQueue();
    lq.DeQueue();
    lq.ShowQueue();
    cout << "length : " << lq.QueueLength() << endl;
}

void testStackApp(){
    string str = "9+(3-1)*3+10/2";
    string str2 = "95+(28.5-15)*20+34/25";
    StackApplication sApp;
    string suffix = sApp.getSuffixExpression(str2);
    cout << suffix << endl;
    float result = sApp.calculate(suffix);
    cout << result << endl;
}

void testHStringIndex(){
    string s = "abcdrfghi";
    string t = "ghi";
    HStringIndex hsi;
    hsi.GetIndex(s, t);
}

void testKMP(){
    KMP kmp;
    string s = "abcdrfghi";
    string t = "ghi";
    kmp.KMPMatcher(s, t);
    
}

void testBTree(){
    BTree b;
    b.input();
    b.output();
}


