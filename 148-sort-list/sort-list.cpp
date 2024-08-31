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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        if (fast->next != NULL)
            return slow->next;
        return slow;
    }
    ListNode* sortTwoLists(ListNode* first, ListNode* second) {
        // Write your code here.
        ListNode* dummyhead = new ListNode(-1);
        ListNode* third = dummyhead;
        ListNode* temp1 = first;
        ListNode* temp2 = second;
        while (temp1 && temp2) {
            if (temp1->val <= temp2->val) {
                third->next = temp1;
                third = third->next;
                temp1 = temp1->next;
            } else {
                third->next = temp2;
                third = third->next;
                temp2 = temp2->next;
            }
        }
        if (temp1) {
            third->next = temp1;
        } else {
            third->next = temp2;
        }
        return dummyhead->next;
    }
    ListNode* mS(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* middle=middleNode(head);
        ListNode* righthead=middle->next;
        ListNode* lefthead=head;
        middle->next=NULL;
        lefthead=mS(lefthead);
        righthead=mS(righthead);
        return sortTwoLists(lefthead,righthead);
    }
    ListNode* sortList(ListNode* head) {
        head=mS(head);
        return head;
        // brute
        /*if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head;
        int i=0;
        while(temp){
            temp->val=v[i];
            i++;
            temp=temp->next;
        }
        return head;*/
    }
};