class Solution {
public:
    struct pos{
        int r;
        int c;
        pos(int a=0,int b=0):r(a),c(b) {}        
    };
    int movingCount(int threshold, int rows, int cols) {
        int visit[rows][cols];
        memset(visit,0,sizeof(visit));
        int count = 0;
        stack<pos> st;
        st.push(pos(0,0));
        while(!st.empty())
        {
            pos p = st.top();
            st.pop();
//             if(visit[p.r][p.c] == -1)
//                 continue;
            visit[p.r][p.c] = -1;
            int sum=0;
            int a = p.r;
            int b = p.c;
            int tmp = a;
            while(tmp > 0)
            {
                sum += tmp % 10;
                tmp = tmp/10;
            }
            tmp = b;
            while(tmp>0)
            {
                sum += tmp%10;
                tmp=tmp/10;
            }
            if(sum <= threshold) {
                ++count;
            }
            else 
                continue;
            if(a-1>=0 && visit[a-1][b] == 0) 
                st.push(pos(a-1,b));
            if(a+1<rows && visit[a+1][b] == 0) 
                st.push(pos(a+1,b));
            if(b-1>=0 && visit[a][b-1] == 0) 
                st.push(pos(a,b-1));
            if(b+1<cols && visit[a][b+1] == 0) 
                st.push(pos(a,b+1));
        }
        return count;
    }
};