class Solution {
public:
    string LeftRotateString(string str, int n) {
        int len = str.length();
        if(len==0)
            return string();
        if(n>len)
            n = n%len;
        string tmp({str.begin()+n,str.end()});
        string tmp2({str.begin(),str.begin()+n});
        return tmp+tmp2;
    }
};