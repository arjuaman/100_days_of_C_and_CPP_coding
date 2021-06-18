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
    HashMap<Integer,Integer> map = new HashMap<>();
    List<Integer> x =  new ArrayList<Integer>();
    int[] ans;
    public void inorder(TreeNode root){
        if(root==null)
            return;
        inorder(root.left);
        if (map.containsKey(root.val)){
            map.put(root.val, map.get(root.val) + 1);
        }
        else{
            map.put(root.val, 1);
        }
        inorder(root.right);
    }
    public int[] findMode(TreeNode root) {
        inorder(root);
        int maxm = Integer.MIN_VALUE;
        
        for (Map.Entry<Integer, Integer> entry : map.entrySet())
        {
            //System.out.println(entry.getKey() + " " + entry.getValue());
            if(entry.getValue()>maxm)
                maxm = entry.getValue();
        }
        
        for(Map.Entry<Integer, Integer> entry : map.entrySet()){
            if(entry.getValue()==maxm){
                x.add(entry.getKey());
            }
        }
        
        ans = convertIntegers(x);
        return ans;
    }
    public static int[] convertIntegers(List<Integer> integers)
{
    int[] ret = new int[integers.size()];
    Iterator<Integer> iterator = integers.iterator();
    for (int i = 0; i < ret.length; i++)
    {
        ret[i] = iterator.next().intValue();
    }
    return ret;
}
}