function findTheWinner(n: number, k: number): number {
    if(n==1) return 1;
    if(k==1) return n;
    return helper(n,k)+1;
};

function helper(n:number, k:number):number{
    if(n==1) return 0;
    return (helper(n-1,k)+k)%n;
}