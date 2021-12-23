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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* cur = head->next, *temp = NULL, *prev=head;
        int prevVal = head->val;
        while(cur){
            if(cur->val == prevVal){
                cout<<"\n"<<prevVal<<" is same as "<<cur->val;
                temp = cur->next;
                delete(cur);
                cur = temp;
                prev->next = cur;
                // cur = cur->next;
            }
            else{
                cout<<"\n"<<prevVal<<" is different from "<<cur->val;
                prevVal = cur->val;
                prev = cur;
                cur = cur->next;
            }
        }

        return head;
    }
};