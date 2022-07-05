function singleNumber(nums: number[]): number[] {
    let ans:number[] = [];
    let net_xor:number = 0;
    for(let i=0;i<nums.length;i++){
        net_xor = net_xor^nums[i];
    }
    let temp = net_xor, idx = 0;
        
    //[1,2,1,3,2,5] -> net_xor = 3^5 = 6
    //6 = 110 => rightmost set bit at 2nd position => mask
    
    for(let i=0;i<32;i++){
        if(temp&1){
            idx = i; //idx = 1
            break;
        }
        temp = temp>>1;
    }
    
    let bucket1:number[] = []; 
    let b2:number[]= [];
    for(let i=0;i<nums.length;i++){
        if((nums[i]>>idx) & 1)
            bucket1.push(nums[i]);
        else
            b2.push(nums[i]);
    }
    
    let x:number = 0;
    for(let i=0;i<b2.length;i++){
        x = x^b2[i];
    }
    ans.push(x);
    ans.push(x^net_xor);
    
    return ans;
};