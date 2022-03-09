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
    int findDepth(TreeNode* root, int x){
    if (root == NULL)
        return -1;
    int dist = -1;
    if ((root->val == x)
        || (dist = findDepth(root->left, x)) >= 0
        || (dist = findDepth(root->right, x)) >= 0)
        return dist + 1;
 
    return dist;
}
    bool isCousins(TreeNode* root, int x, int y) {
        // unique values
        if(!root || root->val==x || root->val==y)
            return false;
        int px=0, py=0; //parents of x and y
        unordered_map<int, vector<int>> umap; // parent -> [children]
        int depx=0, depy=0, depth=0;
        depx = findDepth(root, x);
        depy = findDepth(root, y);
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            for(int i=0;i<q.size();i++){
                TreeNode* top = q.front();
                q.pop();
                // if(top->val==x)
                //     depx = depth;
                // if(top->val==y)
                //     depy = depth;
                if(top->left){
                    umap[top->val].push_back(top->left->val);
                    q.push(top->left);
                }
                if(top->right){
                    umap[top->val].push_back(top->right->val);
                    q.push(top->right);
                }
            }
            
            // depth++;
            // cout<<"Depth is: "<<depth<<" ";
        }
        
        for(auto it:umap){
            // cout<<it.first<<" "; //contains parents only
            for(int i:it.second){
                if(i==x)
                    px = it.first;
                if(i==y)
                    py = it.first;
            }
        }
        // cout<<px<<" "<<py<<" ";
        // cout<<depx<<" "<<depy<<" ";
        if(px==py)
            return false;
        return depx==depy;
    }
};