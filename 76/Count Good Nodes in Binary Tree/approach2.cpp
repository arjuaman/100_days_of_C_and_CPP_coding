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
    int cnt = 0;
    // vector<vector<int>> bag;
public:
    void dfs(TreeNode* root, vector<int> &seq){
        if(!root){
            // bag.insert(seq);
            // seq.pop_back();
            return;
        }
        seq.push_back(root->val);
        if(seq.size()==1)
            cnt++;
        else{
        int cur = seq[seq.size()-1];
        bool flag = false;
        for(int i=0;i<seq.size()-1;i++){
            if(seq[i]>cur){
                flag = true;
                break;
            }
        }
        if(!flag) cnt++;}
        // bag.push_back(seq);
        // for(auto i:seq){
        //     cout<<i<<' ';
        // }
        // cout<<'\n';
        dfs(root->left, seq);
        dfs(root->right, seq);
        seq.pop_back();
    }
    
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        // if(root.size()<=1) return root.size();
        vector<int> seq;
        dfs(root, seq);
        return cnt;
    }
};