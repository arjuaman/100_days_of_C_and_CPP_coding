class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0, j=0, n= typed.length(), m= name.length();
        while(i<n && j<m){
            if(typed[i]==name[j]){
                // cout<<typed[i]<<" "<<j<<" ";
                i++,j++;
            }
            else{
                i++;
            }
        }
        
        int len = j;
        int misCount=0, unique=0;
        for(i=0;i<n-1;i++){
            if(typed[i]!=typed[i+1])
                misCount++;
        }
        for(j=0;j<m-1;j++){
            if(name[j]!=name[j+1])
                unique++;
        }
        
        // cout<<"\n"<<len<<" "<<m<<" "<<misCount<<" "<<unique;
        
        return len==m && misCount==unique;
    }
};