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
    bool hasCycle(ListNode *head) {
        //tc O(N) sc O(1)
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
        // tc O(N) sc O(n)
        /*if(head==NULL || head->next==NULL) return false;
        int i=0;
        map<ListNode*,int> mp;
        ListNode* temp=head;
        while(temp){
            if(mp.find(temp)!=mp.end()){
                return true;
            }
            mp[temp]=i;
            i++;
            temp=temp->next;
        }
        return false;*/
    }
};