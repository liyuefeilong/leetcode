#include <iostream>
using namespace std;

struct ListNode
{
	int value;
	ListNode* next;
	ListNode(int x) :value(x), next(NULL){}
};

class Solution
{
public:
	ListNode *detectCycle(ListNode *head)
	{
		if (head == NULL || head->next == NULL || head->next->next == NULL)
			return head;
		ListNode* fast = head;
		ListNode* slow = head;
		while (fast->next->next)
		{
			fast = fast->next->next;
			slow = slow->next;
			if (fast == slow)
			{
				ListNode* cycleStart = head;
				while (slow != cycleStart)
				{
					slow = slow->next;
					cycleStart = cycleStart->next;
				}
				return cycleStart;
			}
		}
		return NULL;
	}
};
