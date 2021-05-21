public class ValidPal{
    public static void main(String[] args){
        /*
	    "abcba", return true
	    "foobof", return true (remove the first 'o', the second 'o', or 'b')
	    "abccab", return false
	    */
        String s = "abccab";
        int n = s.length();
        int i=0, j=n-1;
        boolean flag=true;
        while(i<j){
            if(s.charAt(i)!=s.charAt(j)){
                int i1= i+1, j1= j, i2=i,j2=j-1;
                while(i1<j1 && s.charAt(i1)==s.charAt(j1)){
                    i1++;j1--;
                }
                while(i2<j2 && s.charAt(i2)==s.charAt(j2)){
                    i2++;j2--;
                }
                flag = (i1>=j1) || (i2>=j2);
            }
            i++;
            j--;
        }
        
        if(flag==true)
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}