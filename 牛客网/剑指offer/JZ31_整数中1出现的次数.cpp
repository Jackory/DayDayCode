class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int count = 0;
        for(int i = 1;i<=n;++i)
        {
            string str = to_string(i);
            for(char a:str)
                if(a == '1')
                    ++count;
        }
        return count;
    }
};