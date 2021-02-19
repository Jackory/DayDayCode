class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int maj=-1;
        int count = 0;
        for(int num:numbers) {
            if (count == 0) {
                maj = num;
            }
            if (num == maj)
                ++count;
            else --count;
            
        }
        count = 0;
        for (int num:numbers) {
            if(num == maj)
                ++count;
        }
        return (count>numbers.size()/2) ? maj : 0;
    }
};