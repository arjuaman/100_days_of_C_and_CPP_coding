class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length(), ans=0;
        // set<string> bag;
        if(n<3) return 0;
        int left = 0, right = 0, end = n-1;
        unordered_map<char, int> map;
        while(right != n){
            map[s[right]] += 1; // adding new element to window
            while(map['a'] and map['b'] and map['c']) // while(window is good)
            {
                ans += 1 + (end - right); 
				// removing first element[means shrinking window from front to form new window]
                map[s[left]] -= 1; 
                left++;
            }
            right++;
        }
        return ans;
    }
};