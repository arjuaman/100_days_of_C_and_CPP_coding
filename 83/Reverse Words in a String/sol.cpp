#define pb push_back
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.length();
        string temp="";
        for(int i=0;i<n-1;i++){
            if(s[i]!=' ')
                temp+=s[i];
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
                //temp+= s[i];
                if(s[i+1]==' '){
                    if(s[i]==' '){
                        continue;
                    }
                    else{
                        words.pb(temp);
                    }
                }
                else if(i==n-2){
                    temp+=s[i+1];
                }
                else{
                    continue;
                }
            }
            else{
                temp="";
            }
        }
        if(!temp.empty()){
            words.pb(temp);
            temp="";
        }
        if(words.size()==0 || words.size()==1)
            return s;
        //for(string it:words)
        //    cout<<it<<" ";
        temp="";
        reverse(begin(words),end(words));
        for(int i=0;i<size(words);i++){
            if(i!=size(words)-1)
                temp+=words[i]+" ";
            else
                temp+=words[i];
        }
            
            
        return temp;
    }
};