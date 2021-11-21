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
public:    
    vector<int> postorder(Node* root) {
        if(!root) return {};
        vector<int> ans;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* top = st.top();
            st.pop();
            for(auto it:top->children){
                st.push(it);
            }
            ans.push_back(top->val);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};