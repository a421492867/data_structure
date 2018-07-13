//
//  Prim.hpp
//  data_structure
//
//  Created by ysp on 2018/7/13.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef Prim_hpp
#define Prim_hpp

#include <stdio.h>

#endif /* Prim_hpp */
const int INFINITY = 65535;
const int DEFAULT_SIZE = 30;
class Graph_Prim{
private:
    char vex[DEFAULT_SIZE];
    int arc[DEFAULT_SIZE][DEFAULT_SIZE];
    int numVertexes, numEdges;
public:
    Graph_Prim(){
        numVertexes = 0;
        numEdges = 0;
    };
    void createGraph();
    void miniSpanTree_PRIM();
};

