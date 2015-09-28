#include "ReorderList.h"

int main()
{
	ListNode *p = new ListNode(1);
	p->next = new ListNode(2);
	p->next->next = new ListNode(3);
	p->next->next->next = new ListNode(4);
	p->next->next->next->next = new ListNode(5);
	//p->next->next->next = new ListNode(4);
	ListNode *p1 = new ListNode(3);

	Solution s;
	ListNode *result = s.reorderList(p);
	while (result)
	{
		cout << result->value << " ";
		result = result->next;
	}

	system("pause");
	return 0;
}