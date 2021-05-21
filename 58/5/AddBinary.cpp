#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define debug(n1) cout << n1 << endl
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
string to_lower(string s) {
    for(char &c : s)
        c = tolower(c);
	return s;
}
int STOI(string s) {
    int num = 0;
    int po = 1;
    per(i , s.length() - 1 , 0) {
        num += po * (s[i] - '0');
        po *= 10;
    }
    return num;
}
int toDec(int n){
	int res=0, num=n;
	int i=0,j=1;
	while(num>0){
		int temp = num%10;
		res = res + temp*pow(2,i);
		i++;
		num/=10;
	}
	return res;
}
int toBinary(int n){
	int num=n;
	int i=0,j=1,res=0;
	while(num>0){ //15 7 
		int temp = num%2;  //1 1  
		res = res + temp*pow(10,i);  
		i++;
		num/=2;
	}
	return res; //1111
}
string addBinary(string A, string B) {
    /*
    A : "1010110111001101101000"  21      2847592      
    B : "1000011011000000111100110" 24    17662438     
    ans = 20510030 01001110001111010101001110
    */
    /*
            100 -> 001              111 -> 111
             11 -> 11               111 -> 111
            111 -> 111 -> 111      1110 -> 0111 -> 1110
    */
    int n1 = A.length(), n2 = B.length();
    reverse(begin(A),end(A));
    reverse(begin(B),end(B));
    int carry=0;
    int i=0,j=0;
    string ans="";
    while(i<n1 || j<n2){
        int temp=0;
        if(i<n1){
            temp += (A[i]-'0');
        }
        if(j<n2){
            temp += (B[j]-'0');
        }
        temp += carry;
        carry = temp>1?1:0;
        if(temp==2 || temp==0){
            ans += '0';
        }
        else if(temp==3 || temp==1){
            ans += '1';
        }
        i++;j++;
    }
    if(carry==1)
        ans += '1';
    reverse(begin(ans),end(ans)); 
    return ans;
}

int main() {
	/*
	"100" + "1", return "101"
	"11" + "1", return "100"
	"1" + "0", return  "1"
	*/
	SPEED;
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		/*int n1 = STOI(s1);
		int n2 = STOI(s2);
		n1 = toDec(n1);
		n2 = toDec(n2);
		int ans = n1+n2;*/
		cout<<addBinary(s1,s2)<<"\n";
	}
	return 0;
}


