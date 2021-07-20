/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        
        if(root==null || p==root || q==root)
            return root;
        
        root.left =  lowestCommonAncestor(root.left,p,q);
        root.right = lowestCommonAncestor(root.right,p,q);
        
        if(root.left==null && root.right==null)
            return null;
        
        if(root.left!=null && root.right!=null)
            return root;
        
        return root.left!=null?root.left:root.right;
        
    }
}