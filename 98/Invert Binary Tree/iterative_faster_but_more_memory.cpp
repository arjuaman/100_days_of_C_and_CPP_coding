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
    TreeNode* invertTree(TreeNode* root) {
        // if(root){
        //     root->left = invertTree(root->left);
        //     root->right = invertTree(root->right);
        //     swap(root->left, root->right);
        // }
        // return root;
        if(!root)
            return NULL;
        stack<TreeNode*> st;
        st.push(root);
        
        while(!st.empty()){
            TreeNode* top = st.top();
            st.pop();
            swap(top->left, top->right);
            
            if(top->left)
                st.push(top->left);
            
            if(top->right)
                st.push(top->right);
        }
        
        return root;
    }
};