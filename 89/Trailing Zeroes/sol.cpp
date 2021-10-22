int Solution::solve(int A) {
    if(A&1)
        return 0;
    int ans=1;
    while(A){
        A = A>>1;
        if(A&1)
            return ans;
        ans++;
    }
    return ans;
}
