import java.util.*;
import java.util.Map.*;
import java.lang.*;

public class Solution {
    public static void main(String[] args) {
        int W = 7;
        // W = 10, weights = [4, 1, 3], values = [4, 2, 7], return 13.
        // W = 5, weights = [2, 4, 3], values = [3, 7, 2], return 7. =>
        // W = 5, weights = [2, 4, 3], values = [3, 7, 5], return 8. =>
        // W = 7, weights = [1, 3, 4], values = [3, 5, 6], return 11.
        int[] weights = { 1,3,4 };
        int[] values = { 3,5,6 };
        

        System.out.print("Maximum value of stolen items: " + maxValue(W, weights, values));
    }

    private static int maxValue(int w, int[] weights, int[] values) {
        int sum_weights = 0;
        for (int i : weights) {
            sum_weights += i;
        }
        // System.out.print(sum_weights);

        if (sum_weights <= w) {
            int ans = 0;
            for (int i : values) {
                ans += i;
            }
            return ans;
        }

        int n = weights.length;        
        return knapsack(w,weights,values,n);
    }

    private static int knapsack(int w, int[] weights, int[] values, int n) {
        if(n==0 || w==0) return 0;
        if(weights[n-1]>w)
            return knapsack(w, weights, values, n-1);
        else
            return Math.max(values[n-1]+knapsack(w-weights[n-1], weights, values,n-1), knapsack(w, weights, values,n-1));
    }
}