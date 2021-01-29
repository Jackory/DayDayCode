// 二分法，与最右边或最左边元素比较
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        // return *min_element(rotateArray.begin(),rotateArray.end());
        if (rotateArray.empty()) return 0;
        int left = 0, right = rotateArray.size()-1;
        while(left < right) {
            int mid = (left + right) / 2;
            if (rotateArray[mid] > rotateArray[right]){
                left = mid + 1;
            }
            else if (rotateArray[mid] == rotateArray[right]){
                --right;
            }
            else {
                right = mid;
            }
        }
        return rotateArray[left];
    }
};