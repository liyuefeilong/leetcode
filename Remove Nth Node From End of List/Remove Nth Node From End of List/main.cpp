#include "RemoveNode.h"
#include <iostream>
using namespace std;

int main()
{
	ListNode* test = new ListNode(3);
	test->next = new ListNode(4);
	test->next->next = new ListNode(5);
	test->next->next->next = new ListNode(6);
	test->next->next->next->next = new ListNode(7);

	Solution s;
	ListNode* result = s.removeNthFromEnd(test, 1);
	while (result)
	{
		cout << result->value << " ";
		result = result->next;
	}
	system("pause");
	return 0;
}