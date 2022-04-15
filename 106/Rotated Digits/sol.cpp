class Solution {
        // set<int> mirror = {0,1,8};
        // set<int> diffRot = {2,5};
        // set<int> toEach = {6,9};
        map<int,int> mirror = {{1, 1}, {0, 0}, {8, 8}, {2, 5}, {5, 2}, {6, 9}, {9, 6}};
public:
    int rotated(int n){
        string s;// = to_string(n);
        int num = n;
        while(num>0){
            int temp = num%10;
            if(mirror.find(temp)!=mirror.end()){
                s += to_string(mirror[temp]);
            }
            else{
                return -1;
            }
            num /= 10;
        }
        reverse(s.begin(), s.end());
        num = stoi(s);
        return num;
    }
    
    int rotatedDigits(int n) {
        
        int ans = 0;
        
        for(int i=1;i<=n;i++){
            int rot = rotated(i);
            if(rot!=-1 && i!=rot){
                ans++;
            }
        }
        
        return ans;
    }
};