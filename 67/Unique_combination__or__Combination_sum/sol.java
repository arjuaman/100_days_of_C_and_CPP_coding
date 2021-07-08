class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new LinkedList<List<Integer>>();
        List<Integer> temp = new ArrayList<Integer>();
        Arrays.sort(candidates);
        helper(candidates,ans,temp,target,0);
        return ans;
    }
    
    void helper(int[] c, List<List<Integer>> ans, List<Integer> temp, int target, int begin){
        if(target==0){
            ans.add(new ArrayList<>(temp));
            return;
        }
        for(int i=begin;i<c.length && target>=c[i];i++){
            temp.add(c[i]);
            helper(c,ans,temp,target-c[i],i); // not i + 1 because we can reuse same elements
            temp.remove(temp.size() - 1);
        }
    }
}