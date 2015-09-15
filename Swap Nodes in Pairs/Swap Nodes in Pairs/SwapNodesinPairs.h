#include <iostream>
using namespace std;

struct ListNode
{
	int value;
	ListNode *next;
	ListNode(int x) :value(x), next(NULL){}
};

class Solution
{
public:
	ListNode* swapPairs(ListNode* head)
	{
		if ((head == nullptr) || (head->next == nullptr)) return head;
		ListNode* p = head;
		ListNode* pNext = NULL;
		ListNode* pNNext = NULL;
		while (p)
		{
			pNext = p;
			p = p->next;
			ListNode* k = p->next;
			if (pNext == head)
				pNNext->next = p;
			p->next = k;
			pNNext = pNext;
			p = k;
		}
		return head;
	}
};