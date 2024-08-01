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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        
        ListNode* temp=head;
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        if(n==c) return head->next;
        int i=0;
        temp=head;
        while(temp){
            if(n+1==(c-i)){
                temp->next=temp->next->next;
                break;
            }
            i++;
            temp=temp->next;
        }
        return head;
    }
};