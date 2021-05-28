public class MergeLinkedList{
        static Node l1 = new Node(1);
        static Node l2 = new Node(1);
    public static void main(String[] args){
        /*
        list1 = 1->2->3, list2 = 4->5->6->null, return 1->2->3->4->5->6->null
        list1 = 1->3->5, list2 = 2->4->6->null, return 1->2->3->4->5->6->null
        list1 = 4->4->7, list2 = 1->5->6->null, return 1->4->4->5->6->7->null
        */
        
        l1.add(1);
        l1.add(5);
        l1.add(7);
        //l1.print();
        l2.add(2);
        l2.add(4);
        l2.add(6);
        //l2.print();
        //Node ans = new Node(0); 
        Solution s1 = new Solution();
        s1.mergeTwoLists(l1,l2);
        //ans.print();
    }
   
    /**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
static class Solution {
    public Node mergeTwoLists(Node l1, Node l2) {
        if(l1==null) return l2;
        if(l2==null) return l1;
        if(l1.data > l2.data){
            Node temp = l1;
            l1 = l2;
            l2 = temp;
        }
        Node smol = l1;
        Node big = l2;
        while(smol!=null && big!=null){
            Node prev=null;
            while(smol!=null && smol.data<=big.data){
                prev = smol;
                smol = smol.next;
            }
            prev.next = big;
            Node temp = smol;
            smol = big;
            big = temp;
        }
        l1.print();
        return l1;
    }
}
}