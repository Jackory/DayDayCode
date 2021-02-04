class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> s;
        int n=pushV.size();
        int i=0;
        int j=0;
        while (i<n)
        {
            s.push(pushV[i++]);
            if(s.top()!=popV[j]){
                continue;
            }
            else {
                s.pop();
                ++j;
                while (!s.empty() && s.top() == popV[j])
                {
                    s.pop();
                    ++j;
                }
            }
        }
        return j==n;
    }
};