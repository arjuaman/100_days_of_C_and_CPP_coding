function uniquePaths(m: number, n: number): number {
    // if(m==1 || n==1) return 1;
    // return uniquePaths(m-1,n) + uniquePaths(m,n-1);
    let dp:number[][] = new Array(m).fill(0).map(() => new Array(n).fill(0));
    // for(let i=0;i<m;i++){
    //     for(let j=0;j<n;j++){
    //         dp[i][j].push(0);
    //     }
    // }
    
    for(let i=0;i<m;i++)
        dp[i][0] = 1;
    
    for(let i=0;i<n;i++)
        dp[0][i] = 1;
    
    for(let i=1;i<m;i++){
        for(let j=1;j<n;j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    
    return dp[m-1][n-1];
};