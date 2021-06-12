import java.util.Stack;
import java.io.*;
import java.lang.*;
public class CompareKeystrokes{
    public static void main(String[] args) throws IOException{
        /*
        s = "ABC#", t = "CD##AB", return true
        s = "como#pur#ter", t = "computer", return true
        s = "cof#dim#ng", t = "code", return false
        */
        // BufferedReader cin = new BufferedReader(new InputStreamReader(System.in));
        // String s = cin.readLine();
        // String t = cin.readLine();
        String s = "como#pur#ter", t = "computer";
        if(checkKeystroke(s,t)==0)
            System.out.println("Yes");
        else
            System.out.print("No" + checkKeystroke(s,t));
    }

    private static int checkKeystroke(String s, String t) {
        int n = s.length();
        int m = t.length();
        Stack<Character> stack = new Stack<Character>();
        //stack.add((char)1);
        for(int i=0;i<n;i++){
            if(stack.empty() && s.charAt(i)=='#'){
                continue;
            }
            if(s.charAt(i)!='#'){
                stack.add(s.charAt(i));
            }
            else if(s.charAt(i)=='#'){
                stack.pop();
            }
        }

        String a1="",a2="";
        while(!stack.empty()){
            a1 += stack.pop();
        }

        stack.clear();
        for(int i=0;i<m;i++){
            if(stack.empty() && t.charAt(i)=='#'){
                continue;
            }
            if(t.charAt(i)!='#'){
                stack.add(t.charAt(i));
            }
            else if(t.charAt(i)=='#'){
                stack.pop();
            }
        }

        while(!stack.empty()){
            a2 += stack.pop();
        }
        a1 = a1.strip();
        a2 = a2.strip();
        System.out.print(a1 + " " + a2 + "\n" + a1.length() + " " + a2.length()+" \n");
        if(a1.length()!=a2.length())
            return 1;
        for(int i=0;i<a1.length();i++){
            if(a1.charAt(i)!=a2.charAt(i)){
                System.out.print("Different at "+i);
                return 1;
            }
                
        }
        return 0;
    }
}