//
//  AOV.cpp
//  data_structure
//
//  Created by ysp on 2018/7/31.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "AOV.hpp"
#include "SqStack.hpp"
#include <iostream>
using namespace std;

void AOVGraph::createGraph(){
    cout << "请输入结点" << endl;
    string s;
    cin >> s;
    for(int i = 0; i < this -> numVertexes; i++){
        this -> nodes[i].data = s[i];
    }
    cout << "请输入边数量" << endl;
    int num;
    cin >> num;
    this -> numEdges = num;
    for(int i = 0; i < this -> numEdges; i++){
        cout << "请输入边序" << endl;
        int start, end;
        cin >> start >> end;
        AOVEdge *e = new AOVEdge;
        e -> adjvex = end;
        e -> next = this -> nodes[start].firstEdge;
        this -> nodes[start].firstEdge = e;
        this -> nodes[end].in += 1;
    }
}

bool AOVGraph::topoLogicSort(){
    SqStack stack = SqStack();
    int count = 0;
    AOVEdge *e = new AOVEdge;
    for(int i  = 0; i < this -> numVertexes; i++){
        if(this -> nodes[i].in == 0){
            stack.Push(i);
        }
    }
    while(stack.StackLength()){
        int top = stack.GetTop();
        stack.Pop();
        cout << this -> nodes[top].data << "(" << top << ")" << " - >" ;
        count ++;
        e = nodes[top].firstEdge;
        while(e){
            int k = e -> adjvex;
            if(--this -> nodes[k].in == 0){
                stack.Push(k);
            }
            e = e -> next;
        }
    }
    if(count < this -> numVertexes){
        return false;
    }
    return true;
}
