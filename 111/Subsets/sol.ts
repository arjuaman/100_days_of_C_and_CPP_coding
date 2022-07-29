function subsets(nums: number[]): number[][] {
    let n = nums.length;
    let ans: number[][] = []; // [] is always first value
    let temp: number[] = [];
    helper(nums,0,ans,temp);
    return ans;
};

function helper(arr: number[], i: number, ans: number[][], temp: number[]):void{
    ans.push(temp.slice());
    for(let j=i;j<arr.length;j++){
        temp.push(arr[j]);
        helper(arr,j+1,ans,temp);
        temp.pop();
    }
}