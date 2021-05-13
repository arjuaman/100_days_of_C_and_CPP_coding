import java.util.*;
import java.lang.*;
public class valid_palindrome{
    public static void main(String[] args){
        Scanner cin = new Scanner(System.in);
        String s = cin.nextLine();
        //System.out.println(s);
        s = s.toLowerCase();
        int n = s.length();
        int i=0, j=n-1;
        boolean flag=true;
        while(i<j){
            while(!Character.isLetterOrDigit(s.charAt(i)) && i<j){
                i++;
            }
            while(!Character.isLetterOrDigit(s.charAt(j)) && i<j){
                j--;
            }
            if(s.charAt(i)!=s.charAt(j)){
                flag=false;
                break;
            }
            i++;
            j--;
        }
        if(flag==true)
            System.out.println("Is valid palindrome");
        else
            System.out.println("Not valid");
    }
}