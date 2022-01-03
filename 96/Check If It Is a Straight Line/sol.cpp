class Solution {
public:
    
    bool isOnLine(vector<int> p1, vector<int> p2, vector<int> p3){
        int x = p1[0], y = p1[1], x1 = p2[0], y1 = p2[1], x2 = p3[0], y2 = p3[1];
        return ((y - y1) * (x2 - x1) == (y2 - y1) * (x - x1));                      // slope
    }
    
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c.size()==2)
            return true;
        for(int i=2;i<c.size();i++){
            if(!isOnLine(c[i],c[0],c[1]))
                return false;
        }
        
        return true;
    }
};