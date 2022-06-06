/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>m;
        ListNode *p=headA;
        ListNode *q=headB;
        if(headA==headB)return headA;
        while(p)
        {
            m[p]=1;
            p=p->next;
        }
        while(q)
        {
            if(m[q]!=0)
            {
                return q;
            }
            q=q->next;
        }
        return NULL;
        
    }
};