class Solution {
public:
	void replaceSpace(char *&str,int length) {
        string s;
        for(int i=0; str[i]; ++i){
            if (str[i] == ' '){
                s.push_back('%');
                s.push_back('2');
                s.push_back('0');
            }
            else{
                char c = str[i];
                s.push_back(c);
            }
        }
        str = new char[s.length()+1];
        strcpy(str,s.c_str());
	}
};