class Solution {
    public boolean checkIfExist(int[] arr) {
        
        if(arr.length<=1)
            return false;
        
        HashSet<Integer> set = new HashSet<>();
        // boolean flag = false;
        // System.out.println(7==7.0);

        for(int i=0; i<arr.length; i++){
            // System.out.println((float)arr[i]/2);
            if(set.contains(arr[i]*2) || (arr[i]%2==0 && set.contains(arr[i]/2))){
                // we need to ensure that the current number is even, else we will get wrong anwer like in the case of 3 and 7 being in the input. Here for 7, 7/2 would give 3 (not 3.5) which is present in the HashSet but not what we need.
                return true;
            }
            set.add(arr[i]);
        }
        
        return false;
    }
}