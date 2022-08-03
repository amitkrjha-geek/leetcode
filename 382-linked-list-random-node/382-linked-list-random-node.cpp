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
   int n;
	ListNode* dummy;

	Solution(ListNode* head) {
		dummy = new ListNode(0);
        n = 0;
		dummy->next = head;
		while (head) {
			head = head->next;
			n++;
		}
	}

	int getRandom() {
		int i = rand() % n;
		ListNode* t = dummy;
		for (int ii = 0; ii < i; ++ii) {
			t = t->next;
		}
		return t->next->val;
	}

};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */