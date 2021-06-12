import java.util.*;
public class GreaterElements{
    public static void main(String[] args){
        /*
        nums1 = [4,1,2], nums2 = [1,3,4,2], return [-1, 3, -1] 
        nums1 = [2,4], nums2 = [1,2,3,4], return [3, -1] 
        */
        int[] nums1 = {4,1,2};
        int[] nums2 = {1,3,4,2};
        int[] ans= new int[nums1.length];
        HashSet<Integer> set = new HashSet<Integer>();
        for(int i=0;i<nums2.length;i++){
            set.add(nums2[i]);
        }
        for(int i=0;i<nums1.length;i++){
            for(int j=0;j<nums2.length;j++){
                if( nums2[j]>nums1[i] && set.contains(nums2[j])){
                    //match found
                    ans[i] = nums2[j];
                    //now readjust nums2 to delete used element
                    set.remove(nums2[j]);
                }
                else{
                    ans[i] = -1;
                }
            }
        }

       for(int i:ans){
           System.out.println(i);
       }
    }
}