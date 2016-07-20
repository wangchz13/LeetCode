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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;
        int flag = 0;
        stack<TreeNode *> s[2];
        s[flag].push(root);
        while(!s[flag].empty()){
            vector<int> subvec;
            while(!s[flag].empty()){
                subvec.push_back(s[flag].top()->val);
                if(flag){
                    if(s[flag].top()->right)
                        s[1-flag].push(s[flag].top()->right);
                    if(s[flag].top()->left)
                        s[1-flag].push(s[flag].top()->left);
                }else{
                    if(s[flag].top()->left)
                        s[1-flag].push(s[flag].top()->left);
                    if(s[flag].top()->right)
                        s[1-flag].push(s[flag].top()->right);
                }
                s[flag].pop();
            }
            flag = 1 - flag;
            result.push_back(subvec);
        }
        return result;
    }
};