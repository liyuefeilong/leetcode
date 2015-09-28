#include <iostream>

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution
{
public:
	ListNode* mergeTwoLists(ListNode* p1, ListNode* p2)
	{
		if (!p1) return p2;
		if (!p2) return p1;

		ListNode Head(0);
		ListNode *Pre = &Head;

		while (p1 && p2)
		{
			if (p1->val < p2->val)
			{
				Pre->next = p1;
				p1 = p1->next;
				Pre = Pre->next;
			}
			else
			{
				Pre->next = p2;
				p2 = p2->next;
				Pre = Pre->next;
			}
		}

		while (p1)
		{
			Pre->next = p1;
			p1 = p1->next;
			Pre = Pre->next;
		}

		while (p2)
		{
			Pre->next = p2;
			p2 = p2->next;
			Pre = Pre->next;
		}
		return Head.next;
	}
};