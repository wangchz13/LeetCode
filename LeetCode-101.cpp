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
    bool isSame(TreeNode* l, TreeNode* r){
        if(l==NULL || r==NULL)
            return l==r;
        return (l->val==r->val)&&isSame(l->left,r->right)&&isSame(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSame(root->left,root->right);
    }
};