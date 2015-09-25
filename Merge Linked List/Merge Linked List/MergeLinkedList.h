#include <iostream>

struct ListNode
{
	int value;
	ListNode* next;
	ListNode(int x) :value(x), next(NULL){};
};

class Solution
{
public:
	ListNode* MergeLinkedList(ListNode* p1, ListNode* p2)
	{
		ListNode* temp1 = p1;
		ListNode* temp2 = p2;
		ListNode* pMerge = p1;
		bool flag = true;
		while (temp1 != NULL && temp2 != NULL)
		{
			if (flag)
			{
				temp1 = p1->next;
				p1->next = temp2;
				p1 = p1->next;
				flag = false;
			}
			if (!flag)
			{
				temp2 = p1->next;
				p1->next = temp1;
				p1 = p1->next;
				flag = true;
			}
		}

		return pMerge;
	}
};
