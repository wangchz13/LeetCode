class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for(auto i : nums) x ^= i;
        return x;
    }
};
//异或满足交换律
//两个相等的数异或为0
//0与一个数异或是它本身