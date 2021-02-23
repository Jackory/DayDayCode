class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        unordered_map<char,int> m;
        for(char c: str) {
            m[c] += 1;
        }
        for(int i=0;i<str.length();++i) {
            if(m[str[i]] == 1) return i;
        }
        return -1;
    }
};