class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int res=0;
        set<string> mails;
        for(string email:emails){
            
            string local="", domain="";
            int n = email.length();
            int i=0;
            bool plusFlag=false;
            
            while(email[i]!='@'){
                if(email[i]=='+'){
                    plusFlag=true;
                }
                if(email[i]!='.' && !plusFlag)
                    local += email[i];
                i++;
            }
            i++;
            while(i<n){
                domain += email[i];
                i++;
            }
            // cout<<local+'@'+domain<<"\n";
            mails.insert(local+'@'+domain);
        }
        return mails.size();
    }
};