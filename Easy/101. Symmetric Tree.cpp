/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root,root);
    }
private:
    bool isMirror(TreeNode *t1, TreeNode *t2) {
    if (t1 == NULL && t2 == NULL) return true;
    if (t1 == NULL || t2 == NULL) return false;
    return (t1->val == t2->val)&& isMirror(t1->right, t2->left)&& isMirror(t1->left, t2->right);
    }
};




class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        
        queue<TreeNode*> low;
        if(!root)
            return true;
        low.push(root->left);
        low.push(root->right);
        
        while(!low.empty())
        {
            TreeNode *left = low.front();
            low.pop();
            TreeNode *right = low.front();
            low.pop();
            if(!left && !right)
                continue;
            if( (left && !right) || (!left && right) )
                return false;
            if( left->val != right->val )
                return false;
            low.push(left->left);
            low.push(right->right);
            low.push(left->right);
            low.push(right->left);
        }
        return true;
    }
};
