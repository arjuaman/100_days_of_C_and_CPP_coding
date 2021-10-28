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
    void inorder(TreeNode* root, vector<int> &vec ){
        if(root==NULL) return;
        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }
    TreeNode* apply(map<int,int> umap, TreeNode* root){
        if(root){
            apply(umap,root->left);
            root->val = umap[root->val];
            apply(umap,root->right);
        }
        return root;
    }
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL) return root;
        vector<int> vec;
        inorder(root,vec);  // 0 1 2 3 4 5 6 7 8
        int n = vec.size();
        map<int,int> mpp;
        //vector<int> sumd(n,0);
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum += vec[i];
            //sumd[i] = sum;
            mpp[vec[i]] = sum;
        }
        TreeNode* temp = apply(mpp,root);
        //for(auto it:mpp){
        //    cout<<it.first<<" "<<it.second<<" \n";      //1 10; 2 9; 3 7; 4 4
        //}
        /*
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* top = q.front();
            q.pop();
            int x = top->val;
            //cout<<x<<" ";
            
            if(top->left)
                q.push(top->left);
            if(top->right)
                q.push(top->right);
        }
        */
        return temp;
    }
};