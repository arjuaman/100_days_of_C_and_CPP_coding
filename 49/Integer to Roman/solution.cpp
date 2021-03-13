class Solution {
public:
    bool containsFN(int n){
        //cout<<"\nYes, in 4 9 block";
        int num = n;
        while(num>0){
            int temp=num%10;
            if(temp==4 || temp==9){
                return true;
            }
            num /= 10;
        }
        return false;
    }
    string calc(int n, map<int,char> &mm,int val[],string &s){
        //8
        if(n<=0) return "";
        int ind=0;
        for(ind=0;ind<7;ind++){
            if(val[ind]>n)
                break;
        }
        ind -= 1;
        char x = mm[val[ind]];
        s += x;
        return calc(n-val[ind],mm,val,s);
    }
    string intToRoman(int num) {
        if (num==1) return "I";
        char alp[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int val[] = {1,5,10,50,100,500,1000};
        map<int,char> mm;
        for(int i=0;i<7;i++){
            mm[val[i]] = alp[i];
        }
        string out="";
        stack<int> dig;
        int n=num,temp,i=0;
        while(n>0){
            temp = n%10;
            int x = temp*pow(10,i);
            dig.push(x);
            n /= 10;
            i++;
        }
        //digits = 4 90 900 1000 : 1994
        while(!dig.empty()){
            int top = dig.top();  //1000
            dig.pop();
            if(mm.find(top)!=mm.end()){
                out += mm[top];
            }
            else{
                if(containsFN(top)){ //contains 4 or 9
                    //cout<<"\nreturned true";
                    auto it = mm.lower_bound(top);
                    int high = (*it).first;
                    ///cout<<"\nHigh is: "<<high;
                    int diff = high - top;
                    //cout<<"\nDiff is: "<<diff;
                    //out += (mm[diff]+mm[high]);
                    out += mm[diff];
                    out += mm[high];
                }
                else{
                    //8 lb5 3 lb1 2 lb1 1 
                    string s = "";
                    calc(top,mm,val,s);
                    out += s;
                }
            }
        }
        return out;
    }
};