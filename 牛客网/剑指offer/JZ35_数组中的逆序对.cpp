class Solution {
public:
    int mod = 1000000007;
    int InversePairs(vector<int> data) {
        vector<int> tmp(data.size());
        int res;
        return MergeSort(data, tmp,0,data.size()-1);
    }
    int MergeSort(vector<int>& data, vector<int>& tmp,int l,int r)
    {
        if (l>=r) return 0;
        int count=0;
        int mid = (l+r)/2;
        count += MergeSort(data,tmp,l, mid);
        count += MergeSort(data, tmp, mid+1, r);
        int i=l,j=mid+1,k=l;
        while(i<=mid &&j<=r)
        {
            if(data[i] <= data[j]) {
                tmp[k++] = data[i++];
                count = (count + j-mid-1)%mod;
            }
            else {
                tmp[k++] = data[j++];
            }
        }
        while(i<=mid) {
            tmp[k++] = data[i++];
            count = (count+j-mid-1)%mod;
        }
        while(j<=r) {
            tmp[k++] = data[j++];
        }
        copy(tmp.begin()+l,tmp.begin()+r+1,data.begin()+l);
        return count;
    }
};