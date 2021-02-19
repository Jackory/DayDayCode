/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
// 链表看成图，深度优先搜索
class Solution {
public:
    map<RandomListNode*, RandomListNode*> visited;
    RandomListNode* Clone(RandomListNode* pHead)
    {
        RandomListNode* newHead = nullptr;
        if (pHead == nullptr) return nullptr;
        if (visited.count(pHead) == 1) return visited[pHead];
        newHead = new RandomListNode(pHead->label);
        visited[pHead] = newHead;
        newHead->next = Clone(pHead->next);
        newHead->random = Clone(pHead->random);
        return newHead;
    }
};