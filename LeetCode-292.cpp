class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};
//分析：当有1或2或3个石头，新手全拿，必胜。4个石头，无论新手拿多少个，后手必胜。也就是说4个石头时，后手必胜。这样，5个石头，新手拿一个，留下四个石头，这样自己就是下一轮的后手，必胜。