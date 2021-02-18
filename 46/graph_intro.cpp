#include <bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	list<int> *l; //array of list. We kept pointer because size is not known at runtime
public:
	Graph(int V){
		this->V=V;
		l = new list<int> [V]; //size defined
	}
    void addEdge(int x,int y){ //between two nodes
 		l[x].push_back(y);
 		l[y].push_back(x); 
    }
    void display(){
    	for(int i=0;i<V;i++){
    		cout<<"Vertex"<<i<<"->";
    		for(int nbr:l[i]){
    			cout<<nbr<<" ";
    		}
    		cout<<endl;
    	}
    }
};

int main(){
    Graph g(4); //graph with 4 vertices
    g.addEdge(0,1); //bidirec edge between 0 and 1 node
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(1,2);
    g.display();
	return 0;
}