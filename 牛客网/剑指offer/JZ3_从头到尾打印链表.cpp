/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
// 反转链表打印
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        ListNode* newhead = reverseList(head);
        vector<int> arr;
        for(auto cur = newhead; cur != nullptr; cur = cur->next){
            arr.push_back(cur->val);
        }
        return arr;
    }
    ListNode* reverseList(ListNode* head){
        if (head == nullptr || head -> next == nullptr) return head;
        ListNode* newhead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newhead;
    }
};