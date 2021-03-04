class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        pair<int,int> res;
        int tmp = INT_MAX;
        int i=0,j=array.size()-1;
        bool find=false;
        while(i<j)
        {
            if(array[i]+array[j]==sum) {
                if(array[i]+array[j]<tmp) {
                    tmp = array[i] * array[j];
                    res = {i,j};
                    find = true;
                }
                ++i,--j;
            }
            else if(array[i]+array[j]<sum) {
                ++i;
            }
            else {
                --j;
            }
        }
        if(find)
            return vector<int>({array[res.first],array[res.second]});
        return vector<int>();
    }
};