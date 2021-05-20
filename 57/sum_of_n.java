import java.util.*;
import java.lang.*;
import java.io.*;
public class sum_of_n{
    public static void main(String[] args) throws IOException{
        Scanner cin = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the number: ");
        int n = Integer.parseInt(br.readLine());
        //String b = br.readLine();
        System.out.printf("Sum is: %d",sum(n));
    }

    static int sum(int n){
        if(n==0){
            return 0;
        }
        return n + sum(n-1);
    }
}