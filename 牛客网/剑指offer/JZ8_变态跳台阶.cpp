class Solution {
public:
    int jumpFloorII(int number) {
        if (number <= 2) return number;
        vector<int> array(number+1, 0);
        array[0] = 1,array[1] = 1;
        for(int i=2;i<=number;++i)
        {
            array[i] = array[i-1] << 1;
        }
        return array[number];
    }
};