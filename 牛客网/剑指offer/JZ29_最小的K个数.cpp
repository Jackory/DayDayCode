class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        if (k <= 0 || k > input.size())
            return res;
        priority_queue<int> pq;
        for(int num :input) {
            if (pq.size() < k)
                pq.push(num);
            else {
                if (num < pq.top()) {
                    pq.pop();
                    pq.push(num);
                }
            }
        }
        while (!pq.empty()) {
            res.push_back(pq.top());
            pq.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};