public class RemoveNthNodeFromEnd{
    public static class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
    public static void main(String[] args){

        Solution sol = new Solution();
        sol.removeNthFromEnd(head,2);
    }
 
    public static class Solution {
    public static int height(ListNode head){
        if(head==null)
            return 0;
        return 1+height(head.next);
    } 
    public static ListNode removeNthFromEnd(ListNode head, int k) {
        int n = height(head);
        if(n==k)
            return head.next;
        ListNode fast = head;
        ListNode slow = head;
        int i=0;
        while(i!=k && fast!=null){
            fast = fast.next;
            i++;
        }
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next;
        }
        slow.next = slow.next.next;
        
        return head;
    }
}
}