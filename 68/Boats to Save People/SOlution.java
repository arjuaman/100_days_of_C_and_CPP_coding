class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int n = people.length, left=0, right=n-1;
        int ans=n;
        Arrays.sort(people);
        if(n==1)
            return 1;
        while(left<right){
            if(people[left]+people[right]<=limit){
                ans-=1;
                left+=1;
            }
            right-=1;
        }
        return ans;
    }
}