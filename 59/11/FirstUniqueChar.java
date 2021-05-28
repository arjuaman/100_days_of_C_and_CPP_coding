import java.io.*;import java.util.*;
public class FirstUniqueChar{
    public static void main(String[] args){
        /*
        "abcabd", return 2  
        "thedailybyte", return 1
        "developer", return 0
        */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {
            String s = br.readLine();
            int[] count = new int[256];
            for(int i=0;i<s.length();i++){
                count[s.charAt(i)]++;
            }
            boolean flag = false;
            int ans=-1;
            for(int i=0;i<s.length();i++){
                if(count[s.charAt(i)]==1){
                    flag=true;
                    ans = i;
                    break;
                }
            }
            System.out.println(ans);
        } 
        catch (Exception e) {
            //TODO: handle exception
            System.out.println(e);
        }
        
    }
}