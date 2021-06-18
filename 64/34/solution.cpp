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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int maxm = INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode* top = q.front();
                q.pop();
                if(top->val>maxm)
                    maxm = top->val;
                if(top->left!=NULL)
                    q.push(top->left);
                if(top->right!=NULL)
                    q.push(top->right);
            }
            ans.push_back(maxm);
        }
        
        return ans;
    }
};