class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
        vector<int> res;
        if(num.size()==0 || size<1 || num.size()<size) return res;
        deque<int> dq;
        for(int i=0;i<num.size();++i)
        {
            while(!dq.empty() && num[dq.back()] < num[i])
                dq.pop_back();
            dq.push_back(i);
            if(dq.front()+size<=i)
                dq.pop_front();
            if(i+1>=size)
                res.push_back(num[dq.front()]);
        }
        return res;
    }
};