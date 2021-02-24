class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        return height(pRoot) != -1;
    }
    int height(TreeNode* Root) {
        if(!Root) return 0;
        int l = height(Root->left);
        int r = height(Root->right);
        if(abs(l-r) > 1 || l==-1 || r == -1) 
            return -1;
        return max(l,r) + 1;
    }
};