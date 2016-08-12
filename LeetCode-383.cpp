class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int t[123] = {0};
        for(char c : magazine)
            t[c]++;
        for(char c : ransomNote){
            t[c]--;
            if(t[c] < 0)
                return false;
        }
        return true;
    }
};