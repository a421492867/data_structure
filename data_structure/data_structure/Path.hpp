//
//  Path.hpp
//  data_structure
//
//  Created by ysp on 2018/7/27.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef Path_hpp
#define Path_hpp

#include <stdio.h>

#endif /* Path_hpp */
const int P_INFINITY = 65535;
const int P_DEFAULT_SIZE = 30;

class Graph_Path{
private:
    char vex[P_DEFAULT_SIZE];
    int arc[P_DEFAULT_SIZE][P_DEFAULT_SIZE];
    int numVertexes, numEdges;
public:
    Graph_Path(){
        numVertexes = 0;
        numEdges = 0;
    };
    void createGraph();
    void Dijkstra(int v0);
    void Floyd();
};
