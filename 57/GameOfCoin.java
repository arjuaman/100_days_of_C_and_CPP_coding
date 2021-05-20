public class GameOfCoin {
    public static void main(String[] args){
        int[] arr = {1,7,9,8};
        System.out.println(maxProfit(arr,0,arr.length-1));
    }

    static int maxProfit(int[] arr,int l, int r){
        if(l+1==r){
            return Math.max(arr[l],arr[r]);
        }
        return  Math.max(arr[l]+Math.min(maxProfit(arr,l+2,r),maxProfit(arr,l+1,r-1)),
                arr[r]+Math.min(maxProfit(arr,l+1,r-1),maxProfit(arr,l,r-2)));
    }
}
