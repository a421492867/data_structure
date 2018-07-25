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
#include "BiThrTree.hpp"
#include "Graph.hpp"
#include "Prim.hpp"
#include "Kruskal.hpp"
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
void testBiThrTree();
void testGraph();
void testPrim();
void testKruskal();
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
    //testBTree();
    //testBiThrTree();
    //testGraph();
//    testPrim();
    testKruskal();
    
    
    
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
    cout << "前序遍历: "  << endl;
    b.PreOderTraverse(b.getRoot());
    cout << "中序遍历: "  << endl;
    b.InOderTraverse(b.getRoot());
    cout << "后序遍历: "  << endl;
    b.PostOrderTraverse(b.getRoot());
}

void testBiThrTree(){
    BiThrTree b;
    b.input();
    b.InThreading(b.getRoot());
    b.InOrderTraverse_Thr(b.getRoot());
}

void testGraph(){
    Graph g = Graph(4);
    g.createGraph();
    cout << "第二个结点为" << g.getVex(2) << endl;
    cout << "c 位于" << g.locateVex('c') << endl;
    cout << "a的下一个结点为" << g.firstAdjVex('a') << endl;
    cout << "a 相对于 d 的下一个结点为" << g.nextAdjVex('a', 'd') << endl;
    cout << "深度优先遍历结果为" << endl;
    g.DFSTraverse();
    cout << "广度优先遍历结果为" << endl;
    g.HFSTraverse();
    g.putVex(1, 'f');
    cout << "第一个结点为" << g.getVex(1) << endl;
    
    
}

void testPrim(){
    Graph_Prim g;
    g.createGraph();
    g.miniSpanTree_PRIM();
}

void testKruskal(){
    Graph_Kru g = Graph_Kru(5, 5);
    g.creteGraph();
    g.sort_edge();
    g.kruskal();
    
}


