class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty()){
            int l = q.size();
            vector<int> vec;
            TreeNode* p;
            while(l--){
                p = q.front();
                q.pop();
                vec.push_back(p->val);
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};