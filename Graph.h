/******************************************
Q10. Prims or kruskal algorithm for Minimal Spanning Tree
*******************************************/
#include<iostream>

using namespace std;
class Edge
{
	 int src,dest,weight;
	public:Edge(int src=0,int dest=0,int weight=0);
	       
		int getWeight();
	
	        void input_data();
	       
		void show_data();
		
	       int give_weight();
	       
	
	       void swap(Edge &obk);
	       

};

class Graph
{
	
	
		int *v,E;
		Edge *edge_obj;
		set<set<int>> *Set;
	public:	Graph(int v=0,int E=0);
	       void create_graph();
	       
	       void show_data();
	       
		void Display();
		void Sort();
		     
		
};

