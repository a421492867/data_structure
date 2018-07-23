//
//  Kruskal.hpp
//  data_structure
//
//  Created by ysp on 2018/7/20.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef Kruskal_hpp
#define Kruskal_hpp

#include <stdio.h>

#endif /* Kruskal_hpp */
struct Edge{
    int start;
    int end;
    int weight;
};

class Graph_Kru{
private:
    char *vex;
    Edge *edge;
    int vexNum, edgeNum;
public:
    Graph_Kru(int size, int edge_num){
        vex = new char[size];
        edge = new Edge[edgeNum];
        vexNum = size;
        edgeNum = edge_num;
    }
    void creteGraph();
    void sort_edge();
    void kruskal();
    int find(int *parent, int f);
};
