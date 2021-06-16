import java.util.*;
public class FindValue{
    static class Node{
        int key;
        Node left, right;

        Node(int key){
            this.key = key;
            left = right = null;
        }
    }

    Node root;
    
    static void inorder(Node root){
        if(root==null){
            return;
        }
        inorder(root.left);
        System.out.print(root.key + " ");
        inorder(root.right);
    }

    static void insert(Node root, int val){
        if(root==null){
            root = new Node(val);
            return;
        }
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);

        while(!q.isEmpty()){
            Node top = q.peek();
            q.poll();
            if(top.left==null){
                top.left = new Node(val);
                break;
            }
            else{
                q.add(top.left);
            }

            if(top.right==null){
                top.right = new Node(val);
                break;
            }
            else{
                q.add(top.right);
            }
        }
    }

    static boolean search(Node root, int val){
        if(root==null)
            return false;
        if(root.key==val){
            //System.out.println("Found!");
            return true;
        }
        return search(root.left, val) || search(root.right, val);
    }

    public static void main(String[] args){
        Node root = new Node(10);
        root.left = new Node(11);
        root.left.left = new Node(7);
        root.right = new Node(9);
        root.right.left = new Node(15);
        root.right.right = new Node(8);
 
        System.out.print(
            "Inorder traversal before insertion:");
        inorder(root);
 
        int key = 12;
        insert(root, key);
 
        System.out.print(
            "\nInorder traversal after insertion:");
        inorder(root);

        boolean ans = search(root,15);
        if(ans==true){
            System.out.println("FOund!");
        }
        else{
            System.out.println("Nope!");
        }
    }
}