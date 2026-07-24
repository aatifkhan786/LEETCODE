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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        // vector<int>ans;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     ans.push_back(temp->val);
        //     temp=temp->next;
        // }
        // int n=ans.size()-1;
        // int i=left-1;
        // int j=right-1;
        // while(i<j){
        //     swap(ans[i],ans[j]);
        //     i++;
        //     j--;
        // }
        // temp=head;
        // int k=0;
        // while(temp!=NULL){
        //     temp->val=ans[k];
        //     k++;
        //     temp=temp->next;
        // }
        // return head;
        stack<int>st;
        ListNode* temp=head;
        int i=0;
        while(temp!=NULL){
            if(i>left-2 && i<right){
                st.push(temp->val);
            }
            i++;
            temp=temp->next;
        }
        temp=head;
        i=0;
        while(temp!=NULL){
            if(!st.empty() && i>=left-1 && i<right){
                temp->val=st.top();
                cout<<st.top();
                st.pop();
            }
            i++;
            temp=temp->next;
        }
        return head;
    }
};