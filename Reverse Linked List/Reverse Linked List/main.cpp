#include "ReverseLinkedList.h"
#include <vector>
using namespace std;

int main()
{
	ListNode* test = new ListNode(0);
	ListNode* start = test;
	for (int i = 0; i < 10; i++)
	{	
		if (i == 9)
		{
			test->value = i;
			break;
		}
		test->value = i;
		test->next = new ListNode(0);
		test = test->next;
	}
	test = start;

	ListNode* p = test;
	cout << "The linked list is: ";
	while (p)
	{
		cout << p->value << " ";
		p = p->next;
	}
	cout << endl;

	Solution s;
	ListNode* result = s.reverseListNode(test);

	cout << "The reversed linked list is: ";
	while (result)
	{
		cout << result->value << " ";
		result = result->next;
	}
	cout << endl;

	system("pause");
	return 0;
}