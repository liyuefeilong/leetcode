#include <iostream>
using namespace std;

struct ListNode
{
	int value;
	ListNode *next;
	ListNode(int x) : value(x), next(NULL){};
};

class Solution
{
public:
	void reorderList(ListNode *head) {
		if (head == NULL || head->next == NULL)
			return;
		ListNode *slow = head;
		ListNode *fast = head;
		ListNode *cut = head;
		while (fast && fast->next)
		{
			cut = slow;
			slow = slow->next;
			fast = fast->next->next;
		}
		cut->next = NULL;
	}

	void reverseList(ListNode *head)
	{
		if (head == NULL || head->next == NULL)
			return;
		ListNode *prev = head;
		ListNode *curr = head;
		ListNode *temp = head->next;
	}

	void mergeList(ListNode *head1, ListNode *head2)
	{
		;
	}
};
