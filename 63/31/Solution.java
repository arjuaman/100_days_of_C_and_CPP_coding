/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    ArrayList<Integer> a = new ArrayList<>();
    public void inorder(TreeNode root){
        if(root==null)
            return;
        inorder(root.left);
        a.add(root.val);
        inorder(root.right);
    }
    public int getMinimumDifference(TreeNode root) {
        inorder(root);
        Collections.sort(a);
        int minm = 99999999;
        for(int i=1;i<a.size();i++){
            minm = Math.min(minm, a.get(i)-a.get(i-1));
        }
        return minm;
    }
}