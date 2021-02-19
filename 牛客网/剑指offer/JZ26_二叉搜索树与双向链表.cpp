/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    TreeNode* pre = nullptr;
    TreeNode* head = nullptr;
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == nullptr) return nullptr;
        Inorder(pRootOfTree);
        return head;
    }
    void Inorder(TreeNode* cur)
    {
        if (cur == nullptr) return;
        Inorder(cur->left);
        if (pre == nullptr) {
            head = cur;
            pre = cur;
        }
        else {
            cur->left = pre;
            pre->right = cur;
            pre = cur;
        }
        Inorder(cur->right);
    }
};