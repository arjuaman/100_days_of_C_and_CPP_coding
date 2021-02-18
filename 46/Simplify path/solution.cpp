class Solution {
public:
    string simplifyPath(string path) {
        int n = path.length();
        stack<string> stk;
        vector<string> vec;
        string st="";
        for(int i=0;i<n;i++){
            if(path[i] == '//')
                path[i]='/';
            if(path[i] != '/'){
                st += path[i];
            }
            else{
                if(st!="")
                    vec.push_back(st);
                st="";
            }
        }
        if(st!="")
            vec.push_back(st);
        /* for(auto it:vec){
            cout<<it<<" ";
        } */
        string curdir="";
        int m = vec.size();
        for(int i=0;i<m;i++){
            if(vec[i]=="."){
                continue;
            }
            else if(!stk.empty() && vec[i]==".."){
                stk.pop();
            }
            else if(stk.empty() && vec[i]==".."){
                continue;
            }
            else{
                stk.push(vec[i]);
            }
        }
        if(stk.empty()){
            return "/";
        }
        stack <string> revstack;
        while(!stk.empty()){
            string tp = stk.top();
            stk.pop();
            revstack.push(tp);
        }
        while(!revstack.empty()){
            string tp = revstack.top();
            revstack.pop();
            cout<<tp<<" ";
            curdir += '/' + tp;
        }
        cout<<"\n";
        
        return curdir;
    }
};