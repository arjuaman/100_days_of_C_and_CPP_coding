// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& slist) {
        //code here
        map<string, vector<int>> freq;
        int i=0;
        for(auto s:slist){
            string sd = s;
            sort(sd.begin(), sd.end());
            freq[sd].push_back(i);
            i++;
        }
        
        i=0;
        vector<vector<string>> ans;
        for(auto it:freq){
            vector<string> temp;
            for(auto j:it.second){
                temp.push_back(slist[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends