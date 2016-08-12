class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            int j = i-1, key = nums[i];
            while(j>=0 && nums[j]==0){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = key;
        }
    }
};