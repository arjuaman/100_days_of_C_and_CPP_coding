import java.util.*;
public class LonngestCommonPrefix{
    public static void main(String[] args){
        /*
	    ["colorado", "color", "cold"], return "col"
	    ["a", "b", "c"], return ""
	    ["spot", "spotty", "spotted"], return "spot"
	    */
        ArrayList<String> a = new ArrayList<String>();
        a.add("spot");
        a.add("spotty");
        a.add("spotted");
        System.out.printf("Longest prfix is: %s",lcp(a));
    }

    static String lcp(ArrayList<String> a){
        //Collections.sort(a);
        // Collections.sort(a, new Comparator<String>(){
        //     public int compare(String s1, String s2){
        //         return s1.length() - s2.length();
        //     }
        // });
        //Collections.reverse(a);
        // for(String s:a){
        //     System.out.println(s);
        // }
        
            String prefix= a.get(0);
            int n = a.size();
            if(n==0) return "";
            if(n==1) return a.get(0);
            for(int i=1;i<n;i++){
                prefix = getPrefix(prefix,a.get(i));
                //System.out.printf("prefix is: %s ",prefix);
            }
        
        return prefix;
    }

    static String getPrefix(String a, String b){
        String pref="";
        int i=0,j=0;
        int n1 = a.length();
        int n2 = b.length();
        while(i<n1 && j<n2 && a.charAt(i)==b.charAt(j)){
            pref += a.charAt(i);
            i++;
            j++;
        }
        return pref;
    }
}