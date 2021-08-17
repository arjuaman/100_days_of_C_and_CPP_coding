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
    int ans=0;
public:
    void dfs(TreeNode* root, vector<int> &temp){
        if(root==NULL){
            return;
        }
        temp.push_back(root->val);
        
        if(temp.size()==1)
            ans++;
        
        if(!temp.empty() && temp.size()>=2){
            int maxm = INT_MIN;
            bool flag=0;
            maxm = temp[temp.size()-1];
            for(int i=0;i<temp.size()-1;i++){
                if(temp[i]>maxm){
                    flag=1;
                    break;
                }
            }
            if(!flag)
                ans++;
        }
            
        dfs(root->left,temp);
        dfs(root->right,temp);
    
        if(!temp.empty()){
            temp.pop_back();
        }
    }
    int goodNodes(TreeNode* root) {
        vector<int> temp;
        dfs(root, temp);
        return ans;
    }
};