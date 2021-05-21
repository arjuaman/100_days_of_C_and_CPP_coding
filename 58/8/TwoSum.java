import java.util.HashMap;

public class TwoSum{
    public static void main(String[] args){
    /*
	    [1, 3, 8, 2], k = 10, return true (8 + 2)
	    [3, 9, 13, 7], k = 8, return false
	    [4, 2, 6, 5, 2], k = 4, return true (2 + 2)
	*/
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
        int[] arr = {3, 9, 13, 7};
        int k = 8;
        int n = arr.length;
        for(int i=0;i<n;i++){
            int diff = k-arr[i];
            if(map.containsKey(diff)){
                System.out.println("Yes, found!");
                break;
            }
            else{
                map.put(arr[i],i);
            }
        }
    }
}