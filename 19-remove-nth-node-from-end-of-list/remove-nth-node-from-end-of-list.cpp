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
        ListNode* front=head;
        ListNode* back=head;
        for(int i=0;i<n;i++){
            front=front->next;
        }
        if(front==NULL) return head->next;
        while(front->next!=NULL){
            back=back->next;
            front=front->next;
        }
        ListNode* delNode=back->next;
        back->next=back->next->next;
        delete delNode;
        return head;
        /*
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
                ListNode* delNode=temp->next;
                temp->next=temp->next->next;
                delete delNode;
                break;
            }
            i++;
            temp=temp->next;
        }
        return head;*/
    }
};