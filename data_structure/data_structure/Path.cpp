//
//  Path.cpp
//  data_structure
//
//  Created by ysp on 2018/7/27.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "Path.hpp"
#include <iostream>
using namespace std;
void Graph_Path::createGraph(){
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
            this -> arc[i][j] = P_INFINITY;
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

void Graph_Path::Dijkstra(int v0){
    int Pathmatirx[this -> numVertexes]; //用于存储最短路径下标的数组
    int ShortPathTable[this -> numVertexes]; //用于存储到各点路径权值和
    int v, w, k, min;
    int final[this -> numVertexes];
    for(v = 0; v < this -> numVertexes; v++){
        final[v] = 0;
        ShortPathTable[v] = this -> arc[v0][v];
        Pathmatirx[v] = 0;
    }
    ShortPathTable[v0] = 0;
    final[v0] = 1;
    for(v = 1; v < this -> numVertexes; v++){
        min = P_INFINITY;
        for(w = 0; w < this -> numVertexes; w++){
            if(!final[w] && ShortPathTable[w] < min){
                k = w;
                min = ShortPathTable[w];
            }
        }
        final[k] = 1;
        for(w = 0; w < this -> numVertexes; w++){
            if(!final[w] && (min + this -> arc[k][w] < ShortPathTable[w])){
                ShortPathTable[w] = min + this -> arc[k][w];
                Pathmatirx[w] = k;
            }
        }
    }
}
