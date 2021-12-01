class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        string ans;
        int n=num;
        num = abs(num);
        while(num){
            int temp = num%7;
            num /= 7;
            ostringstream str1;
            str1 << temp;
            string geek = str1.str();
            ans += geek;
        }
        reverse(ans.begin(), ans.end());
        return n>0?ans:'-'+ans;
    }
};