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
class Solution {
    private int height(ListNode head){
        if(head==null)
            return 0;
        return 1 + height(head.next);
    }
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head==null || k==1)
            return head;
        int len = height(head);
        if(len<k) 
            return head;
        ListNode prev = null;
        ListNode aft = null;
        ListNode cur = head;
        int n = k;
        while(cur!=null && n!=0){
            aft = cur.next;
            cur.next = prev;
            prev = cur;
            cur = aft;
            n--;
        }
        if(aft!=null)
            head.next = reverseKGroup(aft,k);
        return prev;
    }
}