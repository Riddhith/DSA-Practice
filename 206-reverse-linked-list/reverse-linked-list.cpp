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
        stack<int> st;
        ListNode* temp=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(!st.empty()){
            temp->val=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;
        /*
        ListNode* temp=head;
        vector<int> vec;
        while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int n=vec.size();
        for(int i=0;i<n/2;i++){
            swap(vec[i],vec[n-i-1]);
        }
        temp=head;
        int i=0;
        while(temp){
            temp->val=vec[i];
            temp=temp->next;
            i++;
        }
        return head;*/
    }
};