class Solution {
   
    static int LowerBound(int a[], int x) { // x is the target value or key
        int l=-1,r=a.length;
        while(l+1<r) {
            int m=(l+r)>>>1;
            if(a[m]>=x) r=m;
            else l=m;
        }
    return r;
    }

    public int[] toIntArray(List<Integer> list){
        int[] ret = new int[list.size()];
        for(int i = 0;i < ret.length;i++)
        ret[i] = list.get(i);
        return ret;
    }    
    
    public int lengthOfLIS(int[] nums) {
        List<Integer> seq = new ArrayList<Integer>();
        seq.add(nums[0]);
        int n = nums.length;
        for(int i=1;i<n;i++){
            int m = seq.size();
            if(nums[i]>seq.get(m-1)){
                seq.add(nums[i]);
            }
            else{
                int pos = LowerBound(toIntArray(seq),nums[i]);
                seq.set(pos,nums[i]);
            }
        }
        return seq.size();
    }
}