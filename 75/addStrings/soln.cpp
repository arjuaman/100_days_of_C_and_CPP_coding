#define ll long long
class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.length(), n2 = num2.length();
        int i=0, j=0;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        string ans="";
        int temp=0;
        int carry=0;
        // 3 2 1
        // 1 1
        while(i<n1 || j<n2){
            temp=0;
            if(i<n1){
                temp += (num1[i]-'0');                
            }
            if(j<n2){
                temp += (num2[j]-'0');
            }
            
            temp += carry;
            carry = temp>=10?1:0;
            
            ans += to_string(temp%10);
            i++,j++;
        }
        
        while(i<n1){
            temp = 0;
            temp += (num1[i]-'0');
            carry = temp>10?1:0;
            ans += to_string(temp%10);
            i++;
        }
        
        while(j<n2){
            temp = 0;
            temp += (num2[i]-'0');
            carry = temp>10?1:0;
            ans += to_string(temp%10);
            j++;
        }
        
        if(carry){
            ans += '1';
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};