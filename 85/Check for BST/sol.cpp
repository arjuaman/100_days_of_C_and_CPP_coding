class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST_helper(Node* root, int min, int max){
        if(!root) return true;
        if(root->data<min || root->data>max) return false;
        return isBST_helper(root->left,min,root->data-1)
            &&
               isBST_helper(root->right,root->data+1,max);
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        return isBST_helper(root, INT_MIN, INT_MAX);
    }
};