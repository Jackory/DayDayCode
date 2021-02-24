class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        return upper_bound(data.begin(), data.end(), k) -
            lower_bound(data.begin(), data.end(), k);
    }
};