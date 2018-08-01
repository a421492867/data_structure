//
//  AOV.cpp
//  data_structure
//
//  Created by ysp on 2018/7/31.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "AOV.hpp"
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
        cout << "请输入边序对及入度" << endl;
        int start, end, in;
        cin >> start >> end >> in;
        AOVEdge *e = new AOVEdge;
        e -> adjvex = end;
        e -> next = this -> nodes[start].firstEdge;
        this -> nodes[start].firstEdge = e;
        this -> nodes[start].in = in;
    }
}

bool AOVGraph::topoLogicSort(){
    
    return true;
}
