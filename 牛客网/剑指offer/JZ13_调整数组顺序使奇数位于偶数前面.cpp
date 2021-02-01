// 类似插入排序
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        // stable_partition(array.begin(), array.end(), [](int x){return x&1;});
        int p1 = 0, p2 = 0;
        int n = array.size();
        while (p2 < n)
        {
            while (p1 < n && array[p1]%2==1)
            {
                ++p1;
            }
            if (p1 == n) break;
            p2 = p1 + 1;
            while (p2 < n && array[p2]%2==0)
            {
                ++p2;
            }
            if (p2 == n) break;
            int tmp = array[p2];
            for (int i=p2; i>p1; --i)
                array[i] = array[i-1];
            array[p1] = tmp;
        }
    }
};