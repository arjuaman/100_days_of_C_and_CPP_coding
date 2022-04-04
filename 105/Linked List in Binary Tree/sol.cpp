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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode* root, set<vector<int>> &c, vector<int> &temp){
        if(!root){
            c.insert(temp);
            // temp.pop_back();
            return;
        }
        temp.push_back(root->val);
        traverse(root->left, c, temp);
        traverse(root->right, c, temp);
        temp.pop_back();
    }
    
    bool isSubPath(ListNode* head, TreeNode* root) {
        vector<int> llist;
        while(head){
            llist.push_back(head->val);
            head = head->next;
        }
        int n = llist.size();
        set<vector<int>> container;
        vector<int> temp;
        traverse(root, container, temp);
        
        // bool ans = false;
        for(auto i:container){
            // for(auto j:i){
                // cout<<j<<" ";
                //match here
                auto it = std::search(i.begin(), i.end(), llist.begin(), llist.end());
                if(it!=i.end())
                    return true;
            // }
            // cout<<"\n";
        }
        // if(container.count(llist) || it)
        //     ans= true;
        
        return false;
    }
};