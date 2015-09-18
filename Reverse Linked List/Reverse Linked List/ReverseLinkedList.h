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
	ListNode* reverseListNode(ListNode* head)
	{
		if (head == NULL || head->next == NULL)
			return head;
		ListNode* p_pre = head;
		ListNode* p_cur = head;
		ListNode* p_next = p_cur->next;
		while (p_cur->next)
		{
			p_cur->next = p_next->next;
			p_next->next = p_pre;
			p_pre = p_next;
			p_next = p_cur->next;
		}
		return p_pre;
	}
};