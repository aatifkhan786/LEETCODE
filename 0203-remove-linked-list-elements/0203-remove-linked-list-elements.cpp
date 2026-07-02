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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return 0;
        }
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
           
        }
        if(head==NULL){
            return head;
        }
        ListNode* curr = head;
        
        while(curr->next != NULL) {
            if (curr->next->val == val) {
                ListNode* temp1 = curr->next;
                curr->next = temp1->next;
                delete temp1;
            }
            else{
                curr = curr->next;
            }
           
        }
        

        return head;
    }
};