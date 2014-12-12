#pragma once
#include <GeKo_Gameplay/AI/GraphNode.h>
#include <vector>

class Graph 
{
public: 
	Graph();
	~Graph();
	
	 void addGraphNode(GraphNode* node);
	 std::vector<GraphNode*>* getGraph();
	
protected:
	  std::vector<GraphNode*> m_nodes;
	 
};