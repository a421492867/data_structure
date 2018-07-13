//
//  Prim.cpp
//  data_structure
//
//  Created by ysp on 2018/7/13.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "Prim.hpp"
#include <iostream>
using namespace std;

void Graph::createGraph(){
    cout << "请输入结点数量" << endl;
    cin >> this -> numVertexes;
    cout << "请输入结点" << endl;
    string node;
    cin >> node;
    for(int i = 0; i < node.length(); i++){
        this -> vex[i] = node[i];
    }
    for(int i = 0; i < this -> numVertexes; i++){
        for (int j = 0; j < this -> numVertexes; j++) {
            this -> arc[i][j] = INFINITY;
        }
    }
    cout << "请输入边数量" << endl;
    cin >> this -> numEdges;
    for(int i = 0; i < this -> numEdges; i++){
        cout << "请输入边序对及权重" << endl;
        int start, end, weight;
        cin >> start >> end >> weight;
        this -> arc[start][end] = weight;
        this -> arc[end][start] = weight;
    }
    
}
