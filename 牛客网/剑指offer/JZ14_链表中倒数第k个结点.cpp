/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode* res = nullptr;
        int i=0;
        recurrent(pListHead, k, i, res);
        return res;
    }
    void recurrent(ListNode* head, unsigned int k, int& i, ListNode*& res) {
        if(head == nullptr) {
            return;
        }
        recurrent(head->next, k, i, res);
        ++i;
        if (i==k)
            res = head;
        return;
    }
};