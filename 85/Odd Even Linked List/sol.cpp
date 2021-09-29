/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        if(!head->next) return head;
        if(!head->next->next) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* temp = head;
        ListNode* bugger = even;
        while(odd && odd->next && even && even->next){
            odd->next = even->next;
            ListNode* x = even->next;
            even->next = x->next;
            temp = x;
            odd = odd->next;
            even = even->next;
        }
        odd->next = bugger;
        return head;
    }
};