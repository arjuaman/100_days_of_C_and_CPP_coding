/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        
        if(headA==headB) return headA;
        ListNode *one = headA;
        ListNode *two = headB;
        while(one!=two){
            if(one==NULL){
                one = headB;
            }
            else{
                one = one->next;
            }
            if(two==NULL){
                two=headA;
            }
            else{
                two=two->next;
            }
        }
        return one;
    }
};