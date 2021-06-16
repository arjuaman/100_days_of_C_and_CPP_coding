/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function(root, p, q) {
    if(root==null || p==root || q==root) 
        return root;
    root.left = lowestCommonAncestor(root.left,p,q);
    root.right = lowestCommonAncestor(root.right,p,q);
    if(root.left==null && root.right==null)
        return null;
    if(root.left!=null && root.right!=null)
        return root;
    return root.left==null?root.right:root.left;
};