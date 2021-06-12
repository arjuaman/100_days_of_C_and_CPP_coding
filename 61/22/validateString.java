import java.util.*;

public class validateString{
    public static void main(String[] args){
        /*
        "(){}[]", return true
        "(({[]}))", return true
        "{(})", return false
        */
        String s = "{(})";
        int n = s.length();
        if(validate(s,n)){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }

    private static boolean validate(String s, int n) {
        Stack<Character> stack = new Stack<Character>();
        if(n==0) return true;
        for(int i=0;i<n;i++){
            if(stack.empty()){
                stack.add(s.charAt(i));
                continue;
            }
            else if(s.charAt(i)=='{' || s.charAt(i)=='[' || s.charAt(i)=='(' ){
                stack.add(s.charAt(i));
            }
            else if((s.charAt(i)=='}' && stack.peek()=='{') || (s.charAt(i)==']' && stack.peek()=='[') || 
            (s.charAt(i)==')' && stack.peek()=='(') ){
                stack.pop();
            }
            else{
                stack.push(s.charAt(i));
            }
        }
        if(!stack.empty())
            return false;
        return true;
    }
}