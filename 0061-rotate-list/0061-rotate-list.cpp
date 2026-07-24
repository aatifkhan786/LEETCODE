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
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0)
            return head;
        
        // vector<int> arr;

        // ListNode* temp = head;

        // // Linked List -> Array
        // while (temp != NULL) {
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }

        // int n = arr.size();
        // k = k % n;

        // vector<int> ans(n);

        // // Right Rotate
        // for (int i = 0; i < n; i++) {
        //     ans[(i + k) % n] = arr[i];
        // }

        // // Array -> Linked List
        // temp = head;
        // int i = 0;

        // while (temp != NULL) {
        //     temp->val = ans[i];
        //     i++;
        //     temp = temp->next;
        // }

        // return head;





        ListNode* temp=head;
        int i=1;
        while(temp->next!=NULL){
            i++;
            temp=temp->next;
            
        }
        temp->next=head;
        int a=k%i;//kitne last se move karne hai
        int b=i-a-1;//total elment-elemnts moved from last 
        int c=b+1;
        temp=head;
        while(c>0){
            temp=temp->next;
            c--;
        }
        ListNode* curr=head;
        while(b>0){
            curr=curr->next;
            b--;
        }
        curr->next=NULL;
        return temp;

    }
};