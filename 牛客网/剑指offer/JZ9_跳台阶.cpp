class Solution {
public:
    int jumpFloor(int number) {
        if (number <= 2)
            return number;
        int pre1 = 1, pre2 = 2, cur;
        for(int i=3;i<=number;++i)
        {
            cur = pre1 + pre2;
            pre1 = pre2;
            pre2 = cur;
            
        }
        return cur;
    }
};