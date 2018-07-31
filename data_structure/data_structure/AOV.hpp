//
//  AOV.hpp
//  data_structure
//
//  Created by ysp on 2018/7/31.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef AOV_hpp
#define AOV_hpp

#include <stdio.h>

#endif /* AOV_hpp */

struct AOVEdge{
    int adjvex;
    AOVEdge *next;
};

struct AOVNode{
    int in;
    int data;
    AOVEdge *firstEdge;
};

class AOVGraph{
private:
    AOVNode *nodes;
    int numVertexes;
    int numEdges;
public:
    AOVGraph(int size){
        nodes = new AOVNode[size];
        numVertexes = size;
        numEdges = 0;
        for(int i = 0; i < size; i++){
            nodes[i].firstEdge = NULL;
        }
    }
    
    void createGraph();
    bool topoLogicSort();
    
    
};
