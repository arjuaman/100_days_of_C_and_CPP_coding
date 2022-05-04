class Solution {
public:
    bool isPathCrossing(string path) {
        float dist = 0;
        pair<int,int> p({0,0});
        set<pair<int,int>> coordinates;
        coordinates.insert(p);
        for(int i=0;i<path.length();i++){
            if(path[i]=='N'){
                p.second++;
            }
            else if(path[i]=='S'){
                p.second--;
            }
            else if(path[i]=='E'){
                p.first++;
            }
            else if(path[i]=='W'){
                p.first--;
            }
            
            if(coordinates.count(p))
                return true;
            else
                coordinates.insert(p);
        }
        
        return false;
    }
};