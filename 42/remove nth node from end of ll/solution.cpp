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
    int length(ListNode *head){
        if(head==NULL) return 0;
        return 1+length(head->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        if(n==len) return head->next;
        ListNode* cur=head, *back=head;
        int num = n;
        while(num--){
            cur = cur->next;
            cout<<"\nItern "<<num;
        }
        cout<<cur->val;
        while(cur->next){
            cur=cur->next;
            back=back->next;
        }
        back->next = back->next->next;
        return head;
    }
};