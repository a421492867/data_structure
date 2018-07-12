//
//  Graph.hpp
//  data_structure
//
//  Created by ysp on 2018/7/9.
//  Copyright © 2018年 Lord、y. All rights reserved.
//  邻接表

#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>

#endif /* Graph_hpp */
//边
struct EdgeNode{
    int adjvex;
    int weight;
    EdgeNode *next;
};

struct VertexNode{
    char data;
    EdgeNode *firstedge;
};

class Graph{
private:
    int numVertexes;
    int numEdges;
    VertexNode *nodes;
public:
    Graph(int size){
        numVertexes = size;
        numEdges = 0;
        nodes = new VertexNode[size];
        for(int i = 0; i < size; i++){
            nodes[i].firstedge = NULL;
        }
    }
    void createGraph();
    int locateVex(char node);
    char getVex(int index);
    bool putVex(int index, char value);
    char firstAdjVex(char node);
    char nextAdjVex(char v, char w);
    bool insertVex(VertexNode node);
    bool deleteVex(VertexNode node);
    bool insertArc(VertexNode v, VertexNode w);
    bool deleteArc(VertexNode v, VertexNode w);
    void DFSTraverse();
    void HFSTraverse();
};

