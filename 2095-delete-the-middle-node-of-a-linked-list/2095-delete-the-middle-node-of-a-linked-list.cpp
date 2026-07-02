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
        if (head == NULL) {
            return NULL;
        }

        if (head->next == NULL) {
            
            return NULL;
        }
        
        int size = 0;
        int index = 0;
        int pos = 1;
        ListNode* temp = head;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        index = size / 2;
        ListNode* curr = head;
        int i = 0;
        while (i < index - 1) {
            curr = curr->next;
            i++;
        }
        ListNode* temp1 = curr->next;
        curr->next = temp1->next;
        delete temp1;

        return head;
    }
};