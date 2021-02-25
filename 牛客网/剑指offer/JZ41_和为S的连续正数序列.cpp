class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> res;
        int l=1,r=1;
        int tmpSum=0;
        while(l<=sum/2)
        {
            if(tmpSum<sum) {
                tmpSum += r;
                ++r;
            }
            else if(tmpSum>sum) {
                tmpSum -= l;
                ++l;
            }
            else {
                vector<int> ans;
                for(int i=l;i<r;++i)
                    ans.push_back(i);
                res.push_back(ans);
                tmpSum -= l;
                ++l;
            }
        }
        return res;
    }
};