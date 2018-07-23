//
//  Kruskal.cpp
//  data_structure
//
//  Created by ysp on 2018/7/20.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "Kruskal.hpp"
#include <iostream>
using namespace std;

void Graph_Kru::creteGraph(){
    string s;
    cout << "请输入结点" << endl;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        this -> vex[i] = s[i];
    }
    for(int i = 0; i < this -> edgeNum; i++){
        cout << "请输入边序对及权重" << endl;
        int start, end, weight;
        cin >> start >> end >> weight;
        Edge e;
        e.start = start;
        e.end = end;
        e.weight = weight;
        this -> edge[i] = e;
    }
    
    
}

void Graph_Kru::sort_edge(){
    for(int i = 0; i < this -> edgeNum; i++){
        for(int j = i; i < this -> edgeNum; j++){
            if(this -> edge[i].weight > this -> edge[j].weight){
                Edge e = this -> edge[i];
                this -> edge[i] = this -> edge[j];
                this -> edge[j] = e;
            }
        }
    };
}

void Graph_Kru::kruskal(){
    int i, n, m;
    Edge edges[this -> edgeNum];
    int parent[vexNum];
    for(i = 0; i < this -> vexNum; i++){
        parent[i] = 0;
    }
    for(i = 0; i < this -> edgeNum; i++){
        n = find(parent, edges[i].start);
        m = find(parent, edges[i].end);
        if(n != m){
            parent[n] = m;
            cout << edges[i].start << "," << edges[i].end << "," << edges[i].weight;
        }
    }
    
}

int Graph_Kru::find(int *parent, int f){
    while (parent[f] > 0) {
        f = parent[f];
    }
    return f;
}
