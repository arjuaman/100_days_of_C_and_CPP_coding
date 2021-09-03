package solution;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        int[][] holes = { { -1, 0, 1 }, { 1, 1, -1 }, { 1, 1, 0 } };
        int[][] ans = sol(holes);
        for (int i = 0; i < ans.length; i++) {
            for (int j = 0; j < ans[i].length; j++) {
                System.out.print(ans[i][j] + " ");
            }
            System.out.print("\n");
        }
    }

    private static int[][] sol(int[][] holes) {
        int row = holes.length;
        int col = holes[0].length;
        // boolean[][] visited = new boolean[row][col];
        int[][] ans = new int[row][col];

        for (int i = 0; i < holes.length; i++) {
            for (int j = 0; j < holes[i].length; j++) {
                if (holes[i][j] == 1) {
                    ans[i][j] = bfs(holes, i, j, row, col);
                } else
                    ans[i][j] = holes[i][j];
            }
        }
        return ans;
    }

    private static int bfs(int[][] holes, int i, int j, int row, int col) {

        int[][] dir = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };
        Queue<Pair> q = new LinkedList<>();
        q.add(new Pair(i,j));

        boolean[][] visited = new boolean[row][col];

        int temp=0, cur=9999;

        // Until queue is empty
        while (q.size() > 0) {
            Pair p = (q.peek());
            q.remove();

            // // Mark as visited
            // holes[p.Item1][p.Item2] = -1;

            visited[p.Item1][p.Item2] = true;
            // // Destination is reached.
            if (holes[p.Item1][p.Item2] == 0)
                return temp;

            // Check all four directions
            for (int m = 0; m < 4; m++) {

                // Using the direction holesay
                int a = p.Item1 + dir[m][0];
                int b = p.Item2 + dir[m][1];

                // Not blocked and valid
                if (a >= 0 && b >= 0 && a < row && b < col && holes[a][b] != -1 && visited[a][b]==false) {
                    temp+=1;
                    q.add(new Pair(a, b));
                }
            }
        }
        return -1;
    }

    // private static int helper(int[][] holes, int i, int j, int row, int col, boolean[][] visited, int temp) {
    //     if (i < 0 || j < 0 || i >= row || j >= col || visited[i][j] == true || holes[i][j] == -1)
    //         return 9999;

    //     visited[i][j] = true;
    //     if (holes[i][j] == 0) {
    //         temp = temp - 9999;
    //         return temp;
    //     }

    //     if (holes[i][j] == 1) {
    //         temp -= 1;
    //     }

    //     return Math.min(helper(holes, i - 1, j, row, col, visited, temp),
    //             Math.min(helper(holes, i + 1, j, row, col, visited, temp),
    //                     Math.min(helper(holes, i, j - 1, row, col, visited, temp),
    //                             helper(holes, i, j + 1, row, col, visited, temp))));
    // }

}