//
//  AOE.cpp
//  data_structure
//
//  Created by ysp on 2018/8/1.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "AOE.hpp"
#include <iostream>
using namespace std;
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
