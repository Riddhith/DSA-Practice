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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int c=0;
        ListNode* temp=head;
        while(temp){
            c++;
            temp=temp->next;
        }
        cout<<c<<endl;
        k=k%c;
        // cout<<k<<endl;
        if(k==0) return head;
        int p=c-k;
        int i=0;
        temp=head;
        while(temp){
            i++;
            if(i==p) break;
            temp=temp->next;
        }
        ListNode* secondhead=temp->next;
        temp->next=NULL;
        ListNode* move=secondhead;
        while(move->next!=NULL){
            move=move->next;
        }
        move->next=head;
        return secondhead;
    }
};