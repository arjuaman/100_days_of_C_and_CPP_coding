class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if(s1.compare(s2)==0) return true;
        if(s1.length()==s2.length()) return false;
        string smol, large;
        int n = s1.length(), sm = s2.length();
        smol = n<sm?s1:s2;
        large = n>sm?s1:s2;
        n = large.length(), sm = smol.length();
        
        vector<string> sup,sub;
        string temp="";
        for(int i=0;i<sm;i++){
            if(smol[i]==' ')
                sub.push_back(temp), temp="";
            else
                temp += smol[i];
        }
        sub.push_back(temp);
        temp="";
        for(int i=0;i<n;i++){
            if(large[i]==' ')
                sup.push_back(temp), temp="";
            else
                temp += large[i];
        }
        sup.push_back(temp);
        
        if(sup.size()==sub.size()) return false;
        
        //vector<int>::iterator it;
        for(int i=0;i<sub.size();i++){
            vector<string>::iterator position = find(sup.begin(), sup.end(), sub[i]);
            if (position != sup.end()) // == myVector.end() means the element was not found
                sup.erase(position);
        }
        temp="";
        for(string it:sup)
            temp += it + " ";
        cout<<temp;  
        large += " ";
        size_t found = large.find(temp);
        if(found==string::npos){
            cout<<"\nNot found";
            return false;
        }
        return true;
    }
};