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
    void push(ListNode** head_ref, int new_data)  {  
        ListNode* new_node = new ListNode(); 
        new_node->val = new_data;  
        new_node->next = (*head_ref);  
        (*head_ref) = new_node;  
    }  
    ListNode* reverse(ListNode* head){
        ListNode* cur = head, *prev=NULL, *aft=NULL;
        while(cur){
            aft = cur->next;
            cur->next = prev;
            prev = cur;
            cur = aft;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* top = l1;
        ListNode* btm = l2;
        ListNode* temp=NULL;
        ListNode* res = NULL;
        int sum=0,carry=0,var;
        while(top || btm || carry){
            sum=0;
            
            if(top!=NULL){
                sum += top->val;
                top = top->next;
            }
            if(btm!=NULL){
                sum += btm->val;
                btm = btm->next;
            }
            sum += carry;
            carry = 0;
            
            int unit = sum%10;
            carry = sum/10;
            push(&res,unit);
            //top = top->next;
            //btm = btm->next;
        }
        ListNode *out = reverse(res);
        return out;
    }
};