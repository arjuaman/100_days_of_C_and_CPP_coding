import java.util.*;
//import java.io.*;
//import java.lang.*;
public class UniquePermutationNumbers {
    public static void main(String args[]){
        /*
        [1,1,2] -> [1,1,2] , [1,2,1], [2,1,1]
         */
        // Set <ArrayList<Integer>> set = new HashSet<ArrayList<Integer>>();
        // ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();
        
        ArrayList<Integer> temp = new ArrayList<>();
        temp.add(1);
        temp.add(1);
        temp.add(2);
        Solution sol = new Solution();
        sol.permute(temp,0,2);
        
        //System.out.printf("Set is, finally: ");
        System.out.println(sol.set);
        System.out.println(sol.ans);
    }

    static class Solution{
        HashSet <ArrayList<Integer>> set = new HashSet<>();
        ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();

        public ArrayList<Integer> interchange(ArrayList<Integer> a, int l, int r){
            //swap a[l] and a[r]
            int temp = a.get(l);
            a.set(l,a.get(r));
            a.set(r,temp);
            return a;
        }
    
        public void permute(ArrayList<Integer> a, int l, int r){
            if(l==r){
                //System.out.println(set);
                ArrayList<Integer> temp = new ArrayList<>(a);
                //System.out.println(a);
                set.add(temp);
                ans.add(temp);
                return;
            }
            for(int i=l;i<=r;i++){
                a = interchange(a,l,i);
                permute(a,l+1,r);
                a = interchange(a,l,i);
            }
        }
    }
        
    
}
