string reverseWords(string S) 
{ 
    // code here 
    int n = S.length();
    string st="";
    int wordlen=1;
    for(int i=0;i<n;i++){
        if(S[i]=='.'){
            wordlen++;
        }
    }
    vector<string> words;
    for(unsigned int i=0;i<n;i++){
        if(S[i]!='.'){
            st += S[i];
        }
        else{
            words.push_back(st);
            st="";
        }
    }
    words.push_back(st);
    
    reverse(words.begin(),words.end());
    st="";
    for(int i=0;i<wordlen;i++){
        if(i==wordlen-1){
            st +=   words[i];
        }
        else{st +=   words[i] + '.';}
    }
    //st = st[1:];
    return st;
} 