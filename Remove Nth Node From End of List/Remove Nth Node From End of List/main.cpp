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
	ListNode* p = test;
	cout << "The linked list is: ";
	while(p)
	{
		cout << p->value << " ";
		p = p->next;
	}

	int n;
	cout << "\nRemove the nth node from end of list, please input n: ";
	cin >> n;

	Solution s;
	ListNode* result = s.removeNthFromEnd(test, n);

	cout << "The result is: ";
	while (result)
	{
		cout << result->value << " ";
		result = result->next;
	}
	cout << endl;
	system("pause");
	return 0;
}