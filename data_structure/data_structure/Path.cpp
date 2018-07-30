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

void Graph_Path::Dijkstra(int start){
    int prev[this -> numVertexes];
    int dist[this -> numVertexes];
    int min, temp;
    int k;
    int flag[this -> numVertexes]; // flag[i]=1表示"顶点vs"到"顶点i"的最短路径已成功获取。
    
    //init
    for(int i = 0; i < this -> numVertexes; i++){
        flag[i] = 0;
        prev[i] = 0;
        dist[i] = this -> arc[start][i];
    }
    
    flag[start] = 1;
    dist[start] = 0;
    for(int i = 1; i < this -> numVertexes; i++){
        // 寻找当前最小的路径；
        // 即，在未获取最短路径的顶点中，找到离vs最近的顶点(k)。
        min = P_INFINITY;
        for(int j = 0; j < this -> numVertexes; j++){
            if(flag[j] == 0 && dist[j] < min){
                min = dist[j];
                k = j;
            }
        }
        flag[k] = 1;
        // 修正当前最短路径和前驱顶点
        // 即，当已经"顶点k的最短路径"之后，更新"未获取最短路径的顶点的最短路径和前驱顶点"。
        for(int j = 0; j < this -> numVertexes; j++){
            if(flag[j] == 0 && min + this -> arc[k][j] < dist[j]){
                dist[j] = min + this -> arc[k][j];
                prev[j] = k;
            }
        }
    }
    cout << "dijkstra(" << this -> vex[start] << "): " << endl;
    for (int i = 0; i < this -> numVertexes; i++)
        cout << "  shortest(" << this -> vex[start] << ", " << this -> vex[i] << ")=" << dist[i] << endl;
}
