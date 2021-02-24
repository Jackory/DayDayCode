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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        unordered_map<ListNode*,int> mp;
        for(auto ptr=pHead1; ptr!=nullptr; ptr=ptr->next) {
            mp[ptr] += 1;
        }
        for (auto ptr=pHead2; ptr!=nullptr; ptr=ptr->next) {
            if(mp[ptr])
                return ptr;
        }
        return nullptr;
        
    }
};