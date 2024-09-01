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
    ListNode* reverseList(ListNode* head) {
        // recursive
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* temp = head;
        int c = 0;
        while (temp) {
            c++;
            temp = temp->next;
        }
        if (c < k)
            return head;
        temp = head;
        vector<pair<ListNode*, int>> v;
        int r = 1;
        v.push_back({head, r});
        int i = 1;
        while (temp) {
            if (i == k) {
                ListNode* t = temp->next;
                if(t) v.push_back({t, ++r});
                temp->next = NULL;
                temp = t;
                i = 1;
            } else {
                i++;
                ++r;
                temp = temp->next;
            }
        }
        // cout<<v[0].first->val<<endl;
        int j = 0;
        ListNode* dummyhead = new ListNode(-1);
        ListNode* move = dummyhead;
        while (j < v.size()) {
            if((c-v[j].second+1)>=k) v[j].first = reverseList(v[j].first);
            move->next = v[j].first;
            move = move->next;
            while (move->next != NULL) {
                move = move->next;
            }
            j++;
        }
        return dummyhead->next;
    }
};