class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> vec;
        for(int i=1;i<=n;i++)
            vec.push_back(i);
        sort(vec.begin(), vec.end(),
          [](int a, int b) {
            string a1 = to_string(a);
            string a2 = to_string(b);
            return a1<a2;
        });
        
        return vec;
    }
};