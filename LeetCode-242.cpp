class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int g[128] = {0};
        for(char i : s)
            g[i]++;
        for(char i : t){
            if(g[i]==0)
                return false;
            g[i]--;
        }
        return true;
    }
};