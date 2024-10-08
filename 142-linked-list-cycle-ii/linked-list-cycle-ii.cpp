/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* entry=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(entry!=slow){
                    entry=entry->next;
                    slow=slow->next;
                }
                return entry;
            }
        }
        return NULL;
        /*if(head==NULL || head->next==NULL) return NULL;
        int i=0;
        map<ListNode*,int> mp;
        ListNode* temp=head;
        while(temp){
            if(mp.find(temp)!=mp.end()){
                return temp;
            }
            mp[temp]=i;
            i++;
            temp=temp->next;
        }
        return NULL;*/
    }
};