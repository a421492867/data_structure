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

void Graph_Prim::createGraph(){
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

void Graph_Prim::miniSpanTree_PRIM(){
    int min;
    int adjvex[this -> numVertexes];
    int lowcost[this -> numVertexes];
    adjvex[0] = 0;
    //lowcost[i] == 0则说明i已纳入
    lowcost[0] = 0;
    for(int i = 1; i < this -> numVertexes; i++){
        lowcost[i] = this -> arc[0][i];
        adjvex[i] = 0;
    }
    for(int i = 1; i < this -> numVertexes; i++){
        min = INFINITY; 
        int j = 1, k = 0;
        while(j < this -> numVertexes){
            if(lowcost[j] != 0 && lowcost[j] < min){
                min = lowcost[j];
                k = j;
            }
            j++;
        }
        cout << adjvex[k] << "," << k << endl;
        lowcost[k] = 0;
        
        //更新lowcost数组和adjvex数组 
        for(int j = 1; j < this -> numVertexes; j++){
            if(lowcost[j] != 0 && this -> arc[k][j] < lowcost[j]){
                lowcost[j] = this -> arc[k][j];
                adjvex[j] = k;
            }
        }

    }

}
