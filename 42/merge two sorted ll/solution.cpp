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
    void display(ListNode* head){
        //cout<<endl;
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val>l2->val) swap(l1,l2);
        ListNode* little = l1;
        ListNode* major = l2;
        while(little && major){
            ListNode* prev = NULL;
            while(little && little->val<=major->val){
                prev = little;
                little = little->next;
            }
            prev->next = major;
            swap(little,major);
        }
        //display(little);
        //display(major);
        /*if(major!=NULL){
            while(major &&major->next){
                little->next = major;
            }
        }*/
        //ListNode(major->val,little->next);
        return l1;
    }
};