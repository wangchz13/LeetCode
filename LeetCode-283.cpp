//O(n^2)解法，类似插入排序
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
//O(n)解法
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0,j=0;
        for(; i < nums.size(); i++){
            if(nums[i])
                nums[j++] = nums[i];
        }
        for(;j < nums.size(); j++)
            nums[j] = 0;
    }
};