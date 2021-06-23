/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)
            return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            
            for(int i=0;i<n;i++){
                Node* top = q.front();
                q.pop();
                temp.push_back(top->val);
                for(Node* it :top->children){
                    q.push(it);
                    // temp.push_back(it->val);
                    
                    //cout<<top->children[i]->val<<" ";
                }
            }
            
            ans.push_back(temp);
        }
        return ans;
    }
};