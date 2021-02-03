class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        if(m==0) return res;
        int n = matrix[0].size();
        int up = 0, down=m-1,left=0,right=n-1;
        while (up <= down && left <= right)
        {
            for(int i=left;i<=right;++i)
                res.push_back(matrix[up][i]);
            for (int i=up+1;i<=down;++i)
                res.push_back(matrix[i][right]);
            if (up >= down) break;
            for (int i=right-1;i>=left;--i)
                res.push_back(matrix[down][i]);
            if (left >= right) break;
            for (int i=down-1;i>up;--i)
                res.push_back(matrix[i][left]);
            ++up;
            --down;
            ++left;
            --right;
        }
        return res;
    }
};