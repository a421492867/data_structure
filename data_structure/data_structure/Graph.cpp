//
//  Graph.cpp
//  data_structure
//
//  Created by ysp on 2018/7/9.
//  Copyright © 2018年 Lord、y. All rights reserved.
//

#include "Graph.hpp"
#include <iostream>
using namespace std;

void Graph::createGraph(){
    cout << "请输入结点" << endl;
    string c;
    cin >> c;
    for(int i = 0; i < c.length(); i++){
        this -> nodes[i].data = c[i];
    }
    cout << "请输入边数" << endl;
    cin >> this -> numEdges;
    for(int i = 0; i < this -> numEdges; i++){
        cout << "请输入边序对" << endl;
        int start;
        int end;
        int weight;
        cin >> start >> end >> weight;
        //a - > b 加边
        EdgeNode *node = new EdgeNode;
        node -> adjvex = end;
        node -> weight = weight;
        node -> next = this -> nodes[start].firstedge;
        nodes[start].firstedge = node;
        
        //b - > a 加边
        EdgeNode *node2 = new EdgeNode;
        node2 -> adjvex = start;
        node2 -> weight = weight;
        node2 -> next = this -> nodes[end].firstedge;
        nodes[end].firstedge = node2;
    }
}

int Graph::locateVex(char node){
    for(int i = 0; i < this -> numVertexes; i++){
        if(this -> nodes[i].data == node){
            return i;
        }
    }
    return NULL;
}

char Graph::getVex(int index){
    if(index > this -> numVertexes + 1){
        return NULL;
    }
    return this -> nodes[index - 1].data;
}

bool Graph::putVex(int index, int value){
    
    return true;
}

//EdgeNode Graph::firstAdjVex(VertexNode node){
//    
//    return NULL;
//}
//
//EdgeNode Graph::nextAdjVex(VertexNode v, VertexNode w){
//
//    return NULL;
//}

bool Graph::insertVex(VertexNode node){
    
    return true;
}

bool Graph::deleteVex(VertexNode node){
    
    return true;
}

bool Graph::insertArc(VertexNode v, VertexNode w){
    
    return true;
}

bool Graph::deleteArc(VertexNode v, VertexNode w){
    
    return true;
}

void Graph::DFSTraverse(){
    
}

void Graph::HFSTraverse(){
    
}
