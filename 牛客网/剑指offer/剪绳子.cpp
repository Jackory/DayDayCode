class Solution {
public:
    int cutRope(int number) {
        if(number<=2) return 1;
        if(number==3) return 2;
        if(number==4) return 4;
        vector<int> arr(number+1,1);
        for(int i=1;i<=4;++i)
            arr[i] = i;
        for(int i=5;i<=number;++i) {
            for(int j=1;j<i;++j) {
                arr[i] = max(arr[i], j*arr[i-j]);
            }
        }
        return arr[number];
    }
};