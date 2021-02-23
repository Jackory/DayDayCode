class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index <= 0) return 0;
        vector<int> arr(index,0);
        arr[0] = 1;
        int a=0,b=0,c=0;
        for(int i=1;i<index;++i) {
            arr[i] = min({arr[a]*2,arr[b]*3,arr[c]*5});
            if(arr[i] == arr[a]*2) ++a;
            if(arr[i] == arr[b]*3) ++b;
            if(arr[i] == arr[c]*5) ++c;
        }
        return arr[index-1];
            
    }
};