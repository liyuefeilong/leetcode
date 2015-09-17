#include <iostream>

struct ListNode
{
	int value;
	ListNode* next;
	ListNode(int x): value(x), next(NULL){};
};

class Solution
{
public:
	ListNode *removeNthFromEnd(ListNode *head, int n)
	{
		if (head == NULL)
			return NULL;
		ListNode *fast = head;
		ListNode *slow = head;
		ListNode *temp = head;
		for (int i = 0; i < n ; i++)
		{
			fast = fast->next;
			if (fast)
				continue;
			else break;
		}
		while (fast)
		{
			fast = fast->next;
			temp = slow;
			slow = slow->next;
		}
		if (slow == head)
		{
			head = head->next;
			return head;
		}
		temp->next = slow->next;
		delete slow;
		return head;
	}
};
