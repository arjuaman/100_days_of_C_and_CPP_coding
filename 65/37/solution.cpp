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
    vector<vector<int>> ans;
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root==NULL)
            return ans;
        
        if(root->left==NULL && root->right==NULL){
            vector<int> temp;
            temp.push_back(root->val);
            ans.push_back(temp);
            return ans;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            vector<int> temp;
            int n = q.size();
            
            for(int i=0;i<n;i++){
                TreeNode* top = q.front();
                q.pop();
                temp.push_back(top->val);
              
                    if(top->left!=NULL)
                        q.push(top->left);
                    if(top->right!=NULL)
                        q.push(top->right);

            }
            ans.push_back(temp);
        }
        int rot=0;
        for(auto &it:ans){
            if(rot%2!=0)
                reverse(begin(it),end(it));
            rot++;
        }
        
        return ans;
    }
};