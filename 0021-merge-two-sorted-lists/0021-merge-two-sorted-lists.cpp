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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>ans;
        ListNode* temp=list1;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans2;
        ListNode* temp1=list2;
        while(temp1!=NULL){
            ans2.push_back(temp1->val);
            temp1=temp1->next;
        }
        vector<int>result;
        for(int i=0;i<ans.size();i++){
            result.push_back(ans[i]);
        }
        for(int i=0;i<ans2.size();i++){
            result.push_back(ans2[i]);
        }
        sort(result.begin(),result.end());
        ListNode* head = new ListNode();
        ListNode* temp3=head;
    
        for(int i=0;i<result.size();i++){
            temp3->next= new ListNode(result[i]);
            temp3=temp3->next;
            
        }
        return head->next;
    }
};