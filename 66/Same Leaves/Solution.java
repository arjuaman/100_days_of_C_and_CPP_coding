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
    public void preorder(TreeNode root, ArrayList<Integer> a){
        if(root==null) return;
        if(root.left==null && root.right==null)
            a.add(root.val);
        preorder(root.left,a);
        preorder(root.right,a);
    }
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        ArrayList<Integer> a1 = new ArrayList<Integer>();
        ArrayList<Integer> a2 = new ArrayList<Integer>();
        preorder(root1,a1);
        preorder(root2,a2);
        return a1.equals(a2);
    }
}