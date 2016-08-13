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
    vector<int> row;
    vector<vector<int>> ans;
    queue<TreeNode *> buff;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
            return ans;
        buff.push(root);
        int length = 1;
        while(buff.size()){
            row.clear();
            TreeNode *p;
            for(int i = 0; i < length; i++){
                p = buff.front();
                row.push_back(p->val);
                if(p->left)
                    buff.push(p->left);
                if(p->right)
                    buff.push(p->right);
                buff.pop();
            }
            length = buff.size();
            ans.insert(ans.begin(),row);
        }
        return ans;
    }
};