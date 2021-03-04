class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.empty())
            return false;
        int _max = 1;
        int _min = 14;
        set<int> st;
        for(int val:numbers) {
            if(val > 0) {
                if(st.count(val) > 0)
                    return false;
                st.insert(val);
                _max = max(_max,val);
                _min = min(_min,val);
            }
        }
        return _max - _min < 5;
    }
};