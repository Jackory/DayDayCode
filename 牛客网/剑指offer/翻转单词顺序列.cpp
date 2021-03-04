class Solution {
public:
    string ReverseSentence(string str) {
        vector<string> list;
        int start=0;
        for(int i=0;i<str.size();++i){
            if(str[i]==' ') {
                string tmp = str.substr(start,i-start);
                list.push_back(tmp);
                start = ++i;
            }
        }
        list.push_back(str.substr(start));
        reverse(list.begin(), list.end());
        string res;
        for(string val:list) {
            res += val;
            res.push_back(' ');
        }
        res.pop_back();
        return res;
    }
};