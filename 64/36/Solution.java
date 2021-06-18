import java.util.*;

public class Solution {
 
    /* A binary tree node has key, pointer to
    left child and a pointer to right child */
    static class Node {
        int key;
        Node left, right;
 
        // constructor
        Node(int key)
        {
            this.key = key;
            left = null;
            right = null;
        }
    }
    static Node root;
    static Node temp = root;
 
    /* Inorder traversal of a binary tree*/
    static void inorder(Node temp)
    {
        if (temp == null)
            return;
 
        inorder(temp.left);
        System.out.print(temp.key + " ");
        inorder(temp.right);
    }
 
    /*function to insert element in binary tree */
    static void insert(Node temp, int key)
    {
 
        if (temp == null) {
            root = new Node(key);
            return;
        }
        Queue<Node> q = new LinkedList<Node>();
        q.add(temp);
 
        // Do level order traversal until we find
        // an empty place.
        while (!q.isEmpty()) {
            temp = q.peek();
            q.remove();
 
            if (temp.left == null) {
                temp.left = new Node(key);
                break;
            }
            else
                q.add(temp.left);
 
            if (temp.right == null) {
                temp.right = new Node(key);
                break;
            }
            else
                q.add(temp.right);
        }
    }
 
    // Driver code
    public static void main(String args[])
    {
        root = new Node(7);
        root.left = new Node(6);
        root.left.left = new Node(3);
        root.right = new Node(2);
        //root.right.left = new Node(15);
        root.left.right = new Node(3);
 
        // System.out.print(
        //     "Inorder traversal before insertion:");
        // inorder(root);
 
        // int key = 12;
        // insert(root, key);
 
        // System.out.print(
        //     "\nInorder traversal after insertion:");
        // inorder(root);

        List<List<Integer>> list = bottomsUp(root);
        for(int i=0;i<list.size();i++){
            for(int j=0;j<list.get(i).size();j++){
                System.out.print(list.get(i).get(j)+" ");
            }
            System.out.print("\n");
        }        
    }

    private static List<List<Integer>> bottomsUp(Solution.Node root) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        if(root==null)
            return ans;
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);
        while(q.isEmpty()==false){
            int n = q.size();
            ArrayList<Integer> arr = new ArrayList<Integer>();
            for(int i=0;i<n;i++){
                Node top = q.poll();
                arr.add(top.key);
                if(top.left!=null){
                    q.add(top.left);
                }
                if(top.right!=null){
                    q.add(top.right);
                }
            }
            ans.add(arr);
        }
        Collections.reverse(ans);
        return ans;
    }
}