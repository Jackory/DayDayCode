class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        // 二分法，从左下角元素开始
        int m = array.size();
        int n = array[0].size();
        if (m == 0 || n == 0){
            return false;
        }
        int r = m-1;
        int c = 0;
        while (r >= 0 && c <= m - 1)
        {
            if (target == array[r][c]){
                return true;
            }
            else if (target < array[r][c]){
                --r;
            }
            else{
                ++c;
            }
        }
        return false;
    }
};