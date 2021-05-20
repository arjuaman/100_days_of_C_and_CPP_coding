public class TotalPathsInGrid {
    public static void main(String[] args){
        System.out.println(totalGrids(4,4));
    }
    static int totalGrids(int m,int n){
        if(m==1 || n==1)
            return 1;
        return totalGrids(m-1,n) + totalGrids(m,n - 1);
    }
}
