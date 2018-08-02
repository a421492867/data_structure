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
    AOEEdge *e = new AOEEdge;
    int ete, lte;
    topo_AOE();
    ltv = new int[this -> numVertexes];
    for(int i = 0; i < this -> numVertexes; i++){
        ltv[i] = etv[this -> numVertexes - 1];
    }
    while(stack2.StackLength()){
        int top = stack2.GetTop();
        stack2.Pop();
        e = this -> nodes[top].firstEdge;
        while(e){
            int k = e -> adjvex;
            if(ltv[k] - e -> weight < ltv[top]){
                ltv[top] = ltv[k] - e -> weight;
            }
            e = e -> next;
        }
    }
    for(int i = 0; i < this -> numVertexes; i++){
        for(e = this -> nodes[i].firstEdge; e; e = e -> next){
            int k = e -> adjvex;
            ete = etv[i];
            lte = ltv[k] - e -> weight;
            if(ete == lte){
                cout << "<" << this -> nodes[i].data << "," << this -> nodes[k].data << ">" << " length : " << e -> weight;
            }
        }
    }
    cout << endl;
}
