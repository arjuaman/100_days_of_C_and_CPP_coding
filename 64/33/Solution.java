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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        if(root==null)
            return ans;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while(q.isEmpty()==false){
            int n = q.size();
            List<Integer> l = new ArrayList<Integer>();
            for(int i=0;i<n;i++){
                TreeNode top = q.poll();
                l.add(top.val);
                if(top.left!=null){
                    q.add(top.left);
                }   
                if(top.right!=null){
                    q.add(top.right);
                }  
            }
            ans.add(l);
        }
        return ans;
    }
}