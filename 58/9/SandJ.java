import java.util.*;
import java.lang.*;
public class SandJ{
    public static void main(String[] args){
        /*
    	jewels = "abc", stones = "ac", return 2
	    jewels = "Af", stones = "AaaddfFf", return 3
	    jewels = "AYOPD", stones = "ayopd", return 0
	    */
        String jewels = "AYOPD";
        String stones = "ayopd";
        int[] count = new int[256];
        for(int i=0;i<jewels.length();i++){
            count[jewels.charAt(i)]++;
        }
        for(int i=0;i<stones.length();i++){
            count[stones.charAt(i)]++;
        }
        int ans=0;
        for(int i=0;i<256;i++){
            if(count[i]==2){
                ans++;
            }
        }
        System.out.println(ans);
    }
}