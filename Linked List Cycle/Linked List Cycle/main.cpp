#include "LinkedListCycle.h"
#include <iostream>
using namespace std;

int main()
{
	ListNode* test = new ListNode(3);
	test->next = new ListNode(4);
	test->next->next = new ListNode(5);
	test->next->next->next = new ListNode(6);
	test->next->next->next->next = new ListNode(7);
	test->next->next->next->next->next = test->next;
	ListNode* p = test;
	cout << "The linked list is: ";
	for (int i = 0; i < 15; i++)
	{
		cout << p->value << "->";
		p = p->next;
	}
	cout << "...\n";

	Solution s;
	bool result = s.hasCycle(test);

	if (result)
		cout << "There is a cycle in it! "<< endl;
	else
		cout << "There is not a cycle in it! " << endl;
	system("pause");
	return 0;
}