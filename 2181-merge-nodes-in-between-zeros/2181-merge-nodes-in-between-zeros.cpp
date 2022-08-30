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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* curr = head, *dummy = new ListNode(), *newNode = dummy;
        while(curr) {
            if(curr->val == 0)
                curr = curr->next;
            int sumVal = 0;
            while(curr and curr->val != 0) {
                sumVal += curr->val;
                curr = curr->next;
            }
            if(sumVal > 0) {
                newNode->next = new ListNode(sumVal);
                newNode = newNode->next;
            }
        }
        return dummy->next;
    }
};