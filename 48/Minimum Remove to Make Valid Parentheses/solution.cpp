class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.length();
        stack <int> stk;
        vector<int> opos,cpos;
        string outp="";
        int ocnt=0,ccnt=0;
        for(int i=0;i<n;i++){
            //int x = stk.top();
            if(s[i]==')' && stk.empty()){
                cpos.push_back(i);
                continue;
            }
            else if(s[i]=='('){
                ocnt++;
                stk.push(s[i]);
                opos.push_back(i);
            }
            else if(s[i]==')' && (stk.top())=='('){
                stk.pop();
                ocnt--;
                opos.pop_back();
            }
            //outp += s[i];
        }
        vector<int>::iterator it,itr;
        for(int i=0;i<n;i++){
            it = find (opos.begin(), opos.end(), i);
            itr = find (cpos.begin(), cpos.end(), i);
            if(it==opos.end() && itr==cpos.end()){
                outp+=s[i];
            }
        }
        
        return outp;
    }
};