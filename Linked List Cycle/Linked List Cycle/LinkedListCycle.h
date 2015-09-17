#include <iostream>

struct ListNode
{
	int value;
	ListNode* next;
	ListNode(int x) :value(x), next(NULL){}
};

class Solution
{
public:
	bool hasCycle(ListNode *head)
	{
		if (head == nullptr || head->next == nullptr)
			return false;
		ListNode* fast = head;
		ListNode* slow = head;
		while (fast->next->next)
		{
			fast = fast->next->next;
			slow = slow->next;
			if (fast == slow) return true;
		}
		return false;
	}
};