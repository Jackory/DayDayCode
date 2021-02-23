class Solution {
public:
    vector<string> Permutation(string str) {
        set<string> res;
        DFS(0,str,res);
        return vector<string>({res.begin(),res.end()});
    }
    void DFS(int level,string str,set<string>& res)
    {
        if(level==str.length()-1) {
            res.insert(str);
            return;
        }
        for(int i=level;i<str.length();++i)
        {
            swap(str[level],str[i]);
            DFS(level+1,str,res);
            swap(str[level],str[i]); // 回溯
        }
    }
};