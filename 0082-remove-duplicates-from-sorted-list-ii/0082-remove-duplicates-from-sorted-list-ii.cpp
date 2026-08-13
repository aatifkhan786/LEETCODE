class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* temp = head;
        ListNode* temp1 = head;
        ListNode* prev = NULL;

        while (temp != NULL && temp->next != NULL) {

            if (temp->val == temp->next->val) {

                int value = temp->val;

                while (temp != NULL && temp->val == value) {
                    temp = temp->next;
                }

                if (prev == NULL) {
                    temp1 = temp;
                }
                else {
                    prev->next = temp;
                }

            }
            else {
                prev = temp;
                temp = temp->next;
            }
        }

        return temp1;
    }
};