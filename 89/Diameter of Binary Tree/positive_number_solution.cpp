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
#define ll long long
class Solution {
    int maxD, maxNode;
    vector<int> ar[10001];
    int vis[10001];
    hash<int> intHash;
public:
    void helper(int node, int dist){
        vis[node] = 1;
        if(dist>maxD)
            maxD=dist, maxNode = node;
        for(int child:ar[node]){
            if(!vis[child]){
                helper(child, dist+1);
            }
        }
    }
    void dfs(TreeNode* root){
        if(!root) return;
        if(root->left){
            ar[root->val].push_back(root->left->val);
            ar[root->left->val].push_back(root->val);
        }
        if(root->right){
            ar[root->val].push_back(root->right->val);
            ar[root->right->val].push_back(root->val);
        }
        dfs(root->left);
        dfs(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        maxD = -1;
        helper(1,0);
        memset(vis, 0, sizeof(vis));
        maxD = -1;
        helper(maxNode,0);
        return maxD;
    }
};