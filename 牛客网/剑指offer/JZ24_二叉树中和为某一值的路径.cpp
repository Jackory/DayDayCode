/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
// 用栈实现DFS，新建结点保存路径
class Solution {
public:
    struct node {
        TreeNode* ptr;
        vector<int> path;
        node(TreeNode* ptr,vector<int> path):ptr(ptr),path(path) {}
    };
    
    int Sum(vector<int>& x) {
        int sum = 0;
        for (auto i:x) {
            sum += i;
        }
        return sum;
    }
    
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int>> res;
        if (!root) return res;
        stack<node> st;
        vector<int> p;
        node s(root,p);
        st.push(s);
        while (!st.empty())
        {
            node s = st.top();
            st.pop();
            vector<int> n_p = s.path;
            n_p.push_back(s.ptr->val);
            if (s.ptr->right) {
                node n_s(s.ptr->right, n_p);
                st.push(n_s);
            }
            if (s.ptr->left) {
                node n_s(s.ptr->left, n_p);
                st.push(n_s);
            }
            if (!s.ptr->right && !s.ptr->left) {
                if (Sum(n_p) == expectNumber) {
                    res.push_back(n_p);
                }
            }
        }
        return res;
    }
};