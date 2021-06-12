import java.util.*;
import java.lang.*;
import java.io.*;
public class RemoveAdjacentDuplicates{
    public static void main(String[] args){
        /*
        s = "abccba", return ""
        s = "foobar", return "fbar"
        s = "abccbefggfe", return "a"
        */
        String s = "foobar";
        Stack<Integer> stack = new Stack<Integer>();
        int n = s.length();
        for(int i=0;i<n;i++){
            if(stack.empty()){
                stack.add(i);
                continue;
            }
            int top = stack.peek();
            if(s.charAt(top)==s.charAt(i)){
                stack.pop();
            }
            else{
                stack.add(i);
            }
        }
        String ans="";
        while(!stack.empty()){
            ans += s.charAt(stack.pop());
        }

        StringBuilder input1 = new StringBuilder();
 
        // append a string into StringBuilder input1
        input1.append(ans);
 
        // reverse StringBuilder input1
        input1.reverse();
 
        // print reversed String
        System.out.println(input1);

        //System.out.println(ans);
    }
}