import java.util.*;
public class Solution{
    static int timer=0;
    public static void main(String[] args){
        int[][] grid = {{1,1,1},{1,1,0},{0,1,2}};
        int row = grid.length, col = grid[0].length;
        boolean[][] visited = new boolean[row][col];
        // int timer=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                    dfs(grid,i,j,row,col,visited);
                }
            }
        }
        System.out.print("Timer is: "+timer);
    }
    private static void dfs(int[][] grid, int i, int j, int row, int col, boolean[][] visited) {
        if(isValid(grid,i,j,visited)==false)
            return;
        visited[i][j]=true;
        timer++;
        dfs(grid,i+1,j,row,col,visited);
        dfs(grid,i,j+1,row,col,visited);
        dfs(grid,i-1,j,row,col,visited);
        dfs(grid,i,j-1,row,col,visited);
        visited[i][j]=false;
    }
    private static boolean isValid(int[][] grid, int i, int j, boolean[][] visited){
        int row = grid.length;
        int col = grid[0].length;
        return (i>=0 && i<row && j>=0 && j<col && visited[i][j]==false && grid[i][j]==1);
    }
}