/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 // 递归法，重建左子树，重建右子树
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if (pre.empty() || vin.empty()) return nullptr;
        TreeNode* root = new TreeNode(pre[0]);
        vector<int> preLeft, preRight, vinLeft, vinRight;
        for(int i=0; i<vin.size(); ++i)
        {
            if(vin[i] == pre[0]){
                for(int j=1; j<=i; ++j)
                    preLeft.push_back(pre[j]);
                for (int j=0; j<i; ++j)
                    vinLeft.push_back(vin[j]);
                for (int j=i+1; j<=pre.size(); ++j)
                    preRight.push_back(pre[j]);
                for (int j=i+1; j<vin.size(); ++j)
                    vinRight.push_back(vin[j]);
            }
        }
        root->left = reConstructBinaryTree(preLeft, vinLeft);
        root->right = reConstructBinaryTree(preRight, vinRight);
        return root;
    }
};

/* // 官方题解思路
class Solution {
public:
	TreeNode* rebuild(vector<int>& pre, int preLeft, int preRight, vector<int>& vin, int vinLeft, int vinRight){
		if(preLeft > preRight || vinLeft > vinRight) return nullptr;
		TreeNode* root = new TreeNode(pre[preLeft]);
		for(int i=0; i<vin.size(); ++i){
			if(vin[i] == pre[preLeft])
			{
				root->left = rebuild(pre, preLeft+1, preLeft+i-vinLeft, vin, vinLeft, i-1);
				root->right = rebuild(pre, preLeft+i-vinLeft+1, preRight, vin, i+1, vinRight);
			}
		}
		return root;
	}
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if (pre.empty() || vin.empty()) return nullptr;
        TreeNode* root = rebuild(pre, 0, pre.size()-1, vin, 0, vin.size()-1);
        return root;
    }
}; */

