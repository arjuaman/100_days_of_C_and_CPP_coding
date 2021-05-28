import java.util.*;
import java.lang.*;
import java.io.*;
public class UncommonWords{
    ArrayList<String> ans = new ArrayList<String>();
    HashSet<String> set = new HashSet<String>();

    public String[] uncommonFromSentences(String s1, String s2) {
        set = func(s1,s2);
        set.clear();
        set = func(s2,s1);
    
        int n = ans.size();
        String a[] = new String[n];
        for(int i=0;i<n;i++){
            a[i] = ans.get(i);
        }
        return a;
    }
    
    private HashSet<String> func(String s1, String s2) {
        String[] s = s1.split(" ");
        String[] m = s2.split(" ");
        HashMap<String,Integer> mp = new HashMap<>();
        HashMap<String,Integer> mp2 = new HashMap<>();
        for(String i:s){
            //set.add(i);
            Integer j = mp.get(i);
            mp.put(i,(j == null) ? 1 : j + 1);
        }
        for(String i:m){
            //set.add(i);
            Integer j = mp2.get(i);
            mp2.put(i,(j == null) ? 1 : j + 1);
        }
        
        // for (Map.Entry<String, Integer> val : mp.entrySet()) {
        //     System.out.println("Element " + val.getKey() + " "
        //                        + "occurs"
        //                        + ": " + val.getValue() + " times");
        // }
        
        for (Map.Entry<String, Integer> val : mp.entrySet()) {
            if(val.getValue()==1){
                //System.out.println("Adding "+val.getKey());
                set.add(val.getKey());
            }
        }
        for (Map.Entry<String, Integer> val : mp2.entrySet()) {
            if(val.getValue()==1){
                 if(!mp.containsKey(val.getKey())){
                    ans.add(val.getKey());
                 }
            }
        }

        return set;
    }
    
}