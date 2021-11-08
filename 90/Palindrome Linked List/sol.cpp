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
   
    ListNode* reverse(ListNode* head){
        ListNode* cur = head;
        ListNode* prev= NULL;
        //ListNode* after;
        while(cur){
            ListNode* after = cur->next;   // 1p->null c2a->3->4
            cur->next = prev;
            prev = cur;
            cur = after;
            //cur = cur->next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow = reverse(slow);
        ListNode* temp=head;
        ListNode* fst=head;
        int flag=0;
        while(slow){
            if(fst->val!=slow->val){
                flag=1;
                break;
            }
            else{
                fst=fst->next;
                slow=slow->next;
            }
        }
        if(flag==0)
            return true;
        return false;
    }
};