#include <bits/stdc++.h>
using namespace std;

struct Segment {
  int start, end;
};

vector<int> optimal_points(vector<Segment> &segments) {
  vector<int> points;
  //write your code here
  
  sort(segments.begin(), segments.end(),
          [](Segment a, Segment b) {
  			return a.end < b.end;
	});
//	cout<<"\nAfter sorting\n";
//	for(auto it:segments){
//		cout<<it.start<<" "<<it.end<<"\n";
//	}
  
  Segment temp = segments[0];
  for(auto it:segments){
//  	cout<<"\n"<<temp.start<<" "<<temp.end<<"\n";
  	if(it.start<=temp.start && it.end>=temp.end){
  		continue;
	}
	else if(it.start>temp.end){
		points.push_back(temp.end);
		temp = it;
	}
	else if(it.start==temp.end){
		temp.start = it.start;
		temp.end = it.start;
	}
	else{
		temp.start = it.start;
//		temp.end = it.end;
	}	
//	cout<<"\n"<<temp.start<<" "<<temp.end<<"\n";
  }
//  cout<<"\n"<<temp.start<<" "<<temp.end<<"\n";
  points.push_back(temp.start);
  
//  for (size_t i = 0; i < segments.size(); ++i) {
//    points.push_back(segments[i].start);
//    points.push_back(segments[i].end);
//  }
  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}