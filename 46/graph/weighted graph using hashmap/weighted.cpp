#include <bits/stdc++.h>
using namespace std;

class Graph{
	//int V;
	unordered_map<string,list<pair<string,int>>> l;
public:
	void addEdge(string x,string y,bool bidirec,int wt){
		l[x].push_back(make_pair(y,wt));
		if(bidirec){
			l[y].push_back(make_pair(x,wt));
		}
	}
	void display(){
		for(auto p:l){
			string city = p.first;
			list<pair<string,int>> nbrs = p.second;
 				cout<<city<<" -> ";
			for(auto it:nbrs){
				string dest = it.first;
				int dist = it.second;

				cout<<" "<<dest<<", "<<dist;
			}
			cout<<endl;
		}
	}
};

int main(){
	Graph g;
	g.addEdge("A","B",1,20);
	g.addEdge("B","D",1,40);
	g.addEdge("A","C",1,10);
	g.addEdge("C","D",1,40);
	g.addEdge("A","D",0,50);
	g.display();
	return 0;
}