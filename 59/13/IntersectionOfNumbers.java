import java.util.*;
import java.io.*;
public class IntersectionOfNumbers{
    public static void main(String[] args){
        /*
        nums1 = [2, 4, 4, 2], nums2 = [2, 4], return [2, 4]
        nums1 = [1, 2, 3, 3], nums2 = [3, 3], return [3]
        nums1 = [2, 4, 6, 8], nums2 = [1, 3, 5, 7], return []
        */
        int[] nums1 = {1, 2, 3, 3};
        int[] nums2 = {3, 3};
        HashSet<Integer> nums = new HashSet<Integer>();
        for(int i:nums1){
            nums.add(i);
        }
        HashSet<Integer> ans = new HashSet<Integer>();
        //int[] ans=new int[nums.size()];
        int j=0;
        for(int i:nums2){
            if(nums.contains(i)){
                ans.add(i);
            }
        }
        int[] o = new int[ans.size()];
        for(int i:ans){
            o[j]=i;j++;
        }
        for(int i:o){
            System.out.printf("%d, ",i);
        }
    }
}