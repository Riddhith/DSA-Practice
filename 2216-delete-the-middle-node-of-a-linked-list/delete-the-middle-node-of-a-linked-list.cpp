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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp=head;
        int l=0;
        while(temp){
            l++;
            temp=temp->next;
        }
        int mid=l/2;
        int c=0;
        temp=head;
        while(temp){
            c++;
            if(c==mid){
                ListNode* Node=temp;
                ListNode* midN=Node->next;
                Node->next=Node->next->next;
                delete(midN);
                break;
            }
            
            temp=temp->next;
        }
        return head;
        /*ListNode* prev=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!= NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        slow->next=NULL;
        delete(slow);
        return head;*/
    }
};