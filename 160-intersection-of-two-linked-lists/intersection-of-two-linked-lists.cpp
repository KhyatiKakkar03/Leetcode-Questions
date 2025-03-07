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
        ListNode* p=headA;
        ListNode* q=headB;
        int l1=0,l2=0;
        while(p!=NULL)
        {
            l1++;
            p=p->next;
        }
        p=headA;
        while(q!=NULL)
        {
            l2++;
            q=q->next;
        }
        q=headB;
        int diff=abs(l1-l2);
        if(l1>l2)
        {
            while(diff)
            {
                p=p->next;
                diff--;
            }
        }
        else
        {
            while(diff)
            {
                q=q->next;
                diff--;
            }
        }
        while(q!=NULL&&p!=NULL)
        {
            if(q==p)
            break;
            p=p->next;
            q=q->next;
        }
        return p;
    }
};