#define ll long long
class Solution {
public:
    ll to_binary(int num){
        ll ans=0;
        int i=0;
        int n = num;
        while(n){
            int temp = n%2;
            ans += temp*pow(10,i);
            n /= 2;
            i++;
        }
        return ans;
        
    }
    
    ll to_number(ll num){
        ll ans=0;
        int n = num, i=0;
        while(n){
            int temp = n%10;
            ans += temp*pow(2,i);
            n /= 10;
            i++;
        }
        
        return ans;
    }
    
    ll STOI(string s){
        ll num=0;
        ll po=1;
        for(ll i=s.length()-1;i>=0;i--){
            num += po*(s[i]-'0');
            po *= 10;
        }
        return num;
    }
    
    int findComplement(int num) {
        ll binary = to_binary(num);
        cout<<binary;
        
        string s = to_string(binary);
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')
                s[i]='1';
            else
                s[i]='0';
        }
        
        ll x = STOI(s);
        
        ll n = to_number(x);
        cout<<"\n"<<n;
        return n;
    }
};