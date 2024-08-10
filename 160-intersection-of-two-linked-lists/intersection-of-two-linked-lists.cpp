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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL ||headB==NULL) return NULL;
        ListNode*p1=headA;
        ListNode*p2=headB;
        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
            if(p1==p2) return p1;
            if(p1==NULL) p1=headB;
            if(p2==NULL) p2=headA;
            }
            return p1;
        //1st method uses extra space
        /*map<ListNode*,int>mp;
        ListNode* temp=headA;
        int i=1;
        while(temp){
            mp[temp]=i;
            i++;
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            if(mp.find(temp)!=mp.end()){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;*/
    }
};