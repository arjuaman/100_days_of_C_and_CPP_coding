import java.util.*;
import java.io.*;
import java.lang.*;
public class Recursion {
    static int count=0;
    public static void main(String[] args) throws IOException {
        BufferedReader cin = new BufferedReader(new InputStreamReader(System.in));
        int base = Integer.parseInt(cin.readLine());
        int power = Integer.parseInt(cin.readLine());
        int a1 = power(base,power);
        System.out.printf("Power using recursion is: %d and steps are: %d",a1,count);
        
        count=0;
        int a11 = epower(base,power);
        System.out.printf("Power using recursion is: %d and steps are: %d",a11,count);
    }
    static int power(int base, int power) {
        count++;
        if(power==0)
            return 1;
        return base * power(base, power-1);
    }

    static int epower(int base, int power){
        /*int ans=1;
        while(power!=1){
            count++;
        if(power%2==0){
            int temp = base * base; 
            ans = ans*temp;
            power /= 2;
        }
        else{
            ans = base * ans;
            power -= 1;
        }*/
        count++;
        if(power==0)
            return 1;
        else if(power==1)
            return base;
        else if(power%2==0){
            return epower(base*base,power/2);
        }
        else{
            return base * epower(base,power-1);
        }
    //}
    //return ans;
    }
}
