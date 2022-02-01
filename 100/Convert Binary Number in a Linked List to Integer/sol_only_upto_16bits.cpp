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
#define ll long long
class Solution {
public:
    ll b2d(ll b){
        ll res= 0, i=0;
        while(b>0){
            int temp = b%10;
            res = res + temp*pow(2,i);
            b/=10;
            i++;
        }
        // cout<<res;
        return res;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode *cur=head,*prev=NULL;
        while(cur!=NULL){
            ListNode* after = cur->next;
            cur->next = prev;
            prev = cur;
            cur = after;
        }
        return prev;    
    }
    
    int getDecimalValue(ListNode* head) {
        ListNode* temp = reverse(head);
        ll num=0, i=0;
        while(temp){
            num += (temp->val)*pow(10,i);
            // cout<<temp->val<<" ";
            i++;
            temp = temp->next;
        }
        cout<<num<<"\n";
        
        ll ans = b2d(num);
        return ans;
    }
};