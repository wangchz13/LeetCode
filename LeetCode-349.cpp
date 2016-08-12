class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int t[10000] = {0};
        vector<int> ans;
        for(int i : nums1)
            t[i] = 1;
        for(int i : nums2)
            if(t[i]){
                ans.push_back(i);
                t[i] = 0;
            }
        return ans;
    }
};