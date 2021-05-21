import java.io.*;import java.util.*;import java.lang.*;
public class AddBinary{
    public static void main(String[] args) throws IOException{
        BufferedReader cin = new BufferedReader(new InputStreamReader(System.in));
        String s1 = cin.readLine();  //100
        String s2 = cin.readLine();  //11
        int n1=stoi(s1);
        int n2=stoi(s2);
        n1 = btod(n1);
        n2 = btod(n2);
        int ans = n1+n2;
        System.out.println(dtob(ans));        
    }

    static int btod(int n){
        int num = n;
        double res=0,i=0;
        while(num>0){
            int temp = num%10;
            res = res + temp*Math.pow(2,i);
            i++;
            num/=10;
        }
        return (int)res;
    }

    static int dtob(int n){
        int num = n;
        double res=0,i=0;
        while(num>0){
            int temp = num%2;
            res = res + temp*Math.pow(10,i);
            i++;
            num/=2;
        }
        return (int)res;
    }

    static int stoi(String s){
        int n=0;
        int p=1;
        for(int i=s.length()-1;i>=0;i--){
            char ch = s.charAt(i);
            n = n + p*(ch-'0');
            p *= 10;
        }
        return n;
    }
}