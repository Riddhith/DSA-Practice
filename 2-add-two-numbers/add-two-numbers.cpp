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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL || l2==NULL) return NULL;
        ListNode* dummyHead=new ListNode(0);
        ListNode* tail=dummyHead;
        int carry=0;
        while(l1 || l2 || carry){
            int digit1=(l1!=nullptr) ? l1->val : 0;
            int digit2=(l2!=nullptr) ? l2->val : 0;
            int sum=digit1+digit2+carry;
            int digit=sum%10;
            carry=sum/10;
            ListNode* newNode=new ListNode(digit);
            tail->next=newNode;
            tail=tail->next;
            l1=(l1!=nullptr) ? l1->next : 0;
            l2=(l2!=nullptr) ? l2->next : 0;
        }
        ListNode* result=dummyHead->next;
        delete dummyHead;
        return result;
        /*// if(l1->val==0 && l2->val==0){
        //     return new ListNode(0);
        // }
        // if(l1->val==0) return l2;
        // if(l2->val==0) return l1;
        unsigned long long num1=0,num2=0,i1=0,i2=0;
        ListNode* temp1=l1;
        while(temp1){
            int digit=temp1->val;
            num1=num1+digit*pow(10,i1);
            i1++;
            temp1=temp1->next;
        }
        ListNode* temp2=l2;
        while(temp2){
            int digit=temp2->val;
            num2=num2+digit*pow(10,i2);
            i2++;
            temp2=temp2->next;
        }
        unsigned long long num3=num1+num2;
        int digit=num3%10;
        num3=num3/10;
        ListNode* head=new ListNode(digit);
        ListNode* temp=head;
        while(num3){
            int d=num3%10;
            // cout<<d<<" ";
            ListNode* newNode=new ListNode(d,NULL);
            temp->next=newNode;
            temp=temp->next;
            num3=num3/10; 
        }
        return head;*/
    }
};