import java.util.*;

public class ReverseString {
    public static void main(String[] args) {
        // Scanner cin = new Scanner(System.in);
        // String s = cin.readLine();
        String s = "The Daily Byte";
        System.out.println(reverseString(s));
    }

    public static String reverseString(String s) {
        int n = s.length();
        char[] ans = s.toCharArray();
        for(int i=0;i<n/2;i++){
            char temp = ans[i];
            ans[i] = ans[n-i-1];
            ans[n-i-1] = temp;
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < ans.length; i++) {
            sb.append(ans[i]);
        }
  
        return sb.toString();
        //return lol;
    } 
}
