class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        int n = s.length();
        //stk.push(s[0]);
        if(s[0]=='}' || s[0]==']' || s[0]==')')
            return false;
        for(int i=0;i<n;i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='(' ){
                stk.push(s[i]);
            }
            else if(stk.empty()){
                return false;
            }
            else if(s[i]==')' && (stk.top())=='('){
                stk.pop();
            }
            else if(s[i]=='}' && (stk.top())=='{'){
                stk.pop();
            }
            else if(s[i]==']' && (stk.top())=='['){
                stk.pop();
            }
            else{
                return false;
            }
        }
        if(stk.empty())
            return true;
        return false;
    }
};