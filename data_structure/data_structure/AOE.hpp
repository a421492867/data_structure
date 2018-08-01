//
//  AOE.hpp
//  data_structure
//
//  Created by ysp on 2018/8/1.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#ifndef AOE_hpp
#define AOE_hpp

#include <stdio.h>

#endif /* AOE_hpp */
struct AOEEdge{
    int adjvex;
    int weight;
    AOEEdge *next;
};

struct AOENode{
    int in;
    char data;
    AOEEdge *firstEdge;
};

class AOEGraph{
private:
    AOENode *nodes;
    int numVertexes;
    int numEdges;
public:
    AOEGraph(int size){
        nodes = new AOENode[size];
        numVertexes = size;
        numEdges = 0;
        for(int i = 0; i < size; i++){
            nodes[i].firstEdge = NULL;
            nodes[i].in = 0;
        }
    }
    
    void createGraph();
    
    
    
};
