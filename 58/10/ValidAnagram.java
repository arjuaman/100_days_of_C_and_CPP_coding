import java.io.*;
import java.util.*;
public class ValidAnagram{
    public static void main(String[] args) {
        /*
        s = "cat", t = "tac", return true
        s = "listen", t = "silent", return true
        s = "program", t = "function", return false
        */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {
            String s = br.readLine();
            try {
                String t = br.readLine();
                int count[] = new int[256];
                for(int i=0;i<s.length();i++){
                    count[s.charAt(i)]++;
                }
                for(int i=0;i<t.length();i++){
                    count[t.charAt(i)]--;
                }
                boolean flag=true;
                for(int i=0;i<256;i++){
                    if(count[i]!=0){
                        flag=false;
                        break;
                    }
                }
                if(!flag){
                    System.out.println("No!");
                }
                else{
                    System.out.println("Yes!");
                }
            } catch (IOException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        
        
    }
}
