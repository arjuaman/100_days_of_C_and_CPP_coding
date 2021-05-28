import java.io.*;
import java.util.*;
public class SpotTheDIfference {
    public static void main(String[] args) throws IOException {
        /*
        s = "foobar", t = "barfoot", return 't'
        s = "ide", t = "idea", return 'a'
        s = "coding", t "ingcod", return ''
        */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        String t = br.readLine();
        System.out.println(func(s,t));
    }
    public static char func(String s,String t){
        int n = s.length();
        int m = t.length();
        char ch = '\0';
        if(m==n)
            return ch;
        int count[] = new int[256];
        for(int i=0;i<t.length();i++){
            count[t.charAt(i)]++;
        }
        for(int i=0;i<s.length();i++){
            count[s.charAt(i)]--;
        }
        for(int i=0;i<256;i++){
            if(count[i]==1){
                System.out.println("Yes!"+i);
                ch= (char) (i);
            }
        }
        return ch;
    }
}
