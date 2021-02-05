// 类似前序，中序建立二叉树
class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        int n = sequence.size();
        if (n==0) return false;
        return isBST(sequence, 0, n-1);
        
    }
    bool isBST(vector<int>& arr, int l, int r)
    {
        if (l > r) return true;
        int root = r;
        int i=l;
        for(; i<r; ++i) {
            if (arr[i] > arr[root])
                break;
        }
        int j=i;
        for(; j<r ;++j) {
            if (arr[j] < arr[root])
                break;
        }
        return j==root && 
            isBST(arr,0,i-1) &&
            isBST(arr,i,r-1);
    }
};