string Solution::addBinary(string A, string B) {
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
