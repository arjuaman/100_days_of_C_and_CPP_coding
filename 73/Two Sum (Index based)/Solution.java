class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int[] ans = new int[2];
        int ind1=0, ind2=n-1;
        // HashMap<Integer,Integer> map = new HashMap<>();
        DuplicateMap<Integer,Integer> map=new DuplicateMap<>();
        
        for(int i=0;i<n;i++){
            map.put(nums[i],i);
        }
        Arrays.sort(nums);
        while(ind1<ind2){
            if(nums[ind1]+nums[ind2]==target){
                if(nums[ind1]!=nums[ind2]){
                    ans[0]=map.get(nums[ind1],0);
                    ans[1]=map.get(nums[ind2],0);
                    return ans;
                }
                else{
                    ans[0]=map.get(nums[ind1],0);
                    ans[1]=map.get(nums[ind2],1);
                    return ans;
                }
            }
            else if(nums[ind1]+nums[ind2]<target){
                ind1++;
            }
            else if(nums[ind1]+nums[ind2]>target)
                ind2--;
        }
        return new int[2];
    }
    
    public class DuplicateMap<K, V> {

    private Map<K, ArrayList<V>> m = new HashMap<>();

    public void put(K k, V v) {
        if (m.containsKey(k)) {
            m.get(k).add(v);
        } else {
            ArrayList<V> arr = new ArrayList<>();
            arr.add(v);
            m.put(k, arr);
        }
    }

     public ArrayList<V> get(K k) {
        return m.get(k);
    }

    public V get(K k, int index) {
        return m.get(k).size()-1 < index ? null : m.get(k).get(index);
    }
}
}