import java.util.*;
import java.lang.*;
class correct_capitalization{
    public static void main(String[] args){
        Scanner cin = new Scanner(System.in);
        String s = cin.nextLine();
        int n = s.length();
        boolean ans = checkCap(s,n);
        if(ans==true)
            System.out.println("Yes");
        else
            System.out.println("No");
    }

    static boolean checkCap(String s,int n){
        if(n<=1)
            return true;
        for(int i=1;i<n;i++){
            char c = s.charAt(i);
            char cx = s.charAt(i-1);
            if(Character.isUpperCase(c) && !Character.isUpperCase(cx)){
                return false;
            }
        }
        return true;
    } 

}