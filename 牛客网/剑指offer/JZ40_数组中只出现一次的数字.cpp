class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param array int整型vector 
     * @return int整型vector
     */
    vector<int> FindNumsAppearOnce(vector<int>& array) {
        unordered_map<int,int> mp;
        for(int val:array) {
            mp[val] +=1;
        }
        vector<int> res;
        for(int val:array) {
            if(mp[val]==1)
                res.push_back(val);
        }
        return res;
        
    }
};