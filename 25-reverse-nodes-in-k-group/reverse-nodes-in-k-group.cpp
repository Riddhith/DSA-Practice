/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKsteps(ListNode* node, int k) {
        // reverse the LL starting from node till k steps
        if (k == 1)
            return node;

        ListNode* prev = NULL;
        ListNode* curr = node;
        ListNode* next = node->next;

        ListNode* newHead;

        while (k--) {
            curr->next = prev;
            prev = curr;
            curr = next;
            if (next)
                next = next->next;
        }

        newHead = prev;
        return newHead;
    }

    ListNode* solve(ListNode* node, int k) {
        if (node == NULL)
            return node;
        int x = k;
        ListNode* temp = node;
        while (x--) {
            if (temp == NULL)
                return node;
            temp = temp->next;
        }

        ListNode* headToBeJoined = solve(temp, k);
        ListNode* parentTail = node;
        ListNode* parentHead = reverseKsteps(node, k);

        parentTail->next = headToBeJoined;
        return parentHead;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return solve(head,k);
    }
};