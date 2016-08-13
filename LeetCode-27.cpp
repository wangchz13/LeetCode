class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int begin = 0;
        for(int i : nums){
            if(i != val)
                nums[begin++] = i;
        }
        return begin;
    }
};