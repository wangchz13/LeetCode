//µÝ¹é
class Solution {
public:
    int t[100] = {0,1,2};
    int climbStairs(int n) {
        if(t[n]==0)
            t[n] = climbStairs(n-1) + climbStairs(n-2);
        return t[n];
    }
};
//µü´ú
class Solution {
public:
    int t[100] = {0,1,2};
    int climbStairs(int n) {
        for(int i = 3; i <= n; i++)
            t[i] = t[i-1] + t[i-2];
        return t[n];
    }
};