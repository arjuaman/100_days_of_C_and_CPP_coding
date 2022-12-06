function permute(nums: number[]): number[][] {
    let ans:number[][] = [];
    helper(nums,0,nums.length,ans);
    return ans;
};

function helper(nums:number[], l:number, r:number, ans: number[][]):void{
    if(l==r){
        ans.push(nums.slice());
        return;
    }
    for(let i=l;i<r;i++){
        [nums[i],nums[l]] = [nums[l],nums[i]];
        helper(nums,l+1,r,ans);
        [nums[i],nums[l]] = [nums[l],nums[i]];
    }
}