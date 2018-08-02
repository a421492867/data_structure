//
//  AOE.cpp
//  data_structure
//
//  Created by ysp on 2018/8/1.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "AOE.hpp"
#include <iostream>
#include <stdio.h>
#include "SqStack.hpp"
using namespace std;
SqStack stack2;
int *etv, *ltv;
void AOEGraph::createGraph(){
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
        cout << "请输入边序及权重" << endl;
        int start, end, weight;
        cin >> start >> end >> weight;
        AOEEdge *e = new AOEEdge;
        e -> adjvex = end;
        e -> weight = weight;
        e -> next = this -> nodes[start].firstEdge;
        this -> nodes[start].firstEdge = e;
        this -> nodes[end].in += 1;
    }
}

bool AOEGraph::topo_AOE(){
    SqStack stack = SqStack();
    int count = 0;
    AOEEdge *e = new AOEEdge;
    for(int i  = 0; i < this -> numVertexes; i++){
        if(this -> nodes[i].in == 0){
            stack.Push(i);
        }
    }
    etv = new int[this -> numVertexes];
    for (int i = 0; i < this -> numVertexes; i++) {
        etv[i] = 0;
    }
    stack2 = SqStack();
    while(stack.StackLength()){
        int top = stack.GetTop();
        stack.Pop();
        cout << this -> nodes[top].data << "(" << top << ")" << " - >" ;
        count ++;
        stack2.Push(top);
        e = nodes[top].firstEdge;
        while(e){
            int k = e -> adjvex;
            if(--this -> nodes[k].in == 0){
                stack.Push(k);
            }
            if((etv[top] + e -> weight) > etv[k]){
                etv[k] = etv[top] + e -> weight;
            }
            e = e -> next;
        }
    }
    if(count < this -> numVertexes){
        return false;
    }
    return true;
}

void AOEGraph::criticalPath(){
    
}
