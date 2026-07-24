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
        // ListNode* prev=NULL;
        // ListNode* curr=head;
        // ListNode* next=NULL;
        // while(curr!=NULL){
        //     next=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=next;
        // }
        // return prev;
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans1;
        int n=ans.size()-1;
        for(int i=n;i>=0;i--){
            ans1.push_back(ans[i]);
        }
        temp = head;
        int i = 0;

        while (temp != NULL) {
            temp->val = ans1[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};