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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        	int jwei = 0, sum = 0;
	int val1 = 0, val2 = 0;
	ListNode *ans = (ListNode *)malloc(sizeof(ListNode));
	ListNode *p;
	p = ans;
	while (l1 != NULL||l2!=NULL)
	{
		if (l1 == NULL) { val1 = 0; }
		else{val1 = l1->val;}
		if (l2 == NULL) { val2 = 0; }
		else { val2 = l2->val; }

		sum = (jwei + val1 + val2)%10;
		jwei = (jwei + val1 + val2) / 10;
		ListNode * q = new ListNode(sum);
		p->next = q;
		p = q;
		if (l1 != NULL) { l1 = l1->next; }
		if (l2 != NULL) { l2 = l2->next; }
	}
	if (jwei != 0)
	{
		ListNode * q = new ListNode(jwei);
		p->next = q;
		p = q;
	}
	p->next = NULL;
	ans = ans->next;
	return ans;
    }
};
